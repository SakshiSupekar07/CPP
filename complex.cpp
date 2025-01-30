#include "complex.hpp"
using namespace std;

 
complex::complex()
{
    real=0;
    img=0;
  
}

void complex::display()
{

if (img < 0)
        cout << real << " - " << -img << "i" << endl;
    else
        cout << real << " + " << img << "i" << endl;
}

complex complex::add (complex y)
{
    complex c;
    c.real = this->real + y.real;
    c.img = this->img + y.img;
    return c;
}

complex complex::subtract (complex y)
{
    complex c;
    c.real = this->real - y.real;
    c.img = this->img - y.img;
    return c;
}

complex complex::multiply (complex y)
{
    complex c;
    c.real = (this->real * y.real)- (this->img * y.img);
    c.img = (this->real * y.img)- (this->img * y.real);
    return c;
}

complex complex::divide(complex y) {
    complex c;
    double denominator = (y.real * y.real) + (y.img * y.img);
    if (denominator == 0) {
        std::cerr << " Division by zero" << std::endl;
        c.real = 0;
        c.img = 0;
    } else {
        c.real = ((this->real * y.real) + (this->img * y.img))/ denominator;
        c.img = ((this->img * y.real) - (this->real * y.img))/ denominator ;
    }
    return c;
}

complex complex::conjugate()  {
   complex c;
    c.real = this->real;
    c.img = -this->img;
    return c;
}



