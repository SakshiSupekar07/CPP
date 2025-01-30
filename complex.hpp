#include<iostream>
 class complex
{
 public:
   double real;
   double img;
   
public :
    complex();
   void display();
   complex add(complex y);
   complex subtract(complex y);
   complex multiply(complex y);
   complex divide(complex y);
   complex conjugate();

};