#include<iostream>
using namespace std;

class A
{
    protected:
    float a;
    public:
    void getdata1()
    {
        cout<<"enter first number: ";
        cin>>a;
    }
};

class B
{
    protected:
    float b;
    public:
    void getdata2()
    {
        cout<<"enter second number: ";
        cin>>b;
    }
};

class C: public A,  public B
{
    public:
    void putdata()
    {
        cout<<"addition of given numbers is: "<<a+b;
    }
};

class D: public C
{
    public:
    void devision()
    {
        cout<<"\naverage of numbers is: "<<(a+b)/2;
    }
};

int main()
{
    D e;
    e.getdata1();
    e.getdata2();
    e.putdata();
    e.devision();
    return 0;
}