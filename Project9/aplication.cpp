#include "BookProvider.h"
int main() {
	string path = "1.txt";
	fstream filein;
	string line;
	filein.open(path, ios_base::in);
	BookProvider* book_provider = new BookProvider();
	unsigned int const size = 5;
	Book* book[size] = { new Book("Tom", "Rusalka", 2013, 100),new Book("Gomer", "Magic Dream", 1982, 150),\
	new Book("Aureliy","Domino", 2003,134), new Book("Dmitry","Forest of death",1996,200), new Book("Alexandr","Colobok",2009,182) };
	for (size_t i = 0; i < size; i++)
	{
		if (book[i]->getYear() <2000) {
			
		}
		else {
			book_provider->PrintBook(book[i]);
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