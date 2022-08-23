// Print the sum, difference and product of
// two complex numbers by creating a class named 'Complex' with separate functions for
// each operation whose real and imaginary parts are entered by the user.

#include <iostream>

class Complex
{
    int real, image;

public:
    Complex(int r, int i)
    {
        real = r;
        image = i;
    }

    int get_real()
    {
        return real;
    }
    int get_image()
    {
        return image;
    }
    void add(Complex c1)
    {
        std::cout << c1.get_real() + real << " + i" << c1.get_image() + image << std::endl;
    }
    void difference(Complex c1)
    {
        std::cout << real - c1.get_real() << " + i" << image - c1.get_image() << std::endl;
    }
    void multiple(Complex c1)
    {
        std::cout << ((real * c1.get_real()) - (image * c1.get_image())) << " + i" << ((real * c1.get_image()) - (image * c1.get_real()));
    }
};

int main()
{
    Complex c1(7, 8);
    Complex c2(9, 7);
    c1.add(c2);
    c1.difference(c2);
    c1.multiple(c2);
    return 0;
}