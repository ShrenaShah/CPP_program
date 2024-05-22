#include<iostream>
using namespace std;

class demo
{
    private:
    int a;

    public:
    demo()
    {
        a = 10;
    }
    demo(demo &c)
    {
        a = c.a;
    }
    void putdata()
    {
        cout<<"a = "<<a;
    }
};
int main()
{
    demo c;
    c.putdata();
    demo d(c);
    d.putdata();
    return 0;
}