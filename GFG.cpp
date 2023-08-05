#include <iostream>
#include <math.h>
#include <map>
using namespace std;

// Reverse the array

// int main()
// {
//     int arr[4]={4,5,1,2};
//     int i,j;
//     for(i=(4-1);i>=0;i--)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

// Find the maximum and minimum element in an array

// int main()
// {
//     int arr[5]={3,5,4,1,9};
//     int i,j,temp;
// for(i=0;i<5;i++)
// {
//     for(j=i+1;j<5;j++)
//     {
//         if(arr[i]>arr[j])
//         {
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
// }
//     cout<<"Minimum element: "<<arr[0];
//     cout<<endl<<"Maximum element: "<<arr[5-1]<<endl;
// }

// Find the “Kth” max and min element of an array

// int main()
// {
//     int arr[7]={12,3,5,7,4,19,26};
//     int k;
//     cin>>k;
//     int  i,j,temp;
//       for(i=0;i<7;i++)
//     {
//         for(j=i+1;j<7;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     int n=k-1;
//     cout<<arr[n];
// }

// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

// int main()
// {
//     int arr[12] = {0, 1, 1, 0, 1, 2,1,2,0,0,0,1};
//     int count0=0,count1=0,count2=0;
//     int i;
//     for(i=0;i<12;i++)
//     {
//         if(arr[i]==0)
//         {
//             count0++;
//         }
//         else if(arr[i]==1)
//         {
//             count1++;
//         }
//         else if(arr[i]==2)
//         {
//             count2++;
//         }
//     }
//     for(i=0;i<count0;i++)
//     {
//         arr[i]=0;
//     }
//     for(i=count0;i<(count1+count0);i++)
//     {
//         arr[i]=1;
//     }
//     for(i=(count1+count0);i<(count0+count1+count2);i++)
//     {
//         arr[i]=2;
//     }
//     for(i=0;i<12;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

// Move all the negative elements to one side of the array

// int main()
// {
//     int arr[9] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
//     int i, j, temp;
//     for (i = 0; i < 9; i++)
//     {
//         for (j = i + 1; j < 9; j++)
//         {
//             if (arr[i] >= 0)
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (i = 0; i < 9; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// Given an array, cyclically rotate the array clockwise by one.
// Input:  arr[] = {1, 2, 3, 4, 5}
// Output: arr[] = {5, 1, 2, 3, 4}

// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int i,j;
//     int temp=arr[4];
//     for(i=4;i>0;i--)
//     {
//         arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
//     for(i=0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }




int main()
{
    int arr[4] = {1,2,3,4}, sum = 0, max = 0;
    for (int i = 0; i < 4; i++)
    {
        sum = 0;
        for (int j = i; j < 4; j++)
        {
            sum = sum + arr[j];
            max = sum;
            if (sum <max)
            {
                max = sum;
            }
            cout<<endl<<max<<endl;

            cout << endl;
        }
    cout << endl<< max;
    }
}

// Kadane algorithm

// int main()
// {
//     int arr[8]={ -2, -3, 4, -1, -2, 1, 5, -3 };
//     int sum=0,maxi=arr[0],i;
//     for(i=0;i<8;i++)
//     {
//         sum=sum+arr[i];
//         maxi=max(maxi,sum);
//         if(sum<0)
//         {
//             sum=0;
//         }
//     }
//     cout<<maxi;
// }


// Find duplicates in O(n) time and O(1) extra space

// int main()
// {
//     int arr[8]={1,2,3,6,3,6,1},i;
//     for( i=0;i<8;i++)
//     {
//         if(arr[i]==arr[i+1])
//         {
//             cout<<arr[i]<<" ";
//         }
        
//     }
// }

// int main()
// {
//     int arr[7]={1,1},count=0;
//     for(int i=0;i<7;i++)
//     {
//         arr[arr[i]%7]=arr[arr[i]%7]+7;
//     }
//     for(int i=0;i<7;i++)
//     {
//         count=arr[i]/7;
//         if(count>1)
//         {
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<7;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     for(int i=0;i<7;i++)
//     {
//         arr[i]=arr[i]%7;
//     }
//     cout<<endl;
//     for(int i=0;i<7;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     if(count>0)
//     {
//         cout<<endl<<true;
//     }
//     else
//     {
//         cout<<endl<<false;
//     }
// }




