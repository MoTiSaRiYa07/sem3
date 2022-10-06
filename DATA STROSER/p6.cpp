/*
Write a program to input n elements into array and display it. 
n must be any positive number.
*/

#include<iostream>
using namespace std;
int main()
{
    int size;
    int n[5];
    cout<<"enter size of array : "<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element =  "<<endl;
        cin>>n[i];
    }
    for(int i=0;i<size;i++)
    {
        if(n[i]>=0)
        {
            cout<<"element "<<i+1<<" is "<<" = "<<n[i]<<endl;   
        }
    }
    return 0;
}