// Copyright J. Dharmawan. All Rights Reserved.

#define _USE_MATH_DEFINES

#include <iostream>

using namespace std;

/**
 * Prints something
 * @return Exit status
*/
int main()
{
    //cout << "Hello World!\n";
    float Angle;

    std::cout << "Enter an angle: ";
    std::cin >> Angle;

    Angle = Angle * M_PI / 180;

    float Cosine = cosf(Angle);
    float Sine = sinf(Angle);

    std::cout << "Cosine of Angle: " << Cosine << "\n";
    std::cout << "Sine of Angle: " << Sine << "\n";
}

void Exercise4()
{
    int FirstLocation;
    int SecondLocation;

    std::cout << "Enter the first altitutde: ";
    std::cin >> FirstLocation;
    std::cout << "Enter the second altittude: ";
    std::cin >> SecondLocation;

    std::cout << "The altitude change is: " << SecondLocation - FirstLocation;
}

void Exercise6()
{
    float Angle;

    std::cout << "Enter an angle: ";
    std::cin >> Angle;

    Angle = Angle * M_PI / 180;

    float Cosine = cosf(Angle);
    float Sine = sinf(Angle);

    std::cout << "Cosine of Angle: " << Cosine << "\n";
    std::cout << "Sine of Angle: " << Sine << "\n";
    
}
