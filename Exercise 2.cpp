#include <iostream>
#include <string>
using namespace std;
int main(){

	string Name;
	int Birth;
	cout << "Enter name : ";
	cin >> Name;
	cout << "Enter Year of birth : ";
	cin >> Birth;
	cout << "Your Age = " << 2566 - Birth << " Years old\n";
	system("pause");
	return(0);
}