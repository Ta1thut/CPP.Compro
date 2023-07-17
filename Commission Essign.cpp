#include <iostream>
#include <string>
using namespace std;
int main(){
	string name;
	int salary, sale, commis, total;
	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Salary : ";
	cin >> salary;
	cout << "Enter Sale : ";
	cin >> sale;
	cout << "Enter Commission Percent : ";
	cin >> commis;
	total = salary + (sale * commis)/100;
	cout << "------Output------\n";
	cout << "Total Revenue " << total << " Bath\n";
	cout << "------------------\n";
	system("pause");
	return(0);
}