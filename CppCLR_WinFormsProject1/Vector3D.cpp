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
    double co = cos(getI() / a);
    return acos(co) * 180 / PI;
}

double Vector3D::getAngle2()
{
    double a = sqrt(getI() * getI() + getJ() * getJ() + z * z);
    double co = cos(getJ() / a);
    return acos(co) * 180 / PI;
}

double Vector3D::getAngle3()
{
    double a = sqrt(getI() * getI() + getJ() * getJ() + z * z);
    double co = cos(z / a);
    return acos(co) * 180 / PI;
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
    return Vector3D(getI()+w.getI(),
                    getJ()+w.getJ(),
                    getZ()+w.getZ());
}

Vector3D Vector3D::operator-(const Vector3D& w)
{
    return Vector3D(getI() - w.getI(),
                     getJ() - w.getJ(),
                     getZ() - w.getZ());
}

Vector3D Vector3D::operator*(const Vector3D& w)
{
    return Vector3D(1.0, 1.0, 1.0);
}

Vector3D Vector3D::operator*(const double w)
{
    return Vector3D(1.0, 1.0, 1.0);
}

double Vector3D::full()
{
    double a = sqrt(getI() * getI() + getJ() * getJ() + z * z);
    double co1 = cos(getI() / a);
    double co2 = cos(getJ() / a);
    double co3 = cos(getZ() / a);
    return co1*co1+co2*co2+co3*co3;
}

double Vector3D::getI() const {
    return Vector2D::getI();
}
double Vector3D::getJ() const {
    return Vector2D::getJ();
}

double Vector3D::getZ() const {
    return z ;
}
