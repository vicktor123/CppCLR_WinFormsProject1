#pragma once
#include "Vector2D.h"
#define PI 3.14159265
class Vector3D :
    public Vector2D
{
private:

    double z;

public:
    Vector3D(double dx, double dy, double dz) : Vector2D(dx, dy)
    {
        z = dz;
    }

    Vector3D(double x1, double y1,double z1, double x2, double y2,double z2):
        Vector2D(x1,y1,x2,y2)
    {
        z = z2 - z1;
    }
    double getI() const;
    double getJ() const;
    double getZ() const;
    virtual double getValue() override;
    virtual double getAngle1() override;
    virtual double getAngle2() override;
    virtual double getAngle3() override;
    bool operator==(const Vector3D& comp);
    Vector3D& operator=(const Vector3D& src);
    Vector3D operator+ (const Vector3D& w);

    Vector3D operator- (const Vector3D& w);

    Vector3D operator* (const Vector3D& w);

    Vector3D operator* (const double w);

    double full();

};

