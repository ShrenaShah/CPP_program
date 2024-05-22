#include<iostream>
using namespace std;

int sum(int a, int b);

int main()
{
    int a,b,s;
    cout<<"enter two numbers: "<<endl;
    cin>>a>>b;
    s = sum(a,b);
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<s;
    return 0;
}

int sum(int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}