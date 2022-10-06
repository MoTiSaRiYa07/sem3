/*Write a program to take array of ten elements. Insert values
into all elements in array. Display sum and average of array
elements.*/
#include<iostream>
using namespace std;
int main()
{
	int a[5],sum=0,average = 0;
	for(int i = 0; i < 5 ; i++)
	{
		cout<<"enter a element of array "<<endl;
		cin>>a[i];
	}
	for(int i = 0; i < 5 ; i++)
	{
		cout<<"element "<<i+1<<" is "<<" = "<<a[i]<<endl;
	}
	for(int i = 0; i < 5 ; i++)
	{
		sum = sum + a[i];
		average = sum/5;
	}
	cout<<"sum is "<<sum<<endl;	
	cout<<"Average is "<<average<<endl;	
	
		return 0;
}

