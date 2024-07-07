#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle:public Figure
{
    public:
        Rectangle() {A.x=A.y=B.x=B.y=C.x=C.y=D.x=D.y=0.0;}
        Rectangle(double pAx, double pAy, double pBx, double pBy, double pCx, double pCy,double pDx,double pDy)
		{
			A.x=pAx;A.y=pAy;
			B.x=pBx;B.y=pBy;
			C.x=pCx;C.y=pCy;
			D.x=pDx;D.y=pDy;
		}
		virtual std::string GetName()
		{
			return "Rectangle";
		}
		virtual double GetS()
		{
			return A.Distance(B)*A.Distance(D);
		}
		virtual double GetP()
		{
			double a=A.Distance(B),b=A.Distance(D),c=B.Distance(C),d=C.Distance(D),p;
			p=a+b+c+d;
			return p;
		}
    private:
        Point A;
        Point B;
        Point C;
        Point D;
};

#endif // RECTANGLE_H
