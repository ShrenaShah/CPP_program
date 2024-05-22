#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        if(i==4)
        {
            continue;
        }
        cout<<"number = "<<i<<endl;
    }
    return 0;
}