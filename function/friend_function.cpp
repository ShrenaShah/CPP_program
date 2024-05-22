#include<iostream>
using namespace std;

class demo
{
    private:
        int a,b;
    
    public:
        void getdata()
        {
            cout<<"enter two numbers: ";
            cin>>a>>b;
        }

        friend int sum(demo);
};

int sum(demo c)
{
    return (c.a + c.b);
}

int main()
{
    demo c;
    c.getdata();
    cout<<"addition of given numbers is: "<<sum(c);
    return 0;
}