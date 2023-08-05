#include <iostream>
using namespace std;
// class Shape
// {
// protected:
//     float area;

// public:
//    virtual float getArea()
//     {
//         return area;
//     }
// };
// class Circle : public Shape
// {
// private:
//     float redius;

// public:
//     Circle(float redius)
//     {
//         this->redius=redius;
//     }
//      float getArea()
//     {
//         return 3.1415*redius*redius;
//     }
// };
// int main()
// {
//     Circle c1(3.0);
//     cout<<c1.getArea()<<endl;
//     Shape s1= new Circle(3);
//     cout<<s1->getArea();
// }



// class a
// {
//     private:
//     int x=5;
//     public:
//     // void display()          //Without virtual function
//     // {
//     //     cout<<"X= "<< x<<endl;
//     // }
//     virtual void display()     //With virtual function
//     {
//         cout<<"X = "<<x<<endl;
//     }
// };
// class b:public a
// {
//     private:
//     int y=10;
//     public:
//     void display()
//     {
//         cout<<"Y= "<<y<<endl;
//     }
// };
// int main()
// {
//     a *ptr;
//     b d1;
//     ptr=&d1;
//     ptr->display();
// }