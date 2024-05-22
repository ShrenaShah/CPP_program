// 1. Input two values from User and print Sum
// 2. Input three values from User and print Sum
#include<iostream>
using namespace std;
int sum(int a,int b);
int sum(int a,int b,int c);

int main()
{
    int a,b,c;
    cout<<"Enter any Two numbers: ";
    cin>>a>>b;
    cout<<"sum of "<<a <<" and "<<b<<" is "<<sum(a,b)<<endl;

    cout<<"Enter any Three numbers: ";
    cin>>a>>b>>c;
    cout<<"sum of "<<a<<","<<b<<" and "<<c<<" is "<<sum(a,b,c);
}

int sum(int a, int b)
{
    cout<<"using function with two arguments: "<<endl;
    return a+b;
}

int sum(int a,int b, int c)
{
    cout<<"using funtion with three arguments: "<<endl;
    return a+b+c;
}