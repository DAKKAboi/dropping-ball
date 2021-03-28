// BallDrop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PhysicalConstants.h"

double enterTowerHeight()
{
    std::cout << "Enter tower height:\t";

    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}

double calculatePosition(double towerHeight, double time)
{
    double position{towerHeight - (constants::gOnEarth*time*time)/2};
    return position;

}

void hitGround(double position, double time)
{

    if (position > 0)
        std::cout << "At " << time << " seconds, the ball is at height: "
        << position << " meters \n";
    else
        std::cout << "At " << time << " seconds, the ball is on the ground\n";

}


int main()
{
    double towerHeight{ enterTowerHeight() };

    hitGround(calculatePosition(towerHeight, 0), 0);
    hitGround(calculatePosition(towerHeight, 1), 1);
    hitGround(calculatePosition(towerHeight, 2), 2);
    hitGround(calculatePosition(towerHeight, 3), 3);
    hitGround(calculatePosition(towerHeight, 4), 4);
    hitGround(calculatePosition(towerHeight, 5), 5);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
