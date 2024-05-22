#include<iostream>
using namespace std;

class A
{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"enter first number: ";
        cin>>a;
    }
};

class B: public A
{
    protected:
    int b;
    public:
    void getdata()
    {
        cout<<"enter second number: ";
        cin>>b;
    }
    void putdata()
    {
        cout<<"addition of given numbers is: "<<a+b;
    }
};

int main()
{
    B c;
    c.input();
    c.getdata();
    c.putdata();
    return 0;
}