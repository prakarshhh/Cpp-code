#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1,2,3,2,3,1,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 7; i++)
    {
        int count=0;
        
        for (int j = 0; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << arr[i]<<" ";
            break;
        }
    }
}