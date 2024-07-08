#include <iostream>
using namespace std;

class Complex {
public:
  // Constructor to initialize complex number (corrected member variable name)
  Complex(int r, int im) : real(r), imag(im) {}

  // Overloaded + operator for adding complex numbers (using const reference)
  Complex operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag); // Add imaginary parts
  }

  // Friend function to add an integer value to the real part (improved name)
  friend Complex add_value(Complex& c, int val) {
    return Complex(c.real + val, c.imag);
  }

  // Overloaded << operator for custom output (using const reference)
  friend ostream& operator<<(ostream& output, const Complex& number) {
    output << number.real << "+" << number.imag << "i"; // Include 'i' for imaginary unit
    return output;
  }

private:
  int real{0}, imag{0}; // Corrected member variable name
};

int main() {

  Complex num1(2, 3), num2(3, 5);
  Complex num3 = num1 + num2;

  std::cout << "num1 + num2 = " << num3 << std::endl; // Use num3

  Complex c4 = add_value(num1, 5); // Call friend function with improved name

  std::cout << "num1 + 5 = " << c4 << std::endl;

  return 0;
}
