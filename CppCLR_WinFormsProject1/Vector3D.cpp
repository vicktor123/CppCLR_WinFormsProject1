#include "pch.h"
#include "Vector3D.h"

double Vector3D::getValue() {
    double res = abs(sqrt(
        pow(Vector2D::getI(), 2)
        + pow(Vector2D::getJ(), 2)
        + pow(z, 2)
    )
    );
    return res;
}

double Vector3D::getAngle1()
{
    double a = sqrt(getI()* getI() + getJ()* getJ()+z*z);
    return (acos(getI() / a) * 180) / PI;
}

double Vector3D::getAngle2()
{
    double a = sqrt(getI() * getI() + getJ() * getJ() + z * z);
    return (acos(getJ() / a) * 180) / PI;
}

double Vector3D::getAngle3()
{
    double a = sqrt(getI() * getI() + getJ() * getJ() + z * z);
    return (acos(z / a) * 180) / PI;
}

bool Vector3D::operator==(const Vector3D& comp)
{
    return this->getI() == comp.getI() && this->getJ() == comp.getJ() && this->z == comp.getZ();
}

Vector3D& Vector3D::operator=(const Vector3D& src)
{
    if (this != &src)
    {
        
        setI(src.getI());
        setJ(src.getJ());
        this->z = src.z;
    }
    
    return *this;
}

Vector3D Vector3D::operator+(const Vector3D& w)
{
    return Vector3D();
}

Vector3D Vector3D::operator-(const Vector3D& w)
{
    return Vector3D();
}

Vector3D Vector3D::operator*(const Vector3D& w)
{
    return Vector3D();
}

Vector3D Vector3D::operator*(const double w)
{
    return Vector3D();
}

int Vector3D::getI() const {
    return Vector2D::getI();
}
int Vector3D::getJ() const {
    return Vector2D::getJ();
}

int Vector3D::getZ() const {
    return z ;
}
