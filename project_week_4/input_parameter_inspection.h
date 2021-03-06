#ifndef H_INPUT_PARAMETER_NUMBER
#define H_INPUT_PARAMETER_NUMBER

#include <string>
#include <vector> 
#include <iostream> 
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/features2d.hpp>
#include <opencv2/imgproc.hpp>

enum InputFeedback
{
	WRONG_FEATURE,
	FEW_PARAMETER,
	TOO_MUCH_PARAMETER,
	REDUCE_COLOR,
	SALT_EFFECT,
	SEPARATE_COLOR,
	DETECT_EDGES,
	SHARPENING,
	GEOMETRY,
	ADD_IMAGE,
	SUBTRACT_IMAGE,
	MULTIPLY_IMAGE,
	DIVIDE_IMAGE,
	PANORAMA,
	CARTOON,
	ERODE,
	DILATE,
	OPENING,
	CLOSING,
	DECOLOR,
	WAVING_EFFECT,
	DETECT_CORNERS
};

InputFeedback parameterNumberInspection(int inputNumbers, const char* featureName);

#endif
