#include "WeatherProvider.h"
int main() {
	string path = "1.txt";
	fstream filein;
	string line;
	filein.open(path, ios_base::in);
	WeatherProvider* weather_provider = new WeatherProvider();
	unsigned int const size = 5;
	Weather* weather[size] = { new Weather("20.02.23",-10,600),new Weather("23.01.23", -5,700),\
	new Weather("19.04.22", 8,500), new Weather("21.04.20",15,650), new Weather("05.01.23",-12,610) };
	for (size_t i = 0; i < size; i++)
	{
		if (weather[i]->getTemperature() >0) {

		}
		else {
			weather_provider->PrintWeather(weather[i]);
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