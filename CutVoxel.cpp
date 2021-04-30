#include "CutVoxel.h"
#include<iostream>
#include "sculptor.h"
#include "figurageometrica.h"
CutVoxel::CutVoxel(int x,int y,int z)
{
    this->x=x; this->y=y;
    this->z=z;
}

void CutVoxel::draw(Sculptor &s){

s.CutVoxel(x,y,z);
}
