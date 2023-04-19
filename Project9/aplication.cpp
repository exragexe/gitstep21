#include "CarProvider.h"
int main() {
	string path = "1.txt";
	fstream filein;
	string line;
	filein.open(path, ios_base::in);
	CarProvider* car_provider = new CarProvider();
	unsigned int const size = 5;
	Car* car[size] = { new Car("BMW", "570", 2010, 2231),new Car("Mercedes", "gt600", 2022, 8910),\
	new Car("Ferari","turbo", 2019,12300), new Car("Porshe","Urus",2023,1212), new Car("Opel","gt300",2020,13600) };
	for (size_t i = 0; i < size; i++)
	{	
		if (car[i]->getMileage() >= 10000) {
			
		}
		else {
			car_provider->PrintCar(car[i]);
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