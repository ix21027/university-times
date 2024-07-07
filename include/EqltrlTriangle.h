#ifndef EQLTRLTRIANGLE_H
#define EQLTRLTRIANGLE_H

class EqltrlTriangle:public Figure
{
    public:
        EqltrlTriangle() {x0=y0=r=0.0;}
        EqltrlTriangle(double pX,double pY, double pR)
		{
			x0=pX;y0=pY;r=pR;
		}
		virtual std::string GetName()
		{
			return "Equilateral Triangle";
		}
		virtual double GetS()
		{
			return 3*sqrt(3)*r*r;
		}
		virtual double GetP()
		{
			return 6*sqrt(3)*r;
		}
    private:
        double x0,y0,r;
};

#endif // EQLTRLTRIANGLE_H
