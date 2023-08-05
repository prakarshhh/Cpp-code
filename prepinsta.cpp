#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
// Perfect Square

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     int i, q, r, temp = 0;
//     for (i = 1; i <= num; i++)
//     {
//         q = num / i;
//         r = num % i;
//         if (r == 0)
//         {
//             if (q == i)
//             {
//                 temp = 1;
//                 break;
//             }
//         }
//     }
//     if (temp == 1)
//     {
//         cout << endl
//              << "True";
//     }
//     else
//     {
//         cout << "False";
//     }
// }

// Automorphic number :- Number whose square ends with the same digit as the number itself

// int main()
// {
//     int num,reverse=0,a,b;
//     cout<<"Enter a number: ";
//     cin>>num;
//     for(num;num>0;num=a)
//     {
//         a=num/10;
//         b=num%10;
//         reverse=reverse*10+b;
//     }
//     cout<<reverse;
//     int q,r,count=0,q1,r1;
//     int rev=0,rev1=0;
//     int square=num*num;
//     for(square;square>0;square=q)
//     {
//         q=square/10;
//         r=square%10;
//         rev=rev*10+r;
//         cout<<rev;
//         if(rev==reverse)
//         {
//             cout<<endl<<"Square is: "<<square<< "- Is Automorphic";
//         }
//     }
//     cout<<endl<<rev;
//         // cout<<endl<<rev;
//     // for(rev;rev>0;rev=q1)
//     // {
//     //     q1=rev/10;
//     //     r1=rev%10;
//     //     rev1=rev1*10+r1;
//     //     cout<<endl<<rev1;
//     // }

// }

// Sort First half in Ascending and Second half in descending order in C++

// int main()
// {
//     int num;
//     cout << "Enter the size of the array: ";
//     cin >> num;
//     int array[num];
//     int i, j, temp,temp1;
//     for (i = 0; i < num; i++)
//     {
//         cout << "Element - " << i << ": ";
//         cin >> array[i];
//     }
//     for (i = 0; i < num; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;

//     if (num % 2 == 0)
//     {
//         for (i = 0; i < (num / 2); i++)
//         {
//             temp = 0;
//             for (j = 0; j <(num / 2); j++)
//             {
//                 if (i != j)
//                 {
//                     if (array[i] <array[j])
//                     {
//                         temp = array[i];
//                         array[i] = array[j];
//                         array[j] = temp;
//                     }
//                 }
//             }
//         }
//         for (i = (num / 2); i < num; i++)
//         {
//             temp1 = 0;
//             for (j = (num/2); j < num; j++)
//             {
//                 if (i != j)
//                 {
//                     if (array[i] >array[j])
//                     {
//                         temp1 = array[i];
//                         array[i] = array[j];
//                         array[j] =temp1;
//                     }
//                 }
//             }
//         }
//     }
//     else
//     {
//         cout<<"Can not sort array in ascending as well as descending";
//     }
//     cout<<endl;
//     for(i=0;i<num;i++)
//     {
//         cout<<array[i]<<" ";
//     }
// }

// Find frequency of element

// int main()
// {
//     int num;
//     cout << "Enter the size of the array: ";
//     cin >> num;
//     int array[num],array1[num];
//     int i, j, count = 1;
//     for (i = 0; i < num; i++)
//     {
//         cout << "Element - " << i << ": ";
//         cin >> array[i];
//     }
//     for (i = 0; i < num; i++)
//     {
//         cout << array[i] << " ";
//     }
//     for (i = 0; i < num; i++)
//     {
//         count = 1;
//         if(array[i]!=-1)
//         {
//             for(j=i+1;j<num;j++)
//             {
//                 if(array[i]==array[j])
//                 {
//                     count++;
//                     array[j]=-1;
//                 }
//             }
//         }
//         array1[i]=count;
//     }
//     for(i=0;i<num;i++)
//     {
//         if(array[i]!=-1)
//         {
//             cout<<endl<<array[i]<<" occurs "<<array1[i]<<" times.";
//         }
//     }
// }

// Longest Palindrome in an array in C++

// int main()
// {
//     int num;
//     cout << "Enter size of the array: ";
//     cin >> num;
//     int array[num],array1[num];
//     int i, j, k, l,t=0,q,r,rev=0,temp,countp=0;
//     for (i = 0; i < num; i++)
//     {
//         cout << "Element - " << i << ": ";
//         cin >> array[i];
//     }
//     for (i = 0; i < num; i++)
//     {
//         cout << array[i] << " ";
//     }
//     for(i=0;i<num;i++)
//     {
//         t=array[i];
//         temp=t;
//         for(t;t>0;t=q)
//         {
//             q=t/10;
//             r=t%10;
//             rev=rev*10+r;
//         }
//         if(temp==rev)
//         {
//             countp++;
//             array1[countp]=array[i];
//         }
//     }
//     cout<<endl<<countp;
//     cout<<endl;
//     // for(i=0;i<countp;i++)
//     // {
//     //     cout<<array1[i]<<" ";
//     // }

