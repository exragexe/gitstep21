#include "CityProvider.h"
void CityProvider::PrintCity(City* city) {
	string path = "1.txt";
	fstream  fileout;
	fileout.open(path, ios_base::app);
	fileout << "Name: " << city->getName() << endl;
	fileout << "Country: " << city->getCountry() << endl;
	fileout << "Population: " << city->getPopulation() << endl;
	fileout << "Area: " << city->getArea() << endl;
	fileout.close();
}