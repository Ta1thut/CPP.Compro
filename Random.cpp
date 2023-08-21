#include <iostream>
#include <iomanip> // fixed<<setprecision
#include <time.h>
using namespace std;
int main(){
	
	int num, score, o=0, max = 0 ;
	float avg;
	srand(time(NULL));
	num = 1 + rand() % 10; // @random 1 
	cout << "Random number of students(1-10) : " << num << endl; //random 1
	for(int s = 1; s <= num; s++ ){
		cout << "Input Score " << s << " : " ;                                            
		cin >> score;
		if(score > max){max = score;}
		o = o + score; //o = sum
	}
	avg = o/num; // average
	cout << "Max score = " << max << endl;
	cout << "Sum score = " << o << endl; // sum
	cout << "Average score = " <<fixed<<setprecision(2)<<avg<< endl; // float 0.00
	system("pause");
	return(0);
}	
/*for( int N = 1, Num ; N <= 10 ; N++) {
	Num = rand() % 10;
	cout << Num;
	}*/
