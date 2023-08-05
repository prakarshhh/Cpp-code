#include <iostream>
using namespace std;

// int main()
// {
//     int num;
//     cin>>num;
//     int &num1=num;
//     num=num+5;
//     cout<<endl<<num1;
// }


// Swap two numbers


void swap(int &x,int &y)
{
    int z;
    z=x;
    x=y;
}

int main()
{
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<endl<<"Enter Second number: ";
    cin>>num2;
    cout<<endl<<"Before swapping: ";
    cout<<endl<<"Num1= "<<num1<<" Num2= "<<num2;
    swap(num1,num2);
    cout<<endl<<"After swapping: "<<endl<<"Num1= "<<num1<<" Num2= "<<num2;
    
}