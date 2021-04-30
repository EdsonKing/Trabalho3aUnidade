#include "CutEllipsoid.h"
#include <iostream>
#include "sculptor.h"
#include "figurageometrica.h"
CutEllipsoid::CutEllipsoid(int xcenter,int ycenter,int zcenter ,int rx, int ry, int rz)
{
    this->xcenter=xcenter; this->ycenter=ycenter; this->rx=rx; this->ry=ry; this->rz=rz;
    this->zcenter=zcenter;
}

void CutEllipsoid::draw(Sculptor &s){

s.CutEllipsoid(xcenter,ycenter,zcenter,rx,ry,rz);
}
