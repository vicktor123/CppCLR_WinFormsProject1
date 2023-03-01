#pragma once
class Number
{
    public:
        virtual double getValue() = 0;//виртуальный метод длина вектора без реализации
        virtual double getAngle1() = 0;//угол между осью X
        virtual double getAngle2() = 0;//угол между осью Y
        virtual double getAngle3() = 0;//угол между осью Z
};

