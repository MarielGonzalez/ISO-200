#include <iostream>

int perritasNoEmb = 3 ;
int perritasEmb = 2 ;
int totalPerritas= perritasNoEmb+perritasEmb;

const double porcionNormal = 0.25;
const double porcionMañana = 0.25 * 2;
const double tarde = 2;
const double porcionEmb = (porcionNormal * 1.04) * tarde;



int main() {
//Determinar la cantidad de purina que cada perrita consume>
  std::cout << "Practica Perritas\n";

 double porcionDiariaNoEmb = perritasNoEmb * (porcionMañana + (porcionNormal * tarde));

 double porcionDiariaEmb= perritasEmb * (porcionEmb + porcionMañana)  ;

  //1. La cantidad de purina que comen las que no están embarazadas

  std::cout << "Cuanto comen las perritas que no estan embarazdas?\n" ;

  std::cout << "Las que no estan embarazdas comen: \n" <<  (porcionDiariaNoEmb) << "Lb de purina"   << '\n';

 //2. La cantidad de purina que comen las que están embarazadas
  
std::cout << "Cuanto comen las perritas embarazdas?\n";

std::cout << "Las que estan embarazdas comen: \n" <<  (porcionDiariaEmb) << "Lbs de purina"   << '\n';

 //1. La cantidad de purina total que comen las perritas en 5 dias

 double porcionTotal_5dias= (porcionDiariaNoEmb + porcionDiariaEmb)* 5 ;

 std::cout << "En 5 dias, las perritas comen un total de: \n" <<  (porcionTotal_5dias) << "Lbs de purina"   << '\n';

  



}