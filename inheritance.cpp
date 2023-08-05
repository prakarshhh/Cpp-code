#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

// class animal //Parent or base class
// {
//     public:
//     void eat()
//     {
//         cout<<endl<<"I can eat.";
//     }
//     void sleep()
//     {
//         cout<<endl<<"I can sleep.";
//     }
// };

// class dog:public animal
// {
//     public:
//     void bark()
//     {
//         cout<<endl<<"I can bark! Woof Woof!!";
//     }
// };
// int main()
// {
//     dog a;
//     // Calling member function of base class
//     a.eat();
//     a.sleep();
//     // Calling member function of derived class
//     a.bark();
// }

// Example 2

// class animal
// {
// private:
//     string color;

// protected:
//     string type;

// public:
//     void eat()
//     {
//         cout << "I can eat!!" << endl;
//     }
//     void sleep()
//     {
//         cout << "I can sleep!!" << endl;
//     }
//     void setcolor(string c)
//     {
//         color = c;
//     }
//     string getcolor()
//     {
//         return color;
//     }
// };

// class dog : public animal
// {
// public:
//     void bark()
//     {
//         cout << "I can bark! Woof Woof!!" << endl;
//     }
//     void settype(string tp)
//     {
//         type = tp;
//     }
//     void displayinfo(string c)
//     {
//         cout << "I am a mammal " << type << endl;
//         cout << "My color is " << c << endl;
//     }
// };

// int main()
// {
//     dog d1;
//     d1.eat();
//     d1.sleep();
//     d1.bark();
//     d1.settype("Mammal");
//     d1.setcolor("Black");
//     d1.displayinfo(d1.getcolor());
// }

// Multiple inheritance

// class base_class_1
// {
//     public:
//     void display()
//     {
//         cout<<"This is the function of the base class 1";
//     }
// };
// class base_class_2
// {
//     public:
//     void display2()
//     {
//         cout<<"This is the function of base class 2";
//     }
// };
// class derived:public base_class_1,public base_class_2
// {
//     public:
//     void display3()
//     {
//         cout<<"This is the function of the derived class";
//     }
// };
// int main()
// {
//     derived d1;
//     d1.display();
//     cout<<endl;
//     d1.display2();
//     cout<<endl;
//     d1.display3();
//     cout<<endl;
// }

// Multilevel inheritance

// class animal
// {
//     public:
//     void eat()
//     {
//         cout<<"Eating...";
//     }
// };
// class dog:public animal
// {
//     public:
//     void bark()
//     {
//         cout<<"Barking...";
//     }
// };
// class puppy:public dog
// {
//     public:
//     void weep()
//     {
//         cout<<"Weeping...";
//     }
// };
// int main()
// {
//     puppy p1;
//     p1.eat();
//     cout<<endl;
//     p1.bark();
//     cout<<endl;
//     p1.weep();

// }

// Hybrid inheritance

// class vehicle
// {
// public:
//     vehicle()
//     {
//         cout << "This is a vehicle\n";
//     }
// };
// class car : public vehicle
// {
// public:
//     car()
//     {
//         cout << "This is a car\n";
//     }
// };

// class racing
// {
// public:
//     racing()
//     {
//         cout << "This is for racing\n";
//     }
// };
// class ferrari : public car, public racing
// {
// public:
//     ferrari()
//     {
//         cout << "This is ferrari\n";
//     }
// };

// int main()
// {
//     ferrari f1;
// }

// create a derived class to inherit the member functions from multiple base classes in C++ programming.

// class add
// {
// public:
//     int n = 20, n1 = 30;
//     int s = n + n1;
//     void sum()
//     {
//         cout << "The sum of " << n << " and " << n1 << " is " << s<<"\n";
//     }
// };
// class mul
// {
// public:
//     int n = 20, n1 = 30;
//     int m = n * n1;
//     void multiplication()
//     {
//         cout << "The multiplication of " << n << " and " << n1 << " is " << m<<"\n";
//     }
// };
// class div
// {
// public:
//     int n = 150, n1 = 30;
//     int q = 150 / 30;
//     void division()
//     {
//         cout << "The division of " << n << " and " << n1 << " is " << q<<"\n";
//     }
// };
// class sub
// {
// public:
//     int n = 50, n1 = 30;
//     int subb = n - n1;
//     void subtraction()
//     {
//         cout << "The subtraction of " << n << " and " << n1 << " is " << subb<<"\n";
//     }
// };
// class derived : public add, public sub, public div, public mul //Multiple inheritance
// {
// public:
//     int n=12,n1=5;
//     int m=n%n1;
//     void modulus()
//     {
//         cout<<"The modulus of "<<n<<" and "<<n1<<" is "<<m<<"\n";
//     }
// };