// }

// Given a sorted array of distinct integers and a target value, return the index if the target is found.
//  If not, return the index where it would be if it were inserted in order

// int main()
// {
//     int num;
//     cout << "Enter the size of the array: ";
//     cin >> num;
//     int array[num + 1], array1[num];
//     int i, j, temp = 0, k, l, count = 0;
//     for (i = 0; i < num; i++)
//     {
//         cout << "Element - " << i << ": ";
//         cin >> array[i];
//     }
//     for (i = 0; i < num; i++)
//     {
//         cout << array[i] << " ";
//     }
//     int target;
//     cout << endl<< "Target=";
//     cin >> target;
//     for (i = 0; i <= num; i++)
//     {
//         if (array[i] == target)
//         {
//             cout << i;
//             count = 1;
//         }
//     }
//     if (count == 0)
//     {
//         array[num] = target;
//         for (j = 0; j <= num; j++)
//         {
//             temp = 0;
//             for (k = 0; k <= num; k++)
//             {
//                 if (j != k)
//                 {
//                     if (array[j] < array[k])
//                     {
//                         temp = array[j];
//                         array[j] = array[k];
//                         array[k] = temp;
//                     }
//                 }
//             }
//         }
//         for (l = 0; l <= num; l++)
//         {
//             if (array[l] == target)
//             {
//                 cout << l;
//             }
//         }
//     }
// }

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].

// int main()
// {
//     int num;
//     cout << "Enter the size of the array: ";
//     cin >> num;
//     int array[num + 1], array1[2];
//     int i, j, temp = 0, k = 0, l, count = 0;
//     for (i = 0; i < num; i++)
//     {
//         cout << "Element - " << i << ": ";
//         cin >> array[i];
//     }
//     for (i = 0; i < num; i++)
//     {
//         cout << array[i] << " ";
//     }
//     int target;
//     cout << endl
//          << "Target=";
//     cin >> target;
//     for (i = 0; i < num; i++)
//     {

//         if (array[i] == target)
//         {
//             array1[k] = i;
//             k++;
//         }
//     }
//     if (k > 0)
//     {
//         cout << endl
//              << "[";
//         for (i = 0; i < k; i++)
//         {
//             cout << array1[i] << ",";
//         }
//         cout << "]";
//     }
//     else
//     {
//         cout << endl<< "[";
//         for(i=0;i<2;i++)
//         {
//             array1[i]=-1;
//         }
//         for(i=0;i<2;i++)
//         {
//             cout<<array1[i]<<",";
//         }
//         cout << "]";
//     }
// }

// Find Repeating Elements In An Array  in C++

// int main()
// {
//     int num;
//     cout << "Enter the size of the array: ";
//     cin >> num;
//     int array[num];
//     int i, j, count = 0;
//     for (i = 0; i < num; i++)
//     {
//         cout << "Element : " << i << " ";
//         cin >> array[i];
//     }
//     cout << endl;
//     for (i = 0; i < num; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
//     for (i = 0; i < num; i++)
//     {
//         count = 0;
//         for (j = i + 1; j < num; j++)
//         {
//             if (array[i] == array[j])
//             {
//                 count++;
//             }

//         }
//             if (count == 1)
//             {
//                 cout << array[i]<<" ";
//             }
//     }
// }

// int main()
// {
//     int num;
//     cout << "Enter the size of the array: ";
//     cin >> num;
//     int array[num],array1[num],array2[num];
//     int i, j, count = 0;
//     for (i = 0; i < num; i++)
//     {
//         cout << "Element : " << i << " ";
//         cin >> array[i],array1[num],array2[num];
//     }
//     cout << endl;
//     for (i = 0; i < num; i++)
//     {
//         cout << array[i] << " ";
//     }
//     for (i = 0; i < num; i++)
//     {
//         array1[i]=array[i];
//         array2[i]=0;
//     }
//     cout << endl;
//     for (i = 0; i < num; i++)
//     {
//         count=0;
//         for(j=0;j<num;j++)
//         {
//             if(i!=j)
//             {
//                 if(array[i]==array[j])
//                 {
//                     count++;
//                 }

//             }
//         }
//         if(count==0)
//         {
//             cout<<array[i]<<" ";
//         }
//     }
// }

