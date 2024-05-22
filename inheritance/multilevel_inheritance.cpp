#include<iostream>
using namespace std;

class A
{
    protected:
    int a;
    public:
    void getdata1()
    {
        cout<<"\nenter first number: ";
        cin>>a;
    }
    void putdata1()
    {
        cout<<"\nfirst number is: "<<a;
    }
};

class B: public A
{
    protected:
    int b;
    public:
    void getdata2()
    {
        cout<<"\nenter second number: ";
        cin>>b;
    }
    void putdata2()
    {
        cout<<"\nsecond number is: "<<b;
    }  
};

class C: public B
{
    public:
    void sum()
    {
        cout<<"\naddition of given numbers is: "<<a+b;
    }
};

int main()
{
    C d;
    d.getdata1();
    d.putdata1();
    d.getdata2();
    d.putdata2();
    d.sum();

    return 0;
}