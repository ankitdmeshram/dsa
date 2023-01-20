#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size " << endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Ascending order" << endl;
   
    sort(arr, arr+n);

//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             if(arr[i]<arr[j])
//             { 
//                 arr[i]=arr[i]+arr[j];   
//                 arr[j]=arr[i]-arr[j]; 
//                 arr[i]=arr[i]-arr[j];  
//             }
//         }
//     }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl << "Descending order" << endl;
    sort(arr, arr+n, greater<int>());

// for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             if(arr[i]>arr[j])
//             { 
//                 arr[i]=arr[i]+arr[j];   
//                 arr[j]=arr[i]-arr[j]; 
//                 arr[i]=arr[i]-arr[j];  
//             }
//         }
//     }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}