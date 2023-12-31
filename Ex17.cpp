#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
string check_result(int x);
void show(int no_std,string name[10],int num[10] );

int main()
{   
	int num[10] , no_std;
    string name[10];
    cout<<"Input Number of Students : ";
    cin>>no_std;
    for(int i = 0; i<no_std;i++) //i<=3  input array
    {   
		cout<<"Enter Name ["<<i+1<<"] :";
        cin>>name[i];
        cout<<"Enter Score["<<i+1<<"] :";
        cin>>num[i];
    }
    show(no_std,name,num);
    system("pause");
    return 0;
}
void show(int no_std,string name[10],int num[10] )
{   
	int  total =0 , max =0 , min;
    cout<<setfill('-')<<setw(50)<<" "<<endl;
    cout<<"Name \t \t Score \t\t Result"<<endl;
    cout<<setfill('-')<<setw(50)<<" "<<endl;
    min = num[0];
    for(int i = 0; i<no_std;i++) //i<=3  display array
    {   
		cout<<name[i]<<"\t\t"<<num[i]<<"\t\t"<<check_result(num[i])<<endl;
        total = total+num[i];
        if(num[i] > max)
            max = num[i];
        if(num[i] <= min)
            min = num[i];
     }
    cout<<setfill('-')<<setw(50)<<" "<<endl;
    cout<<"Max Score =  "<<max<<endl;
    cout<<"Min Score =  "<<min<<endl;
    cout<<"Total     = "<<total<<endl;
    cout<<"Average   = "<<(float)total/4<<endl;
}

string check_result(int x)
{    
	if(x >= 50)
        return("Pass");
    else
        return("Failed");    
}