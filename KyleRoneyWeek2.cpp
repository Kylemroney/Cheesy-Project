// KyleRoneyWeek2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main()
{
	// Variables I will be using for this program
	double produce;
	double cheese;
	// Cheesy program introduction
	cout << "******************************************************************" << endl;
	cout << "***************** This is my cheesy Github submission! ***********" << endl;
	cout << "******************************************************************" << endl;
	// Asking the user to input the number of kilograms
	cout << "Please enter the total number of kilograms of cheese produced: " << endl;
	// Here we will be doing the converting for the number of cheese containers
	cin >> produce;
	cheese = produce / 2.76;
	// Now the outputs for the cheese containers
	cout << "The number of containers to hold the cheese is: " << right << cheese << endl;
	cout << "The cost of producing " << cheese << " container(s) of cheese is: " << right << "$" << cheese * 4.12 << endl;
	cout << "The profit from producing " << cheese << " container(s) of cheese is: " << right << "$" << cheese * 1.45 << endl;
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
