#include<iostream>
using namespace std;
int main(){

	const int bill[] = {1000, 100, 50, 20};
	int wd , count;
	
	cout << "Amount to be withdraw: ";
	cin >> wd;
	cout << '\n';

	for(int i = 0 ; i < 4 ; i++){
		count = wd / bill[i];
		wd -= count * bill[i];
		cout << bill[i] << ':' << count << endl;
	}
	system("pause");
	return(0);
}