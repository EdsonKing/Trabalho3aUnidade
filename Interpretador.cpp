#include "FiguraGeometrica.h"
#include "PutVoxel.h"
#include "CutVoxel.h"
#include "PutBox.h"
#include "CutBox.h"
#include "PutSphere.h"
#include "CutSphere.h"
#include "PutEllipsoid.h"
#include "CutEllipsoid.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "sculptor.h"
#include "voxel.h"
#
Interpretador::Interpretador(){

}
std::vector<FiguraGeometrica*> Interpretador::parse(std::string endereco_arquivo){
std::vector<FiguraGeometrica*> figs;

    std::ifstream fin;
    std::string s, token;
    std::stringstream ss;


    fin.open("Steve.3d.txt");

    while(fin.good()){
        std::getline(fin,s);
        if(fin.good()){
            ss.clear();
            ss.str(s);
            ss >> token;
            if(ss.good()){
                if (token.compare("Dim") == 0){
                        int x,y,z;
                    ss >> x >> y >> z;
                }
                else if(token.compare("PutVoxel")==0){
                    int x,y,z;
                    float r,g,b,a;
                    ss >> x >> y >> z >> r >> g >> b >> a;
                    figs.push_back(new PutVoxel(x, y, z, r, g, b, a));
                }
                else if(token.compare("CutVoxel")==0){
                    int x,y,z;
                    ss >> x >> y >> z;
                    figs.push_back(new CutVoxel(x, y, z));
                }
                else if(token.compare("PutBox")==0){
                    int x0, x1, y0, y1, z0, z1;
                    float r, g, b, a;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                    figs.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
                }
                else if(token.compare("CutBox")==0){
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                    figs.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
                }
                else if(token.compare("PutSphere")==0){
                    int xcenter, ycenter, zcenter, radius;
                    float r, g, b, a;
                    ss >> xcenter >> ycenter >> zcenter >> radius >> r >> g >> b >> a;
                    figs.push_back(new PutSphere(xcenter, ycenter, zcenter, radius,r,g,b,a));
                }
                else if(token.compare("CutSphere")==0){
                    int xcenter, ycenter, zcenter, radius;
                    ss >> xcenter >> ycenter >> zcenter >> radius;
                    figs.push_back(new CutSphere(xcenter, ycenter, zcenter, radius));
                }
                else if(token.compare("PutEllipsoid")==0){
                    int xcenter, rx, ycenter, ry, zcenter, rz;
                    float r, g, b, a;
                    ss >> xcenter >> rx >> ycenter >> ry >> zcenter >> rz >> r >> g >> b >> a;
                    figs.push_back(new PutEllipsoid(xcenter, rx, ycenter, ry, zcenter, rz, r, g, b, a));
                }
                else if(token.compare("CutEllipsoid")==0){
                    int xcenter, rx, ycenter, ry, zcenter, rz;
                    ss >> xcenter >> rx >> ycenter >> ry >> zcenter >> rz;
                    figs.push_back(new CutEllipsoid(xcenter, rx, ycenter, ry, zcenter, rz));
                }
            }
        }
    }
    return (figs);
};

int Interpretador::getDimx(){
    return x;
};

int Interpretador::getDimy(){
    return y;
};

int Interpretador::getDimz(){
    return z;
};
