#include "lib.h"
struct Weather {
private:
	string date;
	int temperature, atmospheric_pressure;
public:
	void setDate(string date);
	void setTemperature(int temperature);
	void setAtmosphericpressure(int atmospheric_pressure);
	string getDate();
	int getTemperature();
	int getAtmosphericpressure();
	Weather();
	Weather(string date);
	Weather(string date, int temperature);
	Weather(string date, int temperature, int atmospheric_pressure);
	~Weather();
};