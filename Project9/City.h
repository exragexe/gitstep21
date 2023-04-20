#include "library.h"
struct City {
private:
	string name, country;
	int population, area;
public:
	void setName(string name);
	void setCountry(string country);
	void setPopulation(int population);
	void setArea(int area);
	string getName();
	string getCountry();
	int getPopulation();
	int getArea();
	City();
	City(string name);
	City(string name, string country);
	City(string name, string country, int population);
	City(string name, string country, int population, int area);
	~City();
};