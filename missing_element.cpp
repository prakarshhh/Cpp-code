#include <iostream>
using namespace std;

// First method
// int main()
// {
//     int arr[]={1,2,4,3,6,7,9,8,10};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int sum=0,sum1=0;
//     for(int i=0;i<size;i++)
//     {
//         sum = sum+arr[i];
//     }
//     cout<<sum<<endl;
//     for(int i=1;i<=10;i++)
//     {
//         sum1 = sum1+i;
//     }
//     cout<<sum1<<endl;
//     int sum2=sum1-sum;
//     cout<<sum2;
// }

// Second Method

int main()
{
    string str = "a";
    string str1 = "aa";
    int size = str.length();
    int size1 = str1.length();
    char x1 = 0, x2 = 0;
    for (int i = 0; i < size; i++)
    {
        x1 = str[i] ^ str1[i];
    }

    cout << (str1) ^ (str);
}