#include "City.h"
void City::setName(string name) {
	(name.empty()) ? this->name = "NULL" : this->name = name;
}
void City::setCountry(string country) {
	(country.empty()) ? this->country = "NULL" : this->country = country;
}
void City::setPopulation(int population) {
	if (population < 0) {
		this->population = 0;
		cout << "Population not correct" << endl;
	}
	else {
		this->population = population;
	}
}
void City::setArea(int area) {
	if (area < 0) {
		cout << "Area not correct" << endl;
		this->area = 0;
	}
	else {
		this->area = area;
	}
}
string City::getName() {
	return name;
}
string City::getCountry() {
	return country;
}
int City::getPopulation() {
	return population;
}
int City::getArea() {
	return area;
}
City::City() {
	setName("");
	setCountry("");
	setPopulation(0);
	setArea(0);
}
City::City(string name) :City() {
	setName(name);
}
City::City(string name, string country) :City(name) {
	setCountry(country);
}
City::City(string name, string country, int population) :City(name, country) {
	setPopulation(population);
}
City::City(string name, string country, int population, int area) :City(name, country, population) {
	setArea(area);
}
City::~City() {
	cout << "System error" << endl;
	this->name.clear();
	this->country.clear();
	this->population = 0;
	this->area = 0;
}