
#include "complex.h"
#include <iostream>

complex::complex() {
	this->Re = 0;
	this ->img = 0;
}

complex::complex(double r, double im) {
	this->Re = r;
	this->img = im;

}

void complex::afficher() {
	std::cout << this->Re << "+ i" << this->img << "\n" ;
}

complex& complex::operator+(const complex& C) const {
	complex* Z = new complex();
	Z->Re = this->Re + C.Re;
	Z->img = this->img + C.img;
	return *Z;
}

complex& complex::operator+=(const complex& C)  {
	this->Re = this->Re + C.Re;
	this->img = this->img + C.img;
	return *this;
}

complex& complex::operator+(double r) const {
	complex* Z = new complex();
	Z->Re = this->Re + r;
	Z->img = this->img;
	return *Z;
}

complex& complex::operator-(const complex& C) const {
	complex* Z = new complex();
	Z->Re = this->Re - C.Re;
	Z->img = this->img - C.img;
	return *Z;
}

complex& complex::operator-(double r) const {
	complex* Z = new complex();
	Z->Re = this->Re - r;
	Z->img = this->img;
	return *Z;
}

complex& complex::operator*(const complex& C)  {
	complex* Z = new complex();
	Z->Re = this->Re * C.Re - this->img * C.img;
	Z->img = this->img*C.Re +this->Re* C.img;
	return *Z;
}

complex& complex::operator/(const complex& C) const {
	complex* Z = new complex();
	complex elem = complex(C.Re, -C.img);
	complex haut;
	complex lethis = *this;
	haut = (lethis*elem);
	double bas = C.Re*C.Re-C.img*C.img;
	if (bas != 0) {
		Z->Re = haut.Re / bas;
		Z->img = haut.img / bas;
	}
	
	return *Z;
}

double complex::module()
{
	double c;
	c = sqrt(pow(this->Re, 2) + pow(this->img, 2));
	std::cout << "le module est : " << c ;
	return c;
}

complex& complex::conjuge()
{
	complex elem= complex(this->Re, -this->img);
	return elem;
}

complex operator+(double r, const complex& z)
{
	return complex(r+z.Re,z.img);
}