// int main()
// {
//     derived arthmetic;
//     arthmetic.modulus();
//     arthmetic.sum();
//     arthmetic.multiplication();
//     arthmetic.division();
//     arthmetic.subtraction();

// }

// create another program to print the average marks of six subjects using the multiple Inheritance in the C++ programming language.

// class student
// {
// protected:
//     int rno, sum = 0, marks[4];

// public:
//     void detail()
//     {
//         cout << "Enter the roll number: \n";
//         cin >> rno;
//         cout << "Enter the marks of fiver subject: \n";
//         for (int i = 0; i < 5; i++)
//         {
//             cout << "Enter Marks in Subject " << i + 1 << ": ";
//             cin >> marks[i];
//             sum = sum + marks[i];
//         }
//     }
//     void showrno()
//     {
//         cout << "Roll number is: " << rno;
//     }
// };
// class sports
// {
// protected:
//     int sports_marks;

// public:
//     void sports_m()
//     {
//         cout << "Enter the sports marks: ";
//         cin >> sports_marks;
//     }
// };

// class result : public student, public sports
// {
// public:
//     int avg, p;
//     void res()
//     {
//         avg = (sum + sports_marks) / 6;
//     }
//     void total()
//     {
//         cout << "\nTotal marks is: " << (sum + sports_marks);
//     }
//     void average()
//     {
//         cout << "\nAverage marks is: " << avg;
//     }
// };
// int main()
// {
//     result average;
//     average.detail();
//     average.sports_m();
//     average.showrno();
//     average.total();
//     average.average();
// }

// Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes.
// Now, create a function in each of these classes which prints "I am mammal", "I am a marine animal" and "I belong to both the categories:
// Mammals as well as Marine Animals" respectively. Now, create an object for each of the above class and try calling
// 1 - function of Mammals by the object of Mammal
// 2 - function of MarineAnimal by the object of MarineAnimal
// 3 - function of BlueWhale by the object of BlueWhale
// 4 - function of each of its parent by the object of BlueWhale

// class mammals
// {
//     public:
//     void mam()
//     {
//         cout<<"I am a mammal.\n";
//     }
// };
// class marine_animals
// {
//     public:
//     void mar()
//     {
//         cout<<"I am a marine animal.\n";
//     }
// };
// class bluewhale:public mammals,public marine_animals
// {
//     public:
//     void both()
//     {
//         cout<<"I belong to both the categories: Mammals as well as Marine Animals.\n";
//     }
// };
// int main()
// {
//     mammals mammal1;
//     mammal1.mam();
//     marine_animals marine;
//     marine.mar();
//     bluewhale whale;
//     whale.both();
//     cout<<"\nCalling each each parent parent functions using bluewhale object:\n";
//     whale.mam();
//     whale.mar();
// }

// Make a class named Fruit with a data member to calculate the number of fruits in a basket.
// Create two other class named Apples and Mangoes to calculate the number of apples and mangoes
// in the basket. Print the number of fruits of each type and the total number of fruits in the basket.

// class apples
// {
//    protected:
//    int na;
//    public:
//    void seta()
//    {
//     cout<<"\nEnter number of apples: ";
//     cin>>na;
//    }
//    void showa()
//    {
//         cout<<"\nNumber of apples in a basket is: "<<na;

//    }
// };
// class mangoes
// {
//     protected:
//     int nm;
//     public:
//     void setm()
//     {
//         cout<<"\nEnter number of mangoes: ";
//         cin>>nm;
//     }
//     void showm()
//     {
//         cout<<"\nNumber of mangoes in the basket is: "<<nm;

