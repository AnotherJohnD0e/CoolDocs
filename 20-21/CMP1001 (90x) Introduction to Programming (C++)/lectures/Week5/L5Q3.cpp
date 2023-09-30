#include <iostream>
#include <cmath>

int main()
{
    double vx;
    double h;
    double second;

    std::cin >> vx >> h >> second;

    double formula = 4.905 * second * second;

    if (formula<h)
    {
        std::cout << "Object did not hit the ground" << std::endl;
        std::cout << "Final x distance: " << vx * second<<std::endl;
        std::cout << "Final height :" << h - formula;
    }
    else
    {
        std::cout << "Object hit the ground" << std::endl;
        std::cout << "Time until crash : " << sqrt(((h * 2) / 9.81)) << std::endl;
        std::cout << "Final x distance : " << vx * sqrt(((h * 2) / 9.81));
    }
}
