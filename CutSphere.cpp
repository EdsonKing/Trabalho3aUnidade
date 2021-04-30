#include "CutSphere.h"
#include <iostream>
#include "sculptor.h"
#include "figurageometrica.h"
CutSphere::CutSphere(int xcenter,int ycenter,int zcenter,int radius)
{
    this->xcenter=xcenter; this->ycenter=ycenter;
    this->zcenter=zcenter; this->radius;
}

void CutSphere::draw(Sculptor &s){

s.CutSphere(xcenter,ycenter,zcenter,radius);
}
