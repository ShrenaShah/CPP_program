#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int count = 0;
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr[j]+arr[i] == 5)
            {
                count = count + 1;
            }
        }
    }

    cout<<count;

    return 0;
}