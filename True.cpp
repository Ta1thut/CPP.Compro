#include <iostream>
using namespace std;
int main(){
	int score;
	cout << "Enter Your Score : ";
	cin >> score;
	cout << "SCORE = " << score << endl ;
	cout <<"You " << ((score >= 50 )?"pass! ":"fail! ") << endl ;
	system("pause");
	return(0);		
}