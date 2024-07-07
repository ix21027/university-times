#ifndef RHOMB_H
#define RHOMB_H

class Rhomb:public Figure
{
    public:
        Rhomb() {A.x=A.y=B.x=B.y=C.x=C.y=D.x=D.y=0.0;}
        Rhomb(double pAx, double pAy, double pBx, double pBy, double pCx, double pCy,double pDx,double pDy)
		{
			A.x=pAx;A.y=pAy;
			B.x=pBx;B.y=pBy;
			C.x=pCx;C.y=pCy;
			D.x=pDx;D.y=pDy;
		}
		virtual std::string GetName()
		{
			return "Rhomb";
		}
		virtual double GetP()
		{
			return 4.0*A.Distance(B);
		}
		virtual double GetS()
		{
			return 0.5*A.Distance(C)*B.Distance(D);
		}

    private:
        Point A;
        Point B;
        Point C;
        Point D;
};

#endif // RHOMB_H