// Finding the minimum scalar product in C++
// int main()
// {
//     int num;
//     cout<<"Enter the size of the array: ";
//     cin>>num;
//     int i,j;
//     int array[num],array1[num],temp,array2[num],sum=0;
//     cout<<endl<<"Enter elements in the first array: "<<endl;
//     for(i=0;i<num;i++)
//     {
//         cout<<"Element :- "<<i<<" ";
//         cin>>array[i];
//     }
//     cout<<endl<<"Enter elements in the second array: "<<endl;
//     for(i=0;i<num;i++)
//     {
//         cout<<"Element :- "<<i<<" ";
//         cin>>array1[i];
//     }
//     cout<<"Elemets in the first array is: "<<endl;
//     for(i=0;i<num;i++)
//     {
//         cout<<array[i]<<" ";
//     }
//     cout<<endl<<"Elemets in the second array is: "<<endl;
//     for(i=0;i<num;i++)
//     {
//         cout<<array1[i]<<" ";
//     }
//     for(i=0;i<num;i++)
//     {
//         temp=0;
//         for(j=0;j<num;j++)
//         {
//             if(i!=j)
//             {
//                 if(array[i]<array[j])
//                 {
//                     temp=array[i];
//                     array[i]=array[j];
//                     array[j]=temp;
//                 }
//             }
//         }
//     }
//     for(i=0;i<num;i++)
//     {
//         temp=0;
//         for(j=0;j<num;j++)
//         {
//             if(i!=j)
//             {
//                 if(array1[i]>array1[j])
//                 {
//                     temp=array1[i];
//                     array1[i]=array1[j];
//                     array1[j]=temp;
//                 }
//             }
//         }
//     }
//     cout<<endl<<"Sorted in ascending order first array: "<<endl;
//     for(i=0;i<num;i++)
//     {
//         cout<<array[i]<<" ";
//     }
//     cout<<endl<<"Sorted in descending order second array: "<<endl;
//     for(i=0;i<num;i++)
//     {
//         cout<<array1[i]<<" ";
//     }
//     for(i=0;i<num;i++)
//     {
//         array2[i]=array[i]*array1[i];
//     }
//     for(i=0;i<num;i++)
//     {
//         sum=sum+array2[i];
//     }
//     cout<<endl<<sum;
// }

// Maximum scalar products of two vectors in C++
// int main()
// {
//     int num;
//     cout<<"Enter the size of the array: ";
//     cin>>num;
//     int i,j;
//     int array[num],array1[num],temp,array2[num],sum=0;
//     cout<<endl<<"Enter elements in the first array: "<<endl;
//     for(i=0;i<num;i++)
//     {
//         cout<<"Element :- "<<i<<" ";
//         cin>>array[i];
//     }
//     cout<<endl<<"Enter elements in the second array: "<<endl;
//     for(i=0;i<num;i++)
//     {
//         cout<<"Element :- "<<i<<" ";
//         cin>>array1[i];
//     }
//     cout<<"Elemets in the first array is: "<<endl;
//     for(i=0;i<num;i++)
//     {
//         cout<<array[i]<<" ";
//     }
//     cout<<endl<<"Elemets in the second array is: "<<endl;
//     for(i=0;i<num;i++)
//     {
//         cout<<array1[i]<<" ";
//     }
//     for(i=0;i<num;i++)
//     {
//         temp=0;
//         for(j=0;j<num;j++)
//         {
//             if(i!=j)
//             {
//                 if(array[i]<array[j])
//                 {
//                     temp=array[i];
//                     array[i]=array[j];
//                     array[j]=temp;
//                 }
//             }
//         }
//     }
//     for(i=0;i<num;i++)
//     {
//         temp=0;
//         for(j=0;j<num;j++)
//         {
//             if(i!=j)
//             {
//                 if(array1[i]<array1[j])
//                 {
//                     temp=array1[i];
//                     array1[i]=array1[j];
//                     array1[j]=temp;
//                 }
//             }
//         }
//     }
//     cout<<endl<<"Sorted in ascending order first array: "<<endl;
//     for(i=0;i<num;i++)
//     {
//         cout<<array[i]<<" ";
//     }
//     cout<<endl<<"Sorted in ascending order second array: "<<endl;
//     for(i=0;i<num;i++)
//     {
//         cout<<array1[i]<<" ";
//     }
//     for(i=0;i<num;i++)
//     {
//         array2[i]=array[i]*array1[i];
//     }
//     for(i=0;i<num;i++)
//     {
//         sum=sum+array2[i];
//     }
//     cout<<endl<<sum;
// }

// Subarray

