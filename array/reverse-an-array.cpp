#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter size of an array" << endl;
    cin >> n;
    int arr[n];
   
    cout << "Enter the element of an array " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Reversing" << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl << "After Reversing" << endl;
    for(int i=0; i<n/2; i++)
    {
        // using 3rd temprory variable
        // int temp; 
        // temp = arr[i];     
        // arr[i]=arr[n-i-1];    
        // arr[n-i-1]=temp;      

        // without using third variable
        arr[i]=arr[i]+arr[n-i-1];  
        arr[n-i-1]=arr[i]-arr[n-i-1];
        arr[i]=arr[i]-arr[n-i-1]; 

    }
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}