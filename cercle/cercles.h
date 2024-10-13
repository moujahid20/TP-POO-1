#pragma once
#include "point.h"
class cercle
{
private:
	int id;
	double rayon;
	point centre;
public:
	cercle();
	cercle(int id , double r , point& p );
	double surface() const;
	double perimitre() const;
	bool operator==(const cercle& C) const;
	void translate(int dx, int dy);
	void appartient(point& p) const;
	void afficher() const;



};