// int main()
// {
//     int arr[4]={10,20,30,40};
//     int i,j,k;
//     for(i=0;i<4;i++)
//     {
//         for(j=i;j<4;j++)
//         {
//             for(k=i;k<=j;k++)
//             {
//                 cout<<arr[k]<<" ";
//             }
//         cout<<endl;
//         }
//     }
// }

// Maximum product of sub-array in C++

// int main()
// {
//     int array[4]={2,3,-2,4};
//     int i,j,k;
//     int mul=1,count=0,l=0,res=0;
//     for(i=0;i<4;i++)
//     {
//         for(j=i;j<4;j++)
//         {
//             mul=1;
//             for(k=i;k<=j;k++)
//             {
//                 // cout<<array[k]<<" ";
//                 mul=mul*array[k];
//             }
//             if(mul>res)
//             {
//                 res=mul;
//             }
//         }
//     }
//     cout<<endl<<"Maximum product of the sub-array is "<<res;

// }

// Arrays are Disjoint or not in C++

// int main()
// {
//     int array[5]={12,34,11,9,3};
//     int array1[4]={7,2,1,5};
//     int i,j,count=0;
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             if(array[i]==array1[j])
//             {
//                 count++;
//             }
//         }
//     }
//     if(count==0)
//     {
//         cout<<"\nYes";
//     }
//     else
//     {
//         cout<<"\nNo";
//     }
// }

// Array is a subset of another array in C++
// If all the elements of array 2 are found in array 1, then array 2 is said to be a subset of array 1
// int main()
// {
//     int array[6] = {11, 10, 13, 21, 30, 70};
//     int array1[4] = {11, 30, 70, 10};
//     int count = 0;
//     int i, j;
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 6; j++)
//         {
//             if (array1[i] == array[j])
//             {
//                 count++;
//             }
//         }
//     }
//     if (count == 4)
//     {
//         cout << "\narr2[] is subset of arr1[]";
//     }
//     else
//     {
//         cout << "\nNot a subset";
//     }
// }

// int main()
// {
//     int arr[3]={50,75,150};
//     int i,j;
//     for(i=0;arr[i]%2==0;i++)
//     {
//         arr[i]=arr[i]/2;
//     }
//     for(i=0;arr[i]%3==0;i++)
//     {
//         arr[i]=arr[i]/2;
//     }
//     if()
// }

// int main()
// {
// 	int count;
// 	cin>>count;
//     int i=0;
// 	int array[count],array1[count];
// 	for(i=0;i<count;i++)
// 	{
// 		cin>>array[i];
// 	}

//     for(i=0;i<count;i++)
//     {
//         int num=array[i],q,r,cube,sum=0;
//         int temp=num;
//         for(num;num>=1;num=q)
//         {
//             q=num/10;
//             r=num%10;
//             cube=r*r*r;
//             sum=sum+cube;
//         }
//         if(sum==temp)
//         {
//             array1[i]=0;
//         }
//         else
//         {
//             array1[i]=1;
//         }
//     }
//     for(i=0;i<count;i++)
//     {
//         if(array1[i]==0)
//         {
//             cout<<"It is an armstrong number"<<endl;
//         }
//         else
//         {
//             cout<<"It is NOT an armstrong number"<<endl;
//         }
//     }

// }

// int main()
// {
//     int a,k=0;
//     cin>>a;
//     int arr1[a],arr2[a],arr3[a],arr4[a];
//     for(int i=0;i<a;i++)
//     {
//         cin>>arr1[i];
//     }
//     for(int i=0;i<a;i++)
//     {
//         cin>>arr2[i];
//     }
//     for(int i=0;i<a;i++)
//     {
//         cin>>arr3[i];
//     }
//     for(int i=0;i<a;i++)
//     {
//         if(arr3[i]>0)
//         {
//             arr4[k]=arr1[i]*arr2[i];
//             k++;
//         }
//     }

//     for(int i=0;i<k;i++)
//     {
//         cout<<arr4[i]<<" ";
//     }

// }

// int main()
// {
//     int m,n;
//     cin>>m>>n;
//     int arr[m][n],arrsum[m],ans;
//     int i,j,sum=0;
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             cin>>arr[i][j];
//         }

//     }
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             sum=sum+arr[i][j];
//         }
//         arrsum[i]=sum;
//         sum=0;
//     }
//     for(i=0;i<m;i++)
//     {
//         cout<<"Row "<<i+1<<" : "<<arrsum[i]<<endl;
//     }
//     for(i=0;i<m;i++)
//     {
//         if(arrsum[i]<arrsum[i+1])
//         {
//             ans=arrsum[i+1];
//         }
//     }
//     cout<<endl<<ans;

// }

