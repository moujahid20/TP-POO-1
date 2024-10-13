#include "cercles.h"
#include <iostream>
const double PI = 3.14;
cercle::cercle()
{
    this->id = 0;
    this->rayon = 0.0;
    this->centre = point();
}

cercle::cercle(int id, double r, point& p) : id(id),rayon(r),centre(p)
{
}

double cercle::surface() const
{
    return PI*pow(this->rayon,2);
}

double cercle::perimitre() const
{
    return 2*PI*this->rayon;
}

bool cercle::operator==(const cercle& C) const
{

    return this->id==C.id && this->rayon==C.rayon && this->centre==C.centre;
}

void cercle::translate(int dx, int dy)
{
    this->centre.translation(dx, dy);
}

void cercle::appartient(point& p) const
{
    
    if (this->centre.distance(p) <= this->rayon)
        std::cout << "\n le point  appartient a le cercle";
    else std::cout << "\n le point n'appartient pas a le cercle";
}

void cercle::afficher() const
{
    std::cout << "l'id de cercle : " << this->id << "\n";
    std::cout << "le rayon de cercle : " << this->rayon << "\n";
    std::cout << "le centre : \n";
    this->centre.afficher();

}
