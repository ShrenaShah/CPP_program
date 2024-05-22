#include<iostream>
using namespace std;

int fact(int number);

int main()
{
    int number;
    cout<<"enter any number: "<<endl;
    cin>>number;
    fact(number);
    cout<<"factorial of given number is: "<<fact(number);
}

int fact(int number)
{
    if(number!=0)
    {
        return number + fact(number-1);
    }
}