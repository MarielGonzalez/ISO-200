#include <iostream>

using namespace std;

int perritasNoEmb = 3 ;
int perritasEmb = 2 ;
int totalPerritas= perritasNoEmb+perritasEmb;

const double porcionNormal = 0.25;
const double porcionManana = 0.25 * 2;
const double tarde = 2;
const double porcionEmb = (porcionNormal * 1.04) * tarde;

int main() {
	//Determinar la cantidad de purina que cada perrita consume>
	cout << "Tarea 4 - Perritas:"<< "\n \n";
	
	double porcionDiariaNoEmb = perritasNoEmb * (porcionManana + (porcionNormal * tarde));
	double porcionDiariaEmb= perritasEmb * (porcionEmb + porcionManana)  ;
	
	//1. La cantidad de purina que comen las que no están embarazadas
	cout << "Las perritas que no estan embarazadas comen:\t\t" <<  (porcionDiariaNoEmb) << " Lbs de purina"   << '\n';
	
	//2. La cantidad de purina que comen las que están embarazadas
	cout << "Las perritas que estan embarazadas comen:\t\t"<<  (porcionDiariaEmb) << " Lbs de purina"   << "\n \n" ;
	
	//1. La cantidad de purina total que comen las perritas en 5 dias
	double porcionTotal_5dias= (porcionDiariaNoEmb + porcionDiariaEmb)* 5 ;
	cout << "En 5 dias, las perritas comen un total de:\t\t" <<  (porcionTotal_5dias) << " Lbs de purina"   << '\n';
}