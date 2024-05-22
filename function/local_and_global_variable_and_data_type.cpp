#include<iostream>
using namespace std;

int variable(int a);
int b = 12;

int main()
{
    int a = 10;
    bool is_true = false;
    cout<<"a = "<<is_true<<endl;

    variable(a);
    cout<<"new a = "<<a<<endl;
}

int variable(int a)
{
    a = 11;
    cout<<"b = "<<b<<endl;
    return a;
}