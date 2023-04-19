#include "CarProvider.h"
void CarProvider::PrintCar(Car* car) {
	string path = "1.txt";
	fstream  fileout;
	fileout.open(path, ios_base::app);
	fileout << "Brand: " << car->getBrand() << endl;
	fileout << "Model: " << car->getModel() << endl;
	fileout << "Manufacture: " << car->getManufacture() << endl;
	fileout << "Mileage: " << car->getMileage() << endl;
	fileout.close();
}