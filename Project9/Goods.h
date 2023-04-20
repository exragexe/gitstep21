#include "libraray.h"
struct Goods {
private:
	string name;
	int number, price;
public:
	void setName(string name);
	void setNumber(int number);
	void setPrice(int price);
	string getName();
	int getNumber();
	int getPrice();
	Goods();
	Goods(string name);
	Goods(string name, int number);
	Goods(string name, int number, int price);
	~Goods();


};