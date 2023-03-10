#include <iostream>
#include <string>
#include <chrono>
#include <vector>
#include "MathLibrary.h"

int main()
{
	Timer t;
	std::cout << "Task 1 (Timer) started.\n";

	std::cout << "Task 2.1 started.\n";
	std::string username = "vaikas";
	std::vector<std::string> day = { "T", "M", "Th" }, time = { "15:00-16:00", "7:00-18:00", "20:00-12:00" };
	familyControlVec(username, day, time); // Requires admin privileges
	std::cout << "Task 2.1 finished.\n";

	std::cout << "Task 3 started. Creating the directory structure.\n";
	std::string firstName = "Igor", lastName = "Repkin";
	recursiveMkdir(firstName, lastName);
	std::cout << "Task 3 finished.\n";

	int studentID = 2110269;
	double x0 = -(studentID % 19); // -15
	double xn = studentID % 25; // 19
	double deltax = (double) studentID / 1000000000000;
	std::vector<double> vecF = { -2, -1, 0, 1, 2 };
	//std::vector<double> vecF = { -2 }; // Simpler case

	std::cout << "Task 4 and 5 started.\n";
	for (auto& F : vecF)
	{
	    std::cout << "Solving with F = " << F << std::endl;
	    solveTschirnhausenCubic(F, x0, xn, deltax, firstName, lastName);
		//solveTschirnhausenCubic(F, 2, 10, 0.5, firstName, lastName); // Simpler case

	    concatFiles(firstName, lastName, std::to_string(F));
	    sortResults(std::to_string(F));
	}
	std::cout << "Task 4 and 5 finished.\n";

	std::cout << "The program took: " << t.elapsed()  << " seconds to run." << std::endl;

	system("pause");
}
