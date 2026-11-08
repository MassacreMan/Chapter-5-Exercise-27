// This program produces a bar chart showing the population of Prairiesville at 20 year intervals from 1910 to 2010, provided from an external file.
// Each asterisk represents 1,000 people. The data is read from a file named "People.txt".
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream inputFile("People.txt"); // Opens the file for reading
	if (!inputFile) {
		cout << "Error opening file." << endl; // Checks if the file was successfully opened 
		return 1;
	}

	// Prints the header for the bar chart
	cout << "Population of Prairiesville (1910-2010)" << endl;
	cout << "Each dot represents 1,000 people." << endl;

	// Variables
	int population;
	int year = 1910; // Initializes the year to 1910

	while (inputFile >> population) { // Reads the year and population from the file
		cout << year << " "; // Prints the year
		for (int i = 0; i < population / 1000; ++i) { // Loops to print asterisks based on population
			cout << "*"; // Prints an asterisk for every 1,000 people
		}
		cout << endl; // Moves to the next line after printing the bar

		// Increment the year by 20 for the next iteration
		year += 20;
	}

	inputFile.close();
	return 0;

 }