#include "terreno.h"


terreno::terreno( float area,int id):imovel(id){
  this->area = area;
}

string terreno::toString(){
  return ("Area: " + to_string(this->area));
}

float terreno::getArea(){
  return this->area;
}