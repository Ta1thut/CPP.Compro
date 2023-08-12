#include <iostream>
using namespace std;
int main()
{
	char mn;

	cout << "Select Menu\n";
	cout << "*********************\n";
	cout << "\n";
	cout << "1.Align Left \n";
	cout << "2.Align Right\n";
	cout << "3.Center\n";
	cout << "4.Exit\n";
	cout << "\n";
	cout << "*********************\n";
	cout << "\n";

	do{cout << "Select Menu No. : "; cin >> mn;
			if (mn == '1')//
			{
				cout << "Input number of line : ";
				int n, j, i;
				cin >> n;
				for (i = 1; i <= n; i++){
					for(j = 1; j <= i; j++)
						{cout << "*";}
					cout << "\n";
				}
			}
			else if (mn == '2')//
			{
				cout << "Input number of line : ";
				int n, j, i, k;
				cin >> n;
				for (i = 1; i <= n; i++){
					for(k = n - i; k > 0; k--)
						{cout << " ";}
						for(j = 1; j <= i; j++)
							{cout << "*";}
					cout << "\n";
				}
			}
			else if (mn == '3')//
				{
				cout << "Input number of line : ";
				int j, r, i, space;
				cin >> r;
				for (i = 1; i <= r; i++){
					for(space = i; space < r; space ++)
						{cout << " ";}
						for(j = 1; j <= (2 * i - 1); j++)
							{cout << "*";}
					cout << "\n";
				}
				}
			else if (mn == '4')//
			{
				exit(0);
			}
			else cout << "Invalid Menu! Please Choose Again\n";
			//
			}while(mn != 0);
		return(0);
}
