#include "Comands.h"
void Comands::setName(string name) {
	(name.empty()) ? this->name = "NULL" : this->name = name;
}
void Comands::setWin(int win) {
	if (win < 0) {
		cout << "Have not win" << endl;
		this->win = 0;
	}
	else {
		this->win = win;
	}
}
void Comands::setLose(int lose) {
	if (lose < 0) {
		cout << "Have not lose" << endl;
		this->lose = 0;
	}
	else {
		this->lose = lose;
	}
}
string Comands::getName() {
	return name;
}
int Comands::getWin() {
	return win;
}
int Comands::getLose() {
	return lose;
}
Comands::Comands() {
	setName("");
	setWin(0);
	setLose(0);
}
Comands::Comands(string name) :Comands() {
	setName(name);
}
Comands::Comands(string name, int win) :Comands(name) {
	setWin(win);
}
Comands::Comands(string name, int win, int lose) :Comands(name, win) {
	setLose(lose);
}
Comands::~Comands() {
	cout << "Comands can`t be applicated" << endl;
	this->name.clear();
	this->win = 0;
	this->lose = 0;
}