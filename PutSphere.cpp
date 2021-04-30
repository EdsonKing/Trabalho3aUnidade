#include "PutSphere.h"
#include <iostream>
#include "sculptor.h"
#include "figurageometrica.h"
PutSphere::PutSphere(int xcenter,int ycenter,int zcenter,int radius,float r,float g,float b,float a)
{
    this->xcenter=xcenter; this->ycenter=ycenter;
    this->zcenter=zcenter;this->radius;this->g=g; this->b=b; this->r=r; this->a=a;
}

void PutSphere::draw(Sculptor &s){
s.setColor(r,g,b,a);
s.PutSphere(xcenter,ycenter,zcenter,radius);}
