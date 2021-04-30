#include <iostream>
#include<vector>
#include "sculptor.h"
#include "figurageometrica.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "putvoxel.h"
#include "interpretador.h"



using namespace std;

int main()
{
   Sculptor *s1;


   Interpretador parser;

   std::vector<FiguraGeometrica*> figs;
   figs=parser.parse("/home/ambj/steve.txt");
   s1= new Sculptor(parser.getDimx(),parser.getDimy(),parser.getDimz());
for(size_t i=0; i<figs.size();i++){
    std::cout<<"draw\n";
    figs[i]->draw(*s1);
}
s1->limpavoxel();
s1->writeOFF((char*)"/home/ambj/saida.OFF");
for(size_t i=0;i<figs.size();i++){
    delete figs[i];
}
delete s1;
    return 0;
}
