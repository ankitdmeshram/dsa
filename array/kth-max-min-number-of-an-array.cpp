#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of an array" << endl;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array is: " << endl;

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i] < arr[j])
            {
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }

    cout << "After sorting " << endl;

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    int no;
    cout << endl << "Which one want you to show ?" << endl;
    cin >> no;
    cout << "From starting, nth term is :  " << arr[no-1] << endl; 
    cout << "From last, nth term is :  " << arr[n-no] << endl; 

}
