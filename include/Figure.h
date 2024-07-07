#ifndef FIGURE_H
#define FIGURE_H

#define M_PI 3.14159265358979323846

#include<cmath>
#include<string>

#include"Point.h"

class Figure
{
    public:
        Figure() {}
        virtual double GetP()=0;
        virtual double GetS()=0;
        virtual std::string GetName()=0;
};

#endif // FIGURE_H
