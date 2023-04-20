#include "ComandsProvider.h"
int main() {
	string path = "1.txt";
	fstream filein;
	string line;
	int allmatch;
	filein.open(path, ios_base::in);
	ComandsProvider* comands_provider = new ComandsProvider();
	unsigned int const size = 5;
	Comands* comands[size] = { new Comands("Red buls",12,17),new Comands("Real Madrid", 33,12),\
	new Comands("Chelsie", 8,6), new Comands("Dinamo",22,23), new Comands("PSG",18,2) };
	
	for (size_t i = 0; i < size; i++)
	{
		allmatch = comands[i]->getWin() + comands[i]->getLose();
		//double wproc = static_cast<double>(comands[i]->getWin()) / allmatch * 100;
		//
		//double lproc = static_cast<double>(comands[i]->getLose()) / allmatch * 100;
		if (static_cast<double>(comands[i]->getLose()) / allmatch * 100 > static_cast<double>(comands[i]->getWin()) / allmatch * 100) {
			
		}
		else {
			comands_provider->PrintComands(comands[i]);
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