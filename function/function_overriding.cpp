#include<iostream>
using namespace std;

class A
{
    protected:
    int a;

    public:
    void getdata()
    {
        cout<<"enter number: ";
        cin>>a;
    }
};

class B : public A
{
    public:
    void getdata()
    {
        cout<<"devision of a number: "<<a/2;
    }
};

int main()
{
    B d;
    d.A::getdata();
    d.getdata();
    return 0;
}