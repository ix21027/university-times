#ifndef SQUARE_H
#define SQUARE_H

class Square:public Figure
{
    public:
        Square() {A.x=A.y=B.x=B.y=C.x=C.y=D.x=D.y=0.0;}
        Square(double pAx, double pAy, double pBx, double pBy, double pCx, double pCy,double pDx,double pDy)
		{
			A.x=pAx;A.y=pAy;
			B.x=pBx;B.y=pBy;
			C.x=pCx;C.y=pCy;
			D.x=pDx;D.y=pDy;
		}
		virtual std::string GetName()
		{
			return "Square";
		}
		virtual double GetS()
		{
			return A.Distance(B)*A.Distance(B);
		}
		virtual double GetP()
		{
			return A.Distance(B)*4;
		}
    private:
        Point A;
        Point B;
        Point C;
        Point D;
};

#endif // SQUARE_H
