#include <iostream>
using namespace std;
int main(){
	int score;
	cout << "Input C++ Score : ";
	cin >> score;
	cout <<"You " << ((score >= 50 )?"pass":"fail") << " with score " << score << endl ;
	system("pause");
	return(0);		
}