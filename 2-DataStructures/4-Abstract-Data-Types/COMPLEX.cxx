#include <IComplex.h>
#include <iostream>
using namespace std;

class Complex
{
private:
    float re, im;
public:
    Complex(float x, float y)
    {
        re = x; im = y;
    }
    float Re() const
    {
        return re;
    }
    float Im() const
    {
        return im;
    }
    Complex& operator*=(const Complex& rhs)
    {
        float t = Re();
        re = Re() * rhs.Re() - Im() * rhs.Im();
        im = t * rhs.Im() + Im() * rhs.Re();
        return *this;
    }
};
ostream& operator<<(ostream& t, const Complex& c)
{
    t << c.Re() << " " << c.Im(); return t;
}
