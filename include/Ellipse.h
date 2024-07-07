#ifndef ELLIPSE_H
#define ELLIPSE_H

class Ellipse:public Figure
{
    public:
        Ellipse() {A.x=A.y=B.x=B.y=O.x=O.y=0.0;}
        Ellipse(double pOx, double pOy, double pAx, double pAy, double pBx, double pBy)
		{
			A.x=pAx;A.y=pAy;
			B.x=pBx;B.y=pBy;
			O.x=pOx;O.y=pOy;
		}
		virtual std::string GetName()
		{
			return "Ellipse";
		}
		virtual double GetS()
		{
			return M_PI*O.Distance(A)*O.Distance(B);
		}
		virtual double GetP()
		{
			return M_PI*(3*(O.Distance(A)+O.Distance(B))-sqrt((3*O.Distance(A)+O.Distance(B))*(O.Distance(A)+3*O.Distance(B))));
		}
    private:
        Point A;
        Point B;
        Point O;
};

#endif // ELLIPSE_H
