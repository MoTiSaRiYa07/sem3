//Write a program to insert five elements into array and display it
#include<iostream>
using namespace std;
int main()
{
	int a[5	];
	// cout<<"enter a size of array element = ";
	// cin>>size;
	for(int i = 0 ; i < 5 ; i++)
	{
		cout<<"enter five element : "<<endl;
		cin>>a[i];
	}
	for(int i = 0 ; i < 5 ; i++)
	{
		cout<<"element "<<i+1<<" is"<<" = "<<a[i]<<endl;
	}  
	return 0;	

}
