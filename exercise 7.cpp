#include<iostream>
#include<conio.h>


using namespace std;

int main()
{
	int z;
	int number;
	int add=0;
	
	cout<<"enter  number of ur choice";
	cin>>number;
	
	while(number>0)
	{
		z=number%10;
		number=number/10;
		add=add+z;
	}
	
	cout<<"add of digits  :"<<add;

	return 0;
}
