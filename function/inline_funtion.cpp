/*given code can easily run without inline funtion but when sum will
be call compiler jump to sum funtion and do the process and
return the value of sum to the main function it is normal for 1 time but when you
need to call same function for again and again everytime function will call and
compiler will jump to sum funtion and process will be longer and take more time
therefor we use inline funtion when inline function is given, part of calling
function will replace by a+b that means compiler first come to main function and
directly give the answer of sum it will not go to sum funtion*/

#include<iostream>
using namespace std;
inline int sum(int a,int b)
{
    return a+b;
}

int main()
{
    cout<<"sum = "<<sum(2,3)<<endl;
    cout<<"sum = "<<sum(2,3)<<endl;
    cout<<"sum = "<<sum(2,3)<<endl;
    cout<<"sum = "<<sum(2,3)<<endl;
    return 0;
}