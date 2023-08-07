#include <iostream>
using namespace std;
int main()
{
	char mn;
	int amount = 0;
	float result = 0.0;

	cout << "==========Menu==========\n";
	cout << "Press 1 : Enter Amount\n";
	cout << "Press 2 : Interest 7%\n";
	cout << "Press 3 : Interest 5%\n";
	cout << "Press 4 : Exit\n";

	do{cout << "Enter Menu : "; cin >> mn;
			if (mn == '1')//
				{cout << "Enter Amount : ";
				cin >> amount;}
			else if (mn == '2')//
				{result = amount * 0.07;
				cout << " 7% of " << amount << " = " << amount + result << endl;}
			else if (mn == '3')//
				{result = amount * 0.05;
				cout << " 5% of " << amount << " = " << amount + result << endl;}
			else cout << "Invalid Menu! Please Choose Again\n";
			//
			}while(mn != 0);
return(0);
}

