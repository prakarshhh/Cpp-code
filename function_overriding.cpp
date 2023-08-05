#include <iostream>
using namespace std;

// class base
// {
//     public :
//     void print()
//     {
//         cout<<"Base function\n";
//     }
// };

// class derived:public base
// {
//     public:
//     void print()
//     {
//         cout<<"Derived function\n";
//     }
// };

// int main()
// {
//     derived d1;
//     d1.print(); //Function of derived class will be executed as the function is overridden
//     base b1;
//     b1.print(); //Function is not overriden in this case
// }

// Access overridden function using scope resolution operator

// class base
// {
//     public:
//     void print()
//     {
//         cout<<"Base function\n";

//     }
// };
// class derived:public base
// {
//     public:
//     void print()
//     {
//         cout<<"Derived function\n";
//     }
// };
// int main()
// {
//     derived d1;
//     d1.base::print();
// }

// Access overriden function from the derived class

// class base
// {
//     public:
//     void print()
//     {
//     cout<<"Base function\n";
//     }
// };
// class derived:public base
// {
//     public:
//     void print()
//     {
//         cout<<"Derived function\n";
//         base::print(); //Calling print function of base class
//     }
// };

// int main()
// {
//     derived d1;
//     d1.print();
// }

// Access overridden function using class pointer

// class base
// {
// public:
//     void print()
//     {
//         cout << "Base function\n";
//     }
// };
// class derived : public base
// {
// public:
//     void print()
//     {
//         cout << "Derived function\n";
//     }
// };
// int main()
// {
//     derived d1;
//     base *ptr = &d1;
//     ptr->print();
// }
