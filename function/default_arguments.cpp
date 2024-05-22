#include<iostream>
using namespace std;

int sum(int a, int b, int c = 6)
{
    return a + b + c;
}

int main()
{
    int a,b;
    cout<<"Enter two values: ";
    cin>>a>>b;
    sum(a,b);
    cout<<"sum of given values is: "<<sum(a,b);

    return 0;
}
