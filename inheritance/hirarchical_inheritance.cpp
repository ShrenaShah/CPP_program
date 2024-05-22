#include<iostream>
using namespace std;

class A
{
    protected:
    int x;

    public:
    void getdata()
    {
        cout<<"\nenter number: ";
        cin>>x;
    }
};

class B: public A
{
    public:
    void putdata1()
    {
        cout<<"\nsecond number: "<<x-1;
    }
};

class C: public A
{
    public:
    void putdata2()
    {
        cout<<"\nthird number: "<<x-2;
    }
};

int main()
{
    B e;
    C d;
    e.getdata();
    e.putdata1();
    d.getdata();
    d.putdata2();
    return 0;
}
