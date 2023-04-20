#include "library.h"
struct Comands {
private:
	string name;
	int win, lose;
public:
	void setName(string name);
	void setWin(int win);
	void setLose(int lose);
	string getName();
	int getWin();
	int getLose();
	Comands();
	Comands(string name);
	Comands(string name, int win);
	Comands(string name, int win, int lose);
	~Comands();
};