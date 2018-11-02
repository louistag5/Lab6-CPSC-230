#include<iostream>
#include<fstream>
#include<cmath>
#include<cctype>
#include<string>
#include<iomanip>
#include<cstdlib>

using namespace std;
//Declare a constant  
//numArray maxium size
const int MAX = 100;

int main()
{
	//Declared variables
	double numArray[MAX];
	int x = 0;
	double avg = 0;
	double sum = 0;
	double count;
	ifstream inFile;

	// open the file
	inFile.open("data7.txt");

	//check to make sure the file is open, so if does not this if statement will execute
    if (inFile.fail()) {
		cout << " Your file just fail";
		exit(1);
	}
	   // the end of file if not infile
	while (!inFile.eof())
	{
		inFile >> numArray[x];
		sum += numArray[x];
		x++;
		cout << numArray[x - 1] << endl;

	}
	//close the infile
	inFile.close();
	count = x;
	//calculation 
	avg = sum / count;
	// creating the outfile name result
	// this file will be created and the average will be shown there
	ofstream outFile;
	outFile.open("Results.txt");

	// for loop 
	for
		(int i = 0; i < x; i++)
	{
		if (numArray[i] < avg)

			outFile << " numArray "  << avg <<  " is below average. \n ";


		else if (numArray[i] == avg)
		{

			outFile << numArray[i] << " is average.\n ";
		}
		else
		{
			outFile << numArray[i] << " is below average.\n ";
		}
	}
	//  closing the outfile
 outFile.close();
 // a coout the variable count
 cout << count << endl;
 system("pause");
	return 0;
}