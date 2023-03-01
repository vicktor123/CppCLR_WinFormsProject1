#pragma once
#include "Number.h"
#include <iostream>
#include <cmath>
#include <ostream>
class Vector2D :
    public Number
{
private:

    double i;
    double j;
protected:
    int getI() const { return i; }
    int getJ() const { return j; }
public:
    Vector2D(double dx, double dy)
    {
        i = dx;
        j = dy;
    }

    Vector2D(double x1, double y1, double x2, double y2)
    {
        i = x2 - x1;
        j = y2 - y1;
    }

    virtual double getValue() override {
        double res = abs(sqrt(pow(i, 2) + pow(j, 2)));
        return res;
    }

    virtual double getAngle1() override;
    virtual double getAngle2() override;
    virtual double getAngle3() override;
    bool operator==(const Vector2D& comp);
    Vector2D& operator=(const Vector2D& src);
    Vector2D operator+ (const Vector2D& w);
    
    Vector2D operator- (const Vector2D& w);    

    Vector2D operator* (const Vector2D& w);   

    Vector2D operator* (const double w);
    

    friend std::ostream& operator<< (std::ostream& os, const Vector2D& dt);
    friend std::istream& operator>> (std::istream& os, Vector2D& dt);

};

//std::ostream& operator<< (std::ostream& os, const Vector2D& dt)
//{
//    os <<"vector "<< dt.i << "i+" << dt.j << "j" << std::endl;
//    return os;
//}
//
//std::istream& operator>> (std::istream& os, Vector2D& dt)
//{    
//    os >> dt.i >> dt.j;  
//    return os;
//}