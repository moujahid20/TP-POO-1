#pragma once
class point
{

private:
	double pos_x;
	double pos_y;
public:
	point(double x = 0.0, double y =0.0);
	void afficher() const;
	double distance(const point& p) const;
	void translation(double dx, double dy);
	bool operator==(const point& p) const;
	~point();


};

