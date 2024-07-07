#ifndef POINT_H
#define POINT_H
#include"cmath"

class Point
{
    public:
        double x,y;
        Point() {x=y=-1;}
        double Distance(Point a)
		{
			return sqrt((a.x-x)*(a.x-x)+(a.y-y)*(a.y-y));
		}
		Point operator+(Point &p)
		{
		    Point r;
            r.x = x + p.x;
            r.y = y + p.y;
            return r;
        }
        Point operator-(Point &p){Point r; r.x=x-p.x; r.y=y-p.y; return r;}
        Point operator*(Point &p){Point r; r.x=x*p.x; r.y=y*p.y; return r;}
};

#endif // POINT_H
