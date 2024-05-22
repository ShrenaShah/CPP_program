#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    for(int i=arr[4]; i>=arr[0]; i--)
        {
            cout<<"\n"<<i;
        }

    return 0;
}