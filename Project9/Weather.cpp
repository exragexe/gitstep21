#include "Weather.h"
void Weather::setDate(string date) {
	(date.empty()) ? this->date = "NULL" : this->date = date;
}
void Weather::setTemperature(int temperature) {
	if (temperature < -50 && temperature > 50) {
		cout << "This temperature isn`t on planet Earth"<<endl;
		this->temperature = 0;
	}
	else {
		this->temperature = temperature;
	}
}
void Weather::setAtmosphericpressure(int atmospheric_pressure) {
	if (atmospheric_pressure<0 && atmospheric_pressure > 816) {
		cout << "This atmospheric pressure isn`t on planet Earth" << endl;
		this->atmospheric_pressure = 0;
	}
	else {
		this->atmospheric_pressure = atmospheric_pressure;
	}
}
string Weather::getDate() {
	return date;
}
int Weather::getTemperature() {
	return temperature;
}
int Weather::getAtmosphericpressure() {
	return atmospheric_pressure;
}
Weather::Weather() {
	setDate("");
	setTemperature(0);
	setAtmosphericpressure(0);
}
Weather::Weather(string date) :Weather() {
	setDate(date);
}
Weather::Weather(string date, int temperature) :Weather(date) {
	setTemperature(temperature);
}
Weather::Weather(string date, int temperature, int atmospheric_pressure) :Weather(date, temperature) {
	setAtmosphericpressure(atmospheric_pressure);
}
Weather::~Weather() {
	cout << "Weather can`t be applicated" << endl;
	this->date.clear();
	this->temperature = 0;
	this->atmospheric_pressure = 0;
}