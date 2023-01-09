#include <iostream>
using namespace std;

int main() 
{
    int n; 
    cout << "Enter the size of an array " << endl;
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

    cout << "Min. no. of an array is : " << arr[0] << endl;
    cout << "Max. no. of an array is : " << arr[n-1] << endl;

}