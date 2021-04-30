#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include<vector>
#include "FiguraGeometrica.h"
#include<string>

class Interpretador
{int Dimx,Dimy,Dimz,x,y,z;
float r,g,b,a;

    public:
        Interpretador();
        std::vector<FiguraGeometrica *> parse(std::string filename);
        int getDimx();
        int getDimy();
        int getDimz();



};

#endif // INTERPRETADOR_H