//     }
// };
// class fruit:public apples,public mangoes
// {
//     public:
//     int tot;
//     void total()
//     {
//         tot=na+nm;
//         cout<<"\nThe total fruits in the basket are: "<<tot;
//     }
// };
// int main()
// {
//     fruit f;
//     f.seta();
//     f.setm();
//     f.showa();
//     f.showm();
//     f.total();
// }

// We want to store the information of different vehicles. Create a class named Vehicle with two data member named mileage and price. Create
// its two subclasses
// *Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
// *Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes)
// and fuel tank size(in inches)
// Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. Next, make two subclasses Bajaj and TVS,
// each having a data member
//  to store the make-type.
// Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating capacity, fuel type,
//  mileage and price.) Do the same for a Bajaj and a TVS bike

// class vehicle
// {
// protected:
//     float mileage;
//     float price;

// public:
//     void set(float m, float p)
//     {
//         mileage = m;
//         price = p;
//     }
// };
// class car : public vehicle
// {
// protected:
//     float oc, warranty, sc;
//     string fueltype;

// public:
//     void set_car_detail(float o, float w, float s, string fuel)
//     {
//         oc = o;
//         warranty = w;
//         sc = s;
//         fueltype = fuel;
//     }
// };
// class bike : public vehicle
// {
// protected:
//     int cylenders, gears, fuel_tank;
//     string cooling_type, wheel_type;

// public:
//     void set_bike_data(int c, int g, int f, string cc, string w)
//     {
//         cylenders = c;
//         gears = g;
//         fuel_tank = f;
//         cooling_type = c;
//         wheel_type = w;
//     }
//     void show_detail_bike()
//     {
//         cout << "Bike detail:\n";
//         cout << "Number of cylenders: " << cylenders << endl;
//         cout << "Number of geard: " << gears << endl;
//         cout << "Fuel tank(in inches): " << fuel_tank << endl;
//         cout << "Cooling type: " << cooling_type << endl;
//         cout << "Wheel type: " << wheel_type << endl;
//     }
// };
// class audi : public car
// {
// protected:
//     string model_type;

// public:
//     void set__audi_type(string model)
//     {
//         model_type = model;
//     }
//     void show_detail_audi()
//     {
//         cout << "Audi car:\n";
//         cout << "Model type: " << model_type << endl;
//         cout << "Ownership cost: $" << oc << endl;
//         cout << "Warranty (in years): " << warranty << endl;
//         cout << "Seating capaciy: :" << sc << endl;
//         cout << "Fuel type: " << fueltype << endl;
//         cout << "Mileage: " << mileage << "KM/L" << endl;
//         cout << "Price: " << price << endl;
//     }
// };
// class ford : public car
// {
// protected:
//     string model_type;

// public:
//     void set__ford_type(string model)
//     {
//         model_type = model;
//     }
//     void show_detail_ford()
//     {
//         cout << "Ford car:\n";
//         cout << "Model type: " << model_type << endl;
//         cout << "Ownership cost: " << oc << endl;
//         cout << "Warranty (in years): " << warranty << endl;
//         cout << "Seating capaciy: :" << sc << endl;
//         cout << "Fuel type: " << fueltype << endl;
//         cout << "Mileage: " << mileage << endl;
//         cout << "Price: $" << price << endl;
//     }
// };

// int main()
// {
//     ford f1;
//     audi a1;
//     bike b1;
//     f1.set__ford_type("Mustang");
//     f1.set_car_detail(27470, 4, 5, "Diesel");
//     f1.set(20, 20000);
//     a1.set__audi_type("Audi R8");
//     a1.set_car_detail(30000, 2, 5, "Petrol");
//     a1.set(15, 15000);
//     a1.show_detail_audi();
//     cout << "\n\n";
//     f1.show_detail_ford();
//     cout<<"Press any key to continue....";
//     getch();
// }



// C++ program to find factorial by defining functions outside the class
class factorial
{
    private:
    int num,f=1,i;
    public:
    void user_input();
    void fact();
    
};
void factorial::user_input()
{
    cout<<"Enter any number: ";
    cin>>num;
}
void factorial::fact(int num)
{
    for(i=1;i<num;i++)
    {
        fact=fact*i;
    }
    cout<<"\nFactorial: "<<fact;
}

int main()
{
    factorial f1;
    f1.user_input();
    f1.fact();
}