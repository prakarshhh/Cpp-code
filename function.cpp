#include <iostream>
using namespace std;

// Sum of two numbers
// int sum(int ,int);
// int main()
// {
//     int n1=5,n2=6;
//     int fnc=sum(n1,n2);
//     cout<<"Sum of two numbers is: "<<fnc;
// }
// int sum(int x,int y)
// {
//     int s=x+y;
//     return s;
// }

// Function overloading

// int sum(int, int);
// int sum(int, int, int);
// int sum(int, int, int, int);
// int main()
// {
//     int n1 = 1, n2 = 4, n3 = 6, n4 = 6;
//     cout << "N1= " << n1 << endl
//          << "N2= " << n2 << endl
//          << "N3= " << n3 << endl
//          << "N4= " << n4 << endl;
//     int fnc1 = sum(n1, n2), fnc2 = sum(n1, n2, n3), fnc3 = sum(n1, n2, n3, n4);
//     cout << "Sum of N1+N2= " << fnc1 << endl
//          << "Sum of N1+N2+N3= " << fnc2 << endl
//          << "Sum of N1+N2+N3+N4= " << fnc3 << endl;
// }

// int sum(int x, int y)
// {
//     return x + y;
// }
// int sum(int x, int y, int z)
// {
//     return x+y+z;
// }
// int sum(int x,int y,int z,int p)
// {
//     return x+y+z+p;
// }

// Function with default arguments

// char symbol(char = '*', int = 3);

// int main()
// {
//     cout << "No argument passed: ";
//     symbol();
//     cout<<endl;
//     cout << "First argument passed: ";
//     symbol('#');
//     cout<<endl;
//     cout << "Both argument passed: ";
//     symbol('$', 5);
//     cout<<endl;
// }
// char symbol(char ch, int count)
// {
//     int i;
//     for (i = 0; i < count; i++)
//     {
//         cout<<ch;
//     }
// }

//  C++ Program to find Factorial of a number using class

// class factorial
// {
//     private:
//     int f;
//     public:
//     factorial(int ff) //parameterized constructors
//     {
//         f=ff;
//     }
//     int fact(int f);
// };

// int factorial::fact(int f)
// {
//     int i,fff=1;
//     for(i=1;i<=f;i++)
//     {
//         fff=fff*i;
//     }
//     return fff;
// }

// int main()
// {   
//     int num;
//     cout<<"Enter any number: ";
//     cin>>num;
//     factorial f1(num);
//     cout<<"Factorial is: " <<f1.fact(num);
// }



// C++ program to find greatest b/w 3 nos. by defining the functions inside class


class biggest
{
    private:
    int n,n1,n2;
    public:
    biggest(int num1,int num2,int num3)
    {
        n=num1;
        n1=num2;
        n2=num3;
    }
    

};