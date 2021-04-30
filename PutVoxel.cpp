#include "PutVoxel.h"
#include<iostream>
#include "sculptor.h"
#include "figurageometrica.h"
PutVoxel::PutVoxel(int x,int y,int z,float r,float g,float b,float a)
{
    this->x=x; this->y=y;
    this->z=z;this->g=g; this->b=b; this->r=r; this->a=a;
}

void PutVoxel::draw(Sculptor &s){
s.setColor(r,g,b,a);
s.PutVoxel(x,y,z);
}
