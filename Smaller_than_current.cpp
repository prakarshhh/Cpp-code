#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    int arr[] = {8, 1, 2, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int res[size];
    int i, j;
    // sort(arr,arr+size);
    for (i = 0; i < size; i++)
    {
        int count = 0;
        for (j = 0; j < size; j++)
        {
            if (i != j)
            {

                if (arr[i] > arr[j])
                {
                    count++;
                }
            }
            res[i] = count;
        }
    }
    for (i = 0; i < size; i++)
    {
        cout << res[i] << " ";
    }
}