#include<iostream>
using namespace std;

class A
{
    int a;

    public:
    void getdata(int a)
    {
        this->a = a;
    }
    void putdata()
    {
        cout<<"a = "<<a;
    }
};

int main()
{
    A d;
    d.getdata(20);
    d.putdata();
    return 0;
}