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

int Vector3D::getI() const {
    return Vector2D::getI();
}
int Vector3D::getJ() const {
    return Vector2D::getJ();
}

