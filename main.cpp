#include "complex.hpp"
using namespace std;
int main()
{
    complex a,b,ans,sub,mul;

    a.real=1.00;
    a.img=1.00;
    b.real=15.00;
    b.img=10.00;

    cout<< "First Complex number is"<<endl;
    a.display();

    cout<<"Second Complex number is"<<endl;
    b.display();

    ans = a.add(b);

    cout<< "Addition of two Complex numbers is"<<endl;
    ans.display();

    sub=a.subtract(b);
    cout<<"Subtraction of two numbers is"<<endl;
    sub.display();

    mul=a.mul(b);
    cout<<"Multliplication of two numbers is "<<endl;
mul.display();




}

   

