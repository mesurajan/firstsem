#include<iostream>
using namespace std;
class complex
{
    float x;
    float y;
    public:
    complex();
    complex(float real,float imag){
        real=x;
        imag=y;
    }
    complex operator +(complex);
    void display(complex);

};
void