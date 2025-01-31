#include "complex.hpp"
using namespace std;

 
complex::complex()
{
    real=0;
    img=0;
  
}

void complex::display()
{
    if(img>0)
    {
        cout << real << "+" << img <<"i"<<endl;
        
 }
else{
    cout <<real <<"-"<<-img<<"i"<<endl;
}

}


complex complex::add (complex x)
{
    complex c;
    c.real = this->real + x.real;
    c.img = this->img + x.img;
    return c;
}
complex complex::subtract (complex x)
{
    complex c;
    c.real = this->real - x.real;
    c.img = this->img - x.img;
    return c;
}
complex complex::multiply (complex x)
{
    complex c;
    c.real = (this->real * x.real)-(this->img * x.img);
    c.img=(this->real *x.img)+(this->img * x.real);
 
    return c;
}
complex complex::conjugate ()
{
    complex c;
    c.real = this->real;
    c.img=-this->img;
 
    return c;
}


 










