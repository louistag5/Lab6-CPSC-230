#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std; 
int main()
{

	Loan loanl(ID(111, 22, 4444), 2300, 5.5, 48);

	Loan loan2;
	cout << "Display loan" << endl;
	loan.display();

	loan2.set();
	cout << "Display loan2 " << endl;
	loan2.display();
	return 0;
}



