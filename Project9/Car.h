#include "library.h"
struct Car {
private:
	string brand, model;
	int manufacture, mileage;
public:
	void setBrand(string brand);
	void setModel(string model);
	void setManufacture(int manufacture);
	void setMileage(int mileage);
	string getBrand();
	string getModel();
	int getManufacture();
	int getMileage();
	Car();
	Car(string brand);
	Car(string brand, string model);
	Car(string brand, string model, int manufacture);
	Car(string brand, string model, int manufacture, int mileage);
	~Car();
};