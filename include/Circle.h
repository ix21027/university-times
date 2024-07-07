#ifndef CIRCLE_H
#define CIRCLE_H

class Circle:public Figure
{
    public:
        Circle()
        {
            x0=y0=R=0.0;
        }
        Circle(double pX,double pY, double pR)
		{
			x0=pX;y0=pY;R=pR;
		}
		virtual std::string GetName()
		{
			return "Circle";
		}
		virtual double GetS()
		{
			return M_PI*R*R;
		}
		virtual double GetP()
		{
			return 2*M_PI*R;
		}

    private: double x0,y0,R;
};

#endif // CIRCLE_H
