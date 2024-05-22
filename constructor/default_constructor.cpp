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

    void putdata()
    {
        cout<<"value of a = "<<a;
    }      
};

int main()
{
    demo c;
    c.putdata();
    return 0;
}