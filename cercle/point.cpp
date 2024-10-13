#include "point.h"
#include <iostream>
#include <math.h>

point::point(double x, double y)
{
    this->pos_x = x;
    this->pos_y = y;
}

void point::afficher() const
{
    std::cout << "la position est : ( " << this->pos_x << " , " << this->pos_y << " )";
}

double point::distance(const point& p) const
{
    
    return sqrt(pow(p.pos_x-this->pos_x,2)+ pow(p.pos_y - this->pos_y, 2));
}

void point::translation(double dx, double dy)
{
    this->pos_x += dx;
    this->pos_y += dy;
}

bool point::operator==(const point& p) const
{

    return this->pos_x==p.pos_x && this->pos_y==this->pos_y;
}

point::~point()
{
    std::cout << "\n Desctructeur de point ! " ;
}
