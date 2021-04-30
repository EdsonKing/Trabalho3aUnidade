#include "PutEllipsoid.h"
#include <iostream>
#include "sculptor.h"
#include "figurageometrica.h"
PutEllipsoid::PutEllipsoid(int xcenter,int ycenter, int zcenter ,int rx, int ry, int rz,float r,float g,float b,float a)
{
    this->xcenter=xcenter; this->ycenter=ycenter; this->rx=rx; this->ry=ry; this->rz=rz;
    this->zcenter=zcenter;this->g=g; this->b=b; this->r=r; this->a=a;
}

void PutEllipsoid::draw(Sculptor &s){
s.setColor(r,g,b,a);
s.PutEllipsoid(xcenter,ycenter,zcenter,rx,ry,rz);
}
