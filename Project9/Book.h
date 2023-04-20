#include "library.h"
struct Book {
private:
	string author, name;
	int year, pages;
public:
	void setAuthor(string author);
	void setName(string name);
	void setYear(int year);
	void setPages(int pages);
	string getAuthor();
	string getName();
	int getYear();
	int getPages();
	Book();
	Book(string author);
	Book(string author, string name);
	Book(string author, string name, int year);
	Book(string author, string name, int year, int pages);
	~Book();
};