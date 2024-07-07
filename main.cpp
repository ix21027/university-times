#include <fstream>
#include <iostream>
#include "Figure.h"
#include "Circle.h"
#include "EqltrlTriangle.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include "Rhomb.h"
#include "Square.h"
#include "Triangle.h"
using namespace std;

int main()
{
    ifstream file("figures.txt");
    if (!(file.is_open())){cout<<"EOF";return -3;}
    int N;
    file>>N;
    Figure* figArray[N];
    string s;
    file>>s;
    for(int i=0; i<N; ++i)
    {
        if(s=="circle"){
            double x,y,r;
            file>>x>>y>>r;
            figArray[i] = new Circle(x,y,r);
        }
        else if(s=="triangle"){
            double Ax,Ay,Bx,By,Cx,Cy;
            file>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
            figArray[i] = new Triangle(Ax,Ay,Bx,By,Cx,Cy);
        }
        else if(s=="square"){
            double Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
            file>>Ax>>Ay>>Bx>>By>>Cx>>Cy>>Dx>>Dy;
            figArray[i] = new Square(Ax,Ay,Bx,By,Cx,Cy,Dx,Dy);
        }
        else if(s=="rhomb"){
            double Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
            file>>Ax>>Ay>>Bx>>By>>Cx>>Cy>>Dx>>Dy;
            figArray[i] = new Rhomb(Ax,Ay,Bx,By,Cx,Cy,Dx,Dy);
        }
        else if(s=="ellipse"){
            double Ox, Oy, Ax, Ay, Bx, By;
            file>>Ox>>Oy>>Ax>>Ay>>Bx>>By;
            figArray[i] = new Ellipse(Ox, Oy, Ax, Ay, Bx, By);
        }
        else if(s=="rectangle"){
            double Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
            file>>Ax>>Ay>>Bx>>By>>Cx>>Cy>>Dx>>Dy;
            figArray[i] = new Rectangle(Ax,Ay,Bx,By,Cx,Cy,Dx,Dy);
        }
        else if(s=="equilateral_triangle"){
            double x0,y0,r;
            file>>x0>>y0>>r;
            figArray[i] = new EqltrlTriangle(x0,y0,r);
        }
        else {cout<< "Net takoi figury@"; return -12;}
        cout<<"Figure type is "<<figArray[i]->GetName()<<'\n'
            <<" Perimetr="<<figArray[i]->GetP()<<'\n'
            <<" Area="<<figArray[i]->GetS()<<'\n'<<'\n';
        file>>s;
    }
    return 0;
}
