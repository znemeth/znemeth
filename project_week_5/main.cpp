#include "opencv2/opencv.hpp"
#include <iostream>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"
#include <opencv2/highgui.hpp>
#include <opencv2/video.hpp>
#include <sstream>

using namespace std;
using namespace cv;

int main() {

	VideoCapture cap("C:\\Users\\NEMETH\\Desktop\\greenfox\\opencv_project\\megalotis-sapphire\\img\\360p.avi");
	int frame_counter = 0;

	Mat fgMaskMOG2; //fg mask fg mask generated by MOG2 method
	//Ptr<BackgroundSubtractor> pMOG = v;
	Ptr<BackgroundSubtractor> pMOG2; //MOG2 Background subtractor

	namedWindow("FG Mask MOG2", WINDOW_NORMAL);
	//pMOG = createBackgroundSubtractorMOG();
	pMOG2 = createBackgroundSubtractorMOG2();

	if (!cap.isOpened()) {
		cout << "Error opening video stream or file" << endl;
		cin.get();
		return -1;
	}

	Mat frame;

	while (1) {

		
		// Capture frame-by-frame
		frame_counter += 1;
		if (frame_counter == cap.get(CAP_PROP_FRAME_COUNT)) {
			frame_counter = 0;
			cap.set(CAP_PROP_POS_FRAMES, frame_counter);
		}

		cap >> frame;

		// If the frame is empty, break immediately
		if (frame.empty())
			break;

		// Display the resulting frame
		imshow("Frame", frame);

		pMOG2->apply(frame, fgMaskMOG2);
		imshow("FG Mask MOG2", fgMaskMOG2);

		// Press  ESC on keyboard to exit
		char c = (char)waitKey(25);
		if (c == 27)
			break;
	}

	int width = cap.get(CAP_PROP_FRAME_WIDTH);
	int height = cap.get(CAP_PROP_FRAME_HEIGHT);

	cout << width << " " << height << endl;

	cin.get();

	// When everything done, release the video capture object
	//cap.release();

	// Closes all the frames
	//destroyAllWindows();

	return 0;
}