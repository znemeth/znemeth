#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for a number.
    // It would ask this many times to enter an integer,
    // if all the integers are entered, it should print the sum and average of these
    // integers like:
    //
    // Sum: 22, Average: 4.4
    int a;
    int b;
    int c = 0; //kezdoerteket nem adtam meg & akkor hulyesg jott ki

    std::cout << "Number of numbers: " << std::endl;
    std::cin >>b;

    for (int i=0; i<b; i++) {
        std::cout << "Write a number: " << std::endl;
        std::cin >>a;
        c = c + a;
    };

    int m = c / b;

    std::cout << "sum: " << c << std::endl;
    std::cout << "mean: " << m << std::endl;

    return 0;
}