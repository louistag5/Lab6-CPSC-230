//Phone Book
//
//Rodger Irish
#include<vector>
#include <iostream>
#include <string>

using namespace std;

//Prototypes
void showPhoneBook(vector <string> N, vector <int> P, int size);
int toChoice(char c);
void editNum(vector <string> N, vector<int> P, int size, int c1);

int main()
{
	//variables
	string eleName;
	int elePhone;
	char choice;
	/*string name[10] = { "Andrico", "Bonnie", "Charles",
						"Debbie", "Enrique", "Felicia"};*/

	vector <string> name(5);
	 vector <int> phone(5);



	name.push_back("Andrico");
	name.push_back("Bonnie");

	name.push_back("Charles");

	name.push_back("Debbie");

	name.push_back("Enrique");

	phone.push_back(5551234);
	phone.push_back(5555678);

	phone.push_back(5552468);

	phone.push_back(5551379);

	phone.push_back(5559876);



	do
	{

		
		//call function showPhoneBook
		showPhoneBook(name, phone, 10);

		//get user request
		cout << "\n\nWho\'s phone number do you want to see?" << endl;
		cout << "remember, type \'e\' for edit and \'x\' for exit, otherwise just type the number of the person." << endl;
		cin >> choice;

		//call function toChoice
		elePhone = toChoice(choice);
		if (elePhone != -1)
		{
			cout << "The phone number for " << name[elePhone] << " is " << phone[elePhone] << ".\n\n\n\n\n\n";
		}
		if (choice == 'e')
		{
			int choice1;
			cout << "Which entry do you want to edit?  ";
			cin >> choice1;
			editNum(name, phone, 10, choice1);
		}
	} while (choice != 'x');

	return 0;
}

//print function
void showPhoneBook(vector <string> N, vector <int> P, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << "  " << N[i] << "\t" << P[i] << endl;
	}
	return;
}

int toChoice(char c)
{
	int num=0;
	if (c != 'e' && c != 'x')
	{
		switch (c)
		{
		case '0':
			num = 0;
			return num;
		case '1':
			num = 1;
			return num;
		case '2':
			num = 2;
			return num;
		case '3':
			num = 3;
			return num;
		case '4':
			num = 4;
			return num;
		case '5':
			num = 5;
			return num;
		case '6':
			num = 6;
			return num;
		case '7':
			num = 7;
			return num;
		case '8':
			num = 8;
			return num;
		case '9':
			num = 9;
			return num;

		}
	
	}
	else
		return -1;
	return num;
}

void editNum(vector <string> N, vector<int> P, int size, int c1)

{
	string name;
	int number;
	cout << "What is the name for entry " << c1 << "?:  ";
	cin >> name;
	cout << "What is the number for entry " << c1 << "?:  ";
	cin >> number;

	N[c1] = name;
	P[c1] = number;
	return;
}