#include "BookProvider.h"
void BookProvider::PrintBook(Book* book) {
	string path = "1.txt";
	fstream  fileout;
	fileout.open(path, ios_base::app);
	fileout << "Author: " << book->getAuthor() << endl;
	fileout << "Name: " << book->getName() << endl;
	fileout << "Year: " << book->getYear() << endl;
	fileout << "Pages: " << book->getPages() << endl;
	fileout.close();
}