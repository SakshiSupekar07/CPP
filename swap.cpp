#include<iostream>
using namespace std;
int main()
{
    int a=5,b=6,temp;
    cout<<"Before Swapping"<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After Swapping"<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;
    return 0;

}