#include <iostream>
using namespace std;
int main()
{
	int Num , Value , Sum;
	bool flag = true;
	Num = 1;
	Sum = 0;
	
	do{
		cout << "Enter Value " << Num << " : ";
		cin >> Value;
		if ((Value >= 1)&&(Value <= 20)){
			Sum += Value;
			Num++;
		}
		else flag = false;
	} while (flag == true);
	if (Num > 1){
		float avg = static_cast<float>(Sum)/--Num;
		cout << "Everage of data = " << avg << endl;
	}
	else cout << "Nodata input ! \n";
system("pause");
return(0);
}