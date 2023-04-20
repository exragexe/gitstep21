#include "GoodsProvider.h"
void GoodsProvider::PrintGoods(Goods * goods) {
	string path = "1.txt";
	fstream  fileout;
	fileout.open(path, ios_base::app);
	fileout << "Name of goods:" << goods->getName() << endl;
	fileout << "Number of goods:" << goods->getNumber() << endl;
	fileout << "Price is for one:" << goods->getPrice() << endl;
	fileout.close();
}