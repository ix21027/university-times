#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle:public Figure
{
    public:
        Triangle() {A.x=A.y=B.x=B.y=C.x=C.y=0.0;}
        Triangle(double pAx, double pAy, double pBx, double pBy, double pCx, double pCy)
		{
			A.x=pAx;A.y=pAy;
			B.x=pBx;B.y=pBy;
			C.x=pCx;C.y=pCy;
		}
		virtual std::string GetName()
		{
			return "Triangle";
		}
		virtual double GetS()
		{
			double a=A.Distance(B),b=A.Distance(C),c=B.Distance(C),p=(a+b+c)/2.0;
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
		virtual double GetP()
		{
			double a=A.Distance(B),b=A.Distance(C),c=B.Distance(C),p;
			p=a+b+c;
			return p;
		}

    private:
        Point A;
        Point B;
        Point C;
};

#endif // TRIANGLE_H
