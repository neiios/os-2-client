#include <iostream>
#include <string>
#include <chrono>
#include <vector>
#include "MathLibrary.h"

int main()
{
    Timer t;
    std::cout << "Timer started.\n";

    std::cout << "Task 1 started.\n";
    std::string username = "vaikas", day = "T", time = "15:00-16:00";
    familyControl(username, day, time); // Requires to run a program with admin privileges

    std::cout << "Task 2 started.\n";
    std::string firstName = "Igor", lastName = "Repkin";
    recursiveMkdir(firstName, lastName);
    recursiveRm(lastName);

    std::cout << "Task 3 started.\n";
    int studentID = 2110269;
    double x0 = -(studentID % 19); // -15
    double xn = studentID % 25; // 19
    double deltax = (double) studentID / 1000000000000;
    std::vector<double> vecF = { -2, -1, 0, 1, 2 };

    for (auto& F : vecF)
    {
        std::cout << "Solving with F = " << F << std::endl;
        recursiveMkdir(firstName, lastName);
        solveTschirnhausenCubic(F, x0, xn, deltax, firstName, lastName);
        concatFiles(firstName, lastName, std::to_string(F));
        sortResults(std::to_string(F));
        recursiveRm(lastName);
        std::cout << std::endl;
    }

    std::cout << t.elapsed() << std::endl;

    system("pause");
}
