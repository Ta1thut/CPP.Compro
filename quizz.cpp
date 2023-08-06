#include <iostream>
using namespace std;

int main()
{
    cout << "=========QUIZZES==========\n";
	int   mt,fn;
	float qtotal,total,q1,q2,q3;
	cout << "Enter quizz 1 scoer (10) :";
	cin >> q1;
	cout << "Enter quizz 2 scoer (10) :";
	cin >> q2;
	cout << "Enter quizz 3 scoer (10) :";
	cin >> q3;
   
	cout << "=========MIT-term==========\n";
    cout << "Enter min term (40) :";
	cin >> mt;
	
	cout << "=========FINAL=========\n";
	cout << "Enter final (50) :";
	cin >> fn;

	qtotal = (q1+q2+q3)/3 ;
	total = qtotal+mt+fn ;

	cout << "Quizz Total :"<< qtotal <<endl ;
	cout << "mid term :"<< mt << endl;
    cout << "Final :"<< fn << endl;
	cout << "Total :"<< total << endl;
    cout << "** Your score is " << ((total>=50) ? "pass!" : "fail!") << endl;



		system ("pause");
		return 0;
}