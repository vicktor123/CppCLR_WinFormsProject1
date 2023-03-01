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

    Vector3D(double x1=0, double y1=0,double z1=0, double x2=0, double y2=0,double z2=0):
        Vector2D(x1,y1,x2,y2)
    {
        z = z2 - z1;
    }
    int getI() const;
    int getJ() const;
    int getZ() const;
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

};

