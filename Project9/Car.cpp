#include "Car.h"
void Car::setBrand(string brand) {
	(brand.empty()) ? this->brand = "NULL" : this->brand = brand;
}
void Car::setModel(string model) {
	(model.empty()) ? this->model = "NULL" : this->model = model;
}
void Car::setManufacture(int manufacture) {
	if (manufacture < 1980 && manufacture >=2023) {
		this->manufacture = 0;
		cout << "Manufacture doesn`t truth"<<endl;
	}
	else {
		this->manufacture = manufacture;
	}
}
void Car::setMileage(int mileage) {
	if (mileage < 0) {
		this->mileage = 0;
		cout << "Mileage doesn`t truth" << endl;
	}
	else {
		this->mileage = mileage;
	}
}
string Car::getBrand() {
	return brand;
}
string Car::getModel() {
	return model;
}
int Car::getManufacture() {
	return manufacture;
}
int Car::getMileage() {
	return mileage;
}
Car::Car() {
	setBrand("");
	setModel("");
	setManufacture(1980);
	setMileage(0);
}
Car::Car(string brand) :Car() {
	setBrand(brand);
}
Car::Car(string brand, string model) :Car(brand) {
	setModel(model);
}
Car::Car(string brand, string model, int manufacture) :Car(brand, model) {
	setManufacture(manufacture);
}
Car::Car(string brand, string model, int manufacture, int mileage) :Car(brand, model, manufacture) {
	setMileage(mileage);
}
Car::~Car() {
	cout << "System error" << endl;
	this->brand.clear();
	this->model.clear();
	this->manufacture = 0;
	this->mileage = 0;

}