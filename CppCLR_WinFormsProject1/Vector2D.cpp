#include "pch.h"
#include "Vector2D.h"
#define PI 3.14159265
std::ostream& operator<< (std::ostream& os, const Vector2D& dt)
{
    os <<"vector "<< dt.i << "i+" << dt.j << "j" << std::endl;
    return os;
}

std::istream& operator>> (std::istream& os, Vector2D& dt)
{    
    os >> dt.i >> dt.j;  
    return os;
}

bool Vector2D::operator==(const Vector2D& comp)
{
    // Compare data members
    return i == comp.i && j == comp.j;
}

Vector2D Vector2D::operator* (const double w)
{
    return Vector2D(this->i * w, this->j * w);
}
Vector2D Vector2D::operator* (const Vector2D& w)
{
    return Vector2D(this->i * w.i, this->j * w.j);
}

Vector2D Vector2D::operator+ (const Vector2D& w)
{
    return Vector2D(this->i + w.i, this->j + w.j);
}

Vector2D Vector2D::operator- (const Vector2D& w)
{
    return Vector2D(this->i - w.i, this->j - w.j);
}

Vector2D& Vector2D::operator=(const Vector2D& src)
{
    // Check that you're not assigning the object to itself
    if (this != &src)
    {
        i = src.i;
        j = src.j;
    }
    // Return for chaining
    return *this;
}
double Vector2D::getAngle1() 
{
    double a = sqrt(i*i+j*j);
    return (acos(i / a)*180)/PI;
}
double Vector2D::getAngle2()
{
    double a = sqrt(i * i + j * j);
    return (acos(j / a) * 180) / PI;
}
double Vector2D::getAngle3()
{
    throw std::runtime_error("error");
}
