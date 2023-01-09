#include <iostream>
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

   
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i]<arr[j])
            { 
                arr[i]=arr[i]+arr[j];   
                arr[j]=arr[i]-arr[j]; 
                arr[i]=arr[i]-arr[j];  
            }
        }
    }
    cout << "After sorting" << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

}