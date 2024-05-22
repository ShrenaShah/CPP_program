#include<iostream>
using namespace std;

class demo
{
    private:
        int x,y;
        static int z;

    public:
        void getdata()
        {
            cout<<"Enter two numbers: ";
            cin>>x>>y;
            z++;
        }
        void putdata()
        {
            cout<<"\nx = "<<x<<"\ny = "<<y;
            cout<<"\nstatic z = "<<z;
        }
};
int demo::z;

    int main()
    {
        demo c,d;
        c.getdata();
        d.getdata();
        c.putdata();
        d.putdata();
        return 0;
    }