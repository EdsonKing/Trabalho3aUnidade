#include <iostream>
#include<vector>
#include "sculptor.h"
#include "FiguraGeometrica.h"
#include "Putbox.h"
#include "Cutbox.h"
#include "Putsphere.h"
#include "Putvoxel.h"
#include "Interpretador.h"



using namespace std;

int main()
{
   Sculptor *s1;


   Interpretador parser;

   std::vector<FiguraGeometrica*> figs;
   figs=parser.parse("Steve3d.txt");
   s1= new Sculptor(parser.getDimx(),parser.getDimy(),parser.getDimz());
for(size_t i=0; i<figs.size();i++){
    std::cout<<"draw\n";
    figs[i]->draw(*s1);
}
s1->limpavoxel();
s1->writeOFF((char*)"Steve3d.OFF");
for(size_t i=0;i<figs.size();i++){
    delete figs[i];
}
delete s1;
    return 0;
}
