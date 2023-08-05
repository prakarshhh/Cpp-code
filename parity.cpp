#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 1, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]), temp, arr1[size];
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr1[k]=arr[i];
            k++;
        }
    }
    cout<<k<<endl;
    int l=0;
    for(int i=k;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            arr1[i]=arr[l];
            l++;
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl<<(0%2);
}
