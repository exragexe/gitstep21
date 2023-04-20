#include "GoodsProvider.h"
int main() {
	string path = "1.txt";
	fstream filein;
	string line;
	filein.open(path, ios_base::in);
	GoodsProvider* goods_provider = new GoodsProvider();
	unsigned int const size = 5;
	Goods* goods[size] = { new Goods("Milk",12,300 ),new Goods("Meat", 33,600),\
	new Goods("Eggs", 8,100), new Goods("Bread",22,450), new Goods("Nuts",5,80) };
	for (size_t i = 0; i < size; i++)
	{
		if (goods[i]->getNumber()<=10) {

		}
		else {
			goods_provider->PrintGoods(goods[i]);
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