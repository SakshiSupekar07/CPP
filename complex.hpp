#include <iostream>
class complex
{
public:
   double real;
   double img;

public:
   complex();
   void display();

   complex add(complex x);
   complex subtract(complex x);
   complex multiply(complex x);
   complex conjugate();
   double norm();
   complex divide(complex x);
};