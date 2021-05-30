#include <iostream>

using namespace std;

class Complex
{
private:
    float real, imag;
public:
    void setData(float r, float i);
    friend Complex sum (Complex &p, Complex &q);
    void subtract (Complex);
    Complex multiply (Complex);
    void show();
};

void Complex::setData(float r, float i){
    real = r;
    imag = i;
}

void Complex::show(){
    cout << "Real: " << real << endl;
    cout << "Imaginary: " << imag << endl;
}

void Complex::subtract (Complex p){
    cout << "Substraction: " << p.real - p.imag << endl;
}

Complex Complex::multiply (Complex p){
    cout << "Multiplication: " << p.real*p.imag << endl;
}

Complex sum (Complex &p, Complex &q){
    cout << "Real sum: " << p.real + q.real << endl;
    cout << "Imaginary sum: " << p.imag + q.imag << endl;
}

int main()
{
    Complex num1, num2;
    num1.setData(0.96, 0.78);
    num2.setData(0.5, 0.5);
    num1.subtract(num1);
    num1.multiply(num1);
    num1.show();
    sum (num1, num2);
    
    return 0;
}