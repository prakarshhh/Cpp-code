#include <iostream>
using namespace std;

// 1st approach

// int main()
// {
//     int arr[]={1,0,2,3,2,0,0,4,5,1};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int count=0;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]>0)
//         {
//             count++;
//         }
//     }
//     int arr1[count];
//     int k=0;
//     for(int i =0;i<size;i++)
//     {
//         if(arr[i]>0)
//         {
//             arr1[k]=arr[i];
//             k++;
//         }
//     }
//       for(int i =0;i<count;i++)
//       {
//           cout<<arr1[i]<<" ";
//       }
//     for(int i=0;i<count;i++)
//     {
//         arr[i]=arr1[i];
//     }
//     for(int i=count;i<size;i++)
//     {
//         arr[i]=0;
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

// 2nd approach
int main()
{
    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j = -1;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (i = j + 1; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            arr[i] = 0;
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}