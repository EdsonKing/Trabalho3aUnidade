#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <vector>
#include "Voxel.h"
#include <string>
using namespace std;

class Sculptor {
private:
  Voxel ***v;    // 3D matrix
  int SomaX = 2 , SomaY = 2, SomaZ = 2 ;
  float lado;
  int nx, ny, nz;  // Dimensões em x, y e z
   // Cor do desenhos
  int i, j, k;   // variáveis auxiliares
public:
  Sculptor(int mx = 1, int my = 1, int mz = 1); //Construtor da classe
  ~Sculptor();
  float r, g, b, a;
  void limpavoxel();                                  //Destrutor da classe
  void aloca();
  void libera();
  void troca(int &a, int &b);
  void preenche(int x0, int x1, int y0, int y1, int z0, int z1);
  void setColor(float mr, float mg, float mb, float alpha);
  void PutVoxel(int x, int y, int z);           //OK
  void CutVoxel(int x, int y, int z);           //OK
  void PutBox(int x0, int x1, int y0, int y1, int z0, int z1); //OK
  void CutBox(int x0, int x1, int y0, int y1, int z0, int z1); //OK
  void PutSphere(int xcenter, int ycenter, int zcenter, int radius);
  void CutSphere(int xcenter, int ycenter, int zcenter, int radius);
  void PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void apoio();
  void bordas();
  void corte(int x0, int x1, int y0, int y1, int z0, int z1);
  void writeOFF(string filename);
};


#endif // SCULPTOR_H
