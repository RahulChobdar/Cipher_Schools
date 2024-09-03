#include <bits/stdc++.h>
using namespace std;
class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator-(const Complex& other) const{
        return Complex(real - other.real, imag - other.imag);
    }
    void display() const {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    Complex num1(3, 4);
    Complex num2(1, 2);
    Complex sum = num1 + num2;
    Complex diff = num1 - num2;
    cout << "Complex Number 1: ";
    num1.display();
    cout << std::endl;
    cout << "Complex Number 2: ";
    num2.display();
    cout << std::endl;
    cout << "Sum: ";
    sum.display();
    cout << std::endl;
    cout << "Difference: ";
    diff.display();
    cout << std::endl;
    return 0;
}
