#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int number =(rand()%50 )+1 ;// 0-49+1-> 1-50
	int guess =0;
	do 
	
	{
cout<<"Enter Guess(1-50):";
cin>>guess;
if(guess>number)
cout<<"Guess Lower!"<<endl;
else if (guess<number)
cout<<"Guess Higher!"<<endl;
else
cout<<"You Won!"<<endl;
	}while (guess!=number);
    return 0;
}
