#include <iostream>


int main() {
//Determinar la cantidad de purina que cada perrita consume>

int perritasNoPreg = 3 ;
int perritasPreg = 2 ;
int totalPerritas= perritasNoPreg+perritasPreg;

const double nomalFood = 0.25;
const int morning  = 2;
const int afternoon  = 2;
const double pregancyfood = ((nomalFood * 4/100) + nomalFood) * afternoon;

  std::cout << "Practica Perritas\n";

 double normalFeed= ((nomalFood * morning) + (nomalFood * afternoon)) * perritasNoPreg;

 double pregancyFeed= (pregancyfood + (nomalFood * morning)) *perritasPreg ;

  //1. La cantidad de purina que comen las que no están embarazadas

  std::cout << "Cuanto comen las perritas que no estan embarazdas?\n" ;

  std::cout << "Las que no estan embarazdas comen: \n" <<  (normalFeed) << "Lb de purina"   << '\n';

 //2. La cantidad de purina que comen las que están embarazadas
  
  std::cout << "Cuanto comen las perritas embarazdas?\n";

std::cout << "Las que estan embarazdas comen: \n" <<  (pregancyFeed) << "Lb de purina"   << '\n';

 //1. La cantidad de purina total que comen las perritas en 5 dias

 double totalPurinaFiveDays= ((normalFeed + pregancyFeed) * totalPerritas)* 5 ;

 std::cout << "En 5 dias, las perritas comen un total de: \n" <<  (totalPurinaFiveDays) << "Lb de purina"   << '\n';

  



}