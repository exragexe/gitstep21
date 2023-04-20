#include "ComandsProvider.h"
void ComandsProvider::PrintComands(Comands* comands) {
	string path = "1.txt";
	fstream  fileout;
	fileout.open(path, ios_base::app);
	fileout << "Name of comand:" << comands->getName() << endl;
	fileout << "Number win match:" << comands->getWin() << endl;
	fileout << "Number lose match:" << comands->getLose() << endl;
	fileout.close();
}