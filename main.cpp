#include "complex.hpp"
using namespace std;
int main()
{
    complex a,b,ans,sub,mul,div,con;

    a.real=20.00;
    a.img=12.00;
    b.real=15.00;
    b.img=10.00;

    cout<< "First Complex number is"<<endl;
    a.display();

    cout<<"Second Complex number is"<<endl;
    b.display();

    ans = a.add(b);

    cout<< "Addition of two Complex numbers is"<<endl;
    ans.display();

    sub = a.subtract(b);

    cout<< "Subtraction of two Complex numbers is"<<endl;
    sub.display();

    mul = a.multiply(b);

    cout<< "MultiPlication of two Complex numbers is"<<endl;
     mul.display();

     div = a.divide(b);

    cout<< "Division of two Complex numbers is"<<endl;
    div.display();

    con = a.conjugate();

    cout<< "Conjugate of first  Complex number is"<<endl;
    con.display();
    
    con = b.conjugate();

    cout<< "Conjugate of second   Complex number is"<<endl;
    con.display();
    return 0;



    


}