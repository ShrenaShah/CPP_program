#include<iostream>
using namespace std;

class A
{
    protected:
    int a;

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
    int b;

    public:
    void getdata2()
    {
        cout<<"enter second number: ";
        cin>>b;
    }
};

class c: public A,public B 
{
    public:
    void putdata()
    {
        cout<<"addition: "<<a+b;
    }
};

int main()
{
    c d;
    d.getdata1();
    d.getdata2();
    d.putdata();
    return 0;
}