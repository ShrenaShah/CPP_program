#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"enter any number: "<<endl;
    cin>>n;

    if (n > 10)
    {
        cout<<"given number is greater 10";
    }
    else if(n < 10)
    {
        cout<<"given number is less than 10";
    }
    else
    {
        cout<<"given number is 10";
    }

    return 0;
}