#include <iostream>
using namespace std;
class Complx {
public:
    double re, img; // Use double for more precision
    // Constructor to initialize the complex number
    Complx(double r, double i) : re(r), img(i) {}
    // Overloading the + operator as a member function
    Complx operator+(const Complx& b) {
       Complx result ;
       result.re = this->re + b.re ;
       result.img = this->img + b.img;
       return result ;
    }
};
int main() {
    Complx c1(38, 429.3), c2(28, 38); // Create complex numbers
    Complx c3 = c1 + c2; // Use overloaded + operator
    cout << c3.re << " + i" << c3.img << endl; // Display the result
    return 0;
}