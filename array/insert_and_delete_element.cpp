#include<iostream>
using namespace std;

int main()
{
    int size;
    int n,pos;

    cout<<"enter size of array: ";
    cin>>size;
    int arr[size];

    cout<<"enter elements of array: ";
    for(int j=0; j<size; j++)
    {
        cin>>arr[j];
    }
    
    cout<<"enter the element you want to insert: ";
    cin>>n;

    cout<<"enter the position of the new element: ";
    cin>>pos;

    for(int i=size; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = n;

    for(int i=0; i<size; i++)
    {
        cout<<"\n"<<arr[i];
    }

    return 0;

}
