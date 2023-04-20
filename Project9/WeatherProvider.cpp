#include "WeatherProvider.h"
void WeatherProvider::PrintWeather(Weather* weather) {
	string path = "1.txt";
	fstream  fileout;
	fileout.open(path, ios_base::app);
	fileout << "Date:" << weather->getDate() << endl;
	fileout << "Temperature in Celsiy:" << weather->getTemperature() << endl;
	fileout << "Atmospheric pressure(mm rt.st.):" << weather->getAtmosphericpressure() << endl;
	fileout.close();
}