#include "CityProvider.h"
int main() {
	string path = "1.txt";
	fstream filein;
	string line;
	filein.open(path, ios_base::in);
	CityProvider* city_provider = new CityProvider();
	unsigned int const size = 5;
	City* city[size] = { new City("Tokyo", "Japan", 37400000, 2200),new City("New York City", "USA", 900000, 468),\
	new City("Mumbai","India", 20411000,603), new City("Vinnitsa","Ukraint",920000,500), new City("Mexico","Mexico",21825000,1485) };
	for (size_t i = 0; i < size; i++)
	{
		if (city[i]->getPopulation() < 1000000) {

		}
		else {
			city_provider->PrintCity(city[i]);
			cout << endl;
		}
	}
	if (filein.is_open()) {
		while (getline(filein, line)) {
			cout << line << endl;
		}
		filein.close();
	}
	return 0;
}