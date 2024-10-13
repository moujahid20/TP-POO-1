
class complex {
private:
	double Re;
	double img;
public:
	complex();
	complex(double, double);
	void afficher();
	complex& operator+(const complex& z) const ;
	complex& operator+( double ) const;
	complex& operator-(const complex& z) const;
	complex& operator-( double ) const;
	complex& operator+=(const complex& z);
	complex& operator*(const complex& z);
	complex& operator/(const complex& z) const;
	double module();
	complex& conjuge();
	//double get_reel(); Attention -2 
	//double get_imag();
	friend complex operator+(double r, const complex& z);
	
};


