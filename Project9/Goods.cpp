#include "Goods.h"
void Goods::setName(string name){
	(name.empty()) ? this->name = "NULL" : this->name = name;
}
void Goods :: setNumber(int number) {
	if (number < 0) {
		cout << "Have not goods"<<endl;
		this-> number = 0;
	}
	else {
		this->number = number;
	}
}
void Goods::setPrice(int price) {
	if (price < 0) {
		cout << "Have not price" << endl;
		this->price = 0;
	}
	else {
		this->price = price;
	}
}
string Goods::getName() {
	return name;
}
int Goods::getNumber() {
	return number;
}
int Goods::getPrice() {
	return price;
}
Goods::Goods() {
	setName("");
	setNumber(0);
	setPrice(0);
}
Goods::Goods(string name):Goods() {
	setName(name);
}
Goods::Goods(string name,int number) :Goods(name) {
	setNumber(number);
}
Goods::Goods(string name, int number,int price) :Goods(name,number) {
	setPrice(price);
}
Goods::~Goods() {
	cout << "Goods can`t be applicated"<<endl;
	this->name.clear();
	this->number = 0;
	this->price = 0;
}