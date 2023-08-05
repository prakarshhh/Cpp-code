#include <iostream>
using namespace std;
// Using public acces modifier

// class room
// {
//     public:  //Access modifier by default it is private
//     double length,breadth,height;  //data members

//     double calculate_area() //member function
//     {
//         return length*breadth;
//     }
//     double calculate_volume()  //member function
//     {
//         return length*breadth*height;
//     }
// };
// int main()
// {
//     room r1; //r1 is an object of class room
//     double l,b,h;
//     cout<<"Enter length: ";
//     cin>>l;
//     cout<<endl;
//     cout<<"Enter Breadth: ";
//     cin>>b;
//     cout<<endl;
//     cout<<"Enter height: ";
//     cin>>h;
//     cout<<endl;
//     r1.breadth=b;
//     r1.length=l;
//     r1.height=h;
//     float fnc=r1.calculate_area();
//     cout<<"Area of room: "<<fnc<<endl;
//     float fnc1=r1.calculate_volume();
//     cout<<"Volume of room: "<<fnc1<<endl;
// }

// Using private

// class room
// {
//     private:
//     double length,breadth,height;
//     public:
//     void setdetail(double l,double b,double h)
//     {
//         length=l;
//         breadth=b;
//         height=h;
//     }
//     double area()
//     {
//         return length*breadth;
//     }
//     double volume()
//     {
//         return length*breadth*height;
//     }
// };

// int main()
// {
//     room r1;
//     double l,b,h;
//     cout<<"Enter length: ";
//     cin>>l;
//     cout<<endl;
//     cout<<"Enter bredth: ";
//     cin>>b;
//     cout<<endl;
//     cout<<"Enter height: ";
//     cin>>h;
//     cout<<endl;
//     r1.setdetail(l,b,h);
//     cout<<"Area: "<<r1.area()<<endl;
//     cout<<"Volume: "<<r1.volume()<<endl;

// }

// class rectangle
// {
// private:
//     int length;
//     int width;

// public:
//     rectangle()
//     {
//         length=10;
//         width=5;
//     }
//     void setsize(int l, int w)
//     {
//         if (l > 0 && w > 0)
//         {
//             length = l;
//             width = w;
//         }
//         else
//         {
//             cout << "Invalid detail entered" << endl;
//         }
//     };
//     void set_only_width(int w)
//     {
//         if (w > 0)
//         {
//             width = w;
//         }
//         else
//         {
//             cout << "Invalid";
//         }
//     };
//     void set_only_length(int l)
//     {
//         if (l > 0)
//         {
//             length = l;
//         }
//         else
//         {
//             cout << m,m,"Invalid";
//         }
//     };
//     int get_length()
//     {
//         return length;
//     };
//     int get_width()
//     {
//         return width;
//     };
//     int get_area()
//     {
//         return length * width;
//     };
// };

// int main()
// {
//     rectangle r1;
//     int l, w;
//     cout << "Enter length: ";
//     cin >> l;
//     cout << endl;
//     cout << "Enter width: ";
//     cin >> w;
//     r1.setsize(l, w);
//     int fnc = r1.get_area();
//     cout << "Area: " << fnc<<endl;
//     int fnc1= r1.get_length();
//     cout<<"Length: "<<fnc1<<endl;
//     int fnc2=r1.get_width();
//     cout<<"Width: "<<fnc2;
// }

// Declare function outside the class

// class maths
// {
// private:
//     int i, f;

// public:
//     int fact(int);
// };
// int maths::fact(int n)
// {
//     int f = 1;
//     for (i = 1; i <= n; i++)
//     {
//         f = f * i;
//     }
//     return f;
// }
// int main()
// {
//     int num=5;
//     maths f1;
//     int fnc=f1.fact(num);
//     cout<<"Factorial of "<<num<<" is: "<<fnc;

// }

// Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
// Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.

// class student
// {
//     public:
//     string name;
//     int rno;
// };
// int main()
// {
//     student s1;
//     s1.name="John";
//     s1.rno=2;
//     cout<<"Name: "<<s1.name<<endl<<"Roll_number: "<<s1.rno;
// }

// Write a program to print the area and perimeter of a triangle having
//  sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.

// class triangle
// {
//     private:
//     int a,b,c,hb;
//     public:
//     int area(int aa ,int bb,int cc)
//     {
//         int ar;
//         a=aa;
//         b=bb;
//         c=cc;
//         ar=0.5*b*c;
//         return ar;
//     }
//     int parameter(int aa,int bb,int cc)
//     {
//         int pr;
//         a=aa;
//         b=bb;
//         c=cc;
//         pr=a+b+c;
//         return pr;
//     }
// };
// int main()
// {
//     triangle t;
//     int fnc=t.area(3,4,5);
//     cout<<"Area of triangle: "<<fnc;
//     int fnc1=t.parameter(3,4,5);
//     cout<<"\nParameter of triangle: "<<fnc1;
// }

// Write a program to print the area of a rectangle by creating a class named 'Area' having two functions.
// First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the
// second function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.

// class area
// {
//     private:
//     float l,b;
//     public:
//     void set_dim(int a,int c)
//     {
//         l=a;
//         b=c;
//     }
//     float getarea()
//     {
//         float ar;
//         ar=l*b;
//         return ar;
//     }
// };

// int main()
// {
//     int l,b;
//     cout<<"Enter length of a rectangle: ";
//     cin>>l;
//     cout<<endl<<"Enter breadth of a rectangle: ";
//     cin>>b;
//     area rectangle;
//     rectangle.set_dim(l,b);
//     float fnc;
//     fnc=rectangle.getarea();
//     cout<<endl<<"Area of rectangle: "<<fnc;

// }

// Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of its length and breadth
// as parameters of its constructor and having a function named 'returnArea' which returns the area of the rectangle. Length and
// breadth of the rectangle are entered through keyboard.

// class area
// {
// private:
//     float l, b;

// public:
//     area(float a, float c)
//     {
//         l = a;
//         b = c;
//     }

//     float returnarea()
//     {
//         return l*b;
//     }
// };
// int main()
// {
//     float length,breadth;
//     cout<<endl<<"Enter length: ";
//     cin>>length;
//     cout<<endl<<"Enter breadth: ";
//     cin>>breadth;
//     area rectangle(length,breadth);
//     float fnc;
//     fnc=rectangle.returnarea();
//     cout<<endl<<"Area: "<<fnc;
// }

// Print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate
// and print the average without creating any object of the Average class.

class average
{
private:
    float a, b, c;

public:
    void num(float d, float e, float f)
    {
        a=d;
        b=e;
        c=f;
    }
    float calculate()
    {
        float avg;
        avg=(a+b+c)/3;
        return avg;
    }
};

int main()
{
    float n,n1,n2;
}