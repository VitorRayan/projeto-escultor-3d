#include <iostream>
#include "sculptor.h"
#include <iostream>
#include <fstream>
#include <cstdlib>


int main() {
  // cria um escultor cuja matriz tem 50x50x50 voxels
  Sculptor knuckles(50,50,50);

  //programa teste elipsoid
  Sculptor elipsoid (80,80,80);
  elipsoid.setColor(1,0,0,1.0); // vermelho
  elipsoid.putEllipsoid(2,2,2,1,2,4);
  elipsoid.cutEllipsoid(1,1,1,2,2,2);
    elipsoid.writeOFF((char*)"elipsoid.off");


  //cabeça
  knuckles.setColor(1.0, 0.0, 0.0, 1.0); // vermelho
  knuckles.putBox(20,29,20,27,20,28);
  knuckles.cutBox(20,21,20,27,20,21);
  knuckles.cutBox(20,21,20,27,27,28);
  knuckles.cutBox(28,29,20,27,20,21);
  knuckles.cutBox(28,29,20,27,27,28);
  knuckles.cutBox(20,29,20,21,20,21);
  knuckles.cutBox(20,29,20,21,27,28);
  knuckles.cutBox(20,29,26,27,20,21);
  knuckles.cutBox(20,29,26,27,27,28);
  knuckles.cutBox(20,21,20,21,20,28);
  knuckles.cutBox(20,21,26,27,20,28);
  knuckles.cutBox(28,29,20,21,20,28);
  knuckles.cutBox(28,29,26,27,20,28);


  //orelhas
  knuckles.setColor(1,0.8,0.6,1.0);//pele
  knuckles.putVoxel(20,26,25);
  knuckles.putVoxel(28,26,25);
  knuckles.setColor(1.0, 0.0, 0.0, 1.0); // vermelho
  knuckles.putVoxel(19,26,25);
  knuckles.putVoxel(19,25,25);
  knuckles.putVoxel(19,27,25);
  knuckles.putVoxel(20,27,25);
  knuckles.putVoxel(21,27,25);
  knuckles.putVoxel(20,26,24);
  knuckles.putVoxel(29,26,25);
  knuckles.putVoxel(29,27,25);
  knuckles.putVoxel(27,27,25);
  knuckles.putVoxel(29,25,25);
  knuckles.putVoxel(28,27,25);
  knuckles.putVoxel(28,26,24);

  //olhos
  knuckles.setColor(1.0,1.0,1.0,1.0);//branco
  knuckles.putVoxel(22,24,27);
  knuckles.putVoxel(22,23,27);
  knuckles.putVoxel(22,22,27);
  knuckles.putVoxel(23,24,27);
  knuckles.setColor(0.5, 0.0, 0.5, 1.0);//roxo
  knuckles.putVoxel(23,23,27);
  knuckles.setColor(0,0,0,1.0);//preto
  knuckles.putVoxel(23,22,27);
  knuckles.setColor(1.0,1.0,1.0,1.0);//branco
  knuckles.putVoxel(24,22,27);
  knuckles.putVoxel(25,24,27);
  knuckles.putVoxel(26,24,27);
  knuckles.putVoxel(26,23,27);
  knuckles.putVoxel(26,22,27);
  knuckles.setColor(0.5, 0.0, 0.5, 1.0);//roxo
  knuckles.putVoxel(25,23,27);
  knuckles.setColor(0,0,0,1.0);//preto
  knuckles.putVoxel(25,22,27);

  //bochecha
  knuckles.setColor(1,0.8,0.6,1.0);//pele
  knuckles.putBox(21,28,20,22,27,29);

  //nariz
  knuckles.setColor(0,0,0,1.0);//preto
  knuckles.putVoxel(24,21,29);


  //crista
  knuckles.setColor(1.0, 0.0, 0.0, 1.0); // vermelho
  knuckles.putVoxel(24,27,23);
  knuckles.putVoxel(24,27,22);
  knuckles.putVoxel(24,27,21);
  knuckles.putVoxel(24,27,20);
  knuckles.putVoxel(24,27,19);
  knuckles.putVoxel(24,27,18);
  knuckles.putVoxel(24,27,17);
  knuckles.putVoxel(24,27,16);
  knuckles.putVoxel(24,27,15);
  knuckles.putVoxel(24,26,20);
  knuckles.putVoxel(24,26,19);
  knuckles.putVoxel(24,26,18);
  knuckles.putVoxel(24,26,17);
  knuckles.putVoxel(24,26,16);
  knuckles.putVoxel(24,25,17);
  knuckles.putVoxel(24,25,18);
  knuckles.putVoxel(24,25,19);
  knuckles.putVoxel(24,24,19);
  knuckles.putVoxel(24,24,18);
  knuckles.putVoxel(24,23,19);
  knuckles.putVoxel(24,22,19);
  knuckles.putVoxel(24,22,18);
  knuckles.putVoxel(24,22,17);
  knuckles.putVoxel(24,22,16);
  knuckles.putVoxel(24,22,15);
  knuckles.putVoxel(24,21,16);
  knuckles.putVoxel(24,21,17);
  knuckles.putVoxel(24,21,18);
  knuckles.putVoxel(24,21,19);
  knuckles.putVoxel(24,20,20);
  knuckles.putVoxel(24,20,19);
  knuckles.putVoxel(24,20,18);
  knuckles.putVoxel(24,20,17);

  //anel
  knuckles.setColor(1.0,0.8,0,1.0);
  knuckles.putSphere(24,23,35,5);
  knuckles.cutSphere(24,23,36,5);
  knuckles.cutSphere(24,23,33,4);


  // grava a escultura digital no arquivo "knuckles.off"
  knuckles.writeOFF("knuckles.off");
  }