#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        cout<<"number = "<<i<<endl;
        if(i==4)
        {
            break;
        }
    }
    cout<<"out of the loop";

    return 0;
}