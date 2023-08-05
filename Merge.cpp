#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int i, j, temp;
    for (i = (n - 1), j = 0; i >= 0, j < m; i--, j++)
    {
        if (arr1[i] > arr2[j])
        {
            temp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = temp;
        }
    }
    sort(arr1,arr1 +n);
    sort(arr2,arr2 +m);
    for (i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout<<endl;
    for (i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
}