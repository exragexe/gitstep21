#include "Book.h"
void Book::setAuthor(string author) {
	(author.empty()) ? this->author = "NULL" : this->author = author;
}
void Book::setName(string name) {
	(name.empty()) ? this->name = "NULL" : this->name = name;
}
void Book::setYear(int year) {
	if (year <= 0 && year >= 2023) {
		this->year = 0;
		cout << "Year not correct" << endl;
	}
	else {
		this->year = year;
	}
}
void Book::setPages(int pages) {
	if (pages <= 0) {
		cout << "Pages not correct" << endl;
		this->pages = 0;
	}
	else {
		this->pages = pages;
	}
}
string Book::getAuthor() {
	return author;
}
string Book::getName() {
	return name;
}
int Book::getYear() {
	return year;
}
int Book::getPages() {
	return pages;
}
Book::Book() {
	setAuthor("");
	setName("");
	setYear(0);
	setPages(1);
}
Book::Book(string author) :Book() {
	setAuthor(author);
}
Book::Book(string author, string name) :Book(author) {
	setName(name);
}
Book::Book(string author, string name, int year) :Book(author,name) {
	setYear(year);
}
Book::Book(string author, string name, int year, int pages) :Book(author,name,year) {
	setPages(pages);
}
Book::~Book() {
	cout << "System error" << endl;
	this->author.clear();
	this->name.clear();
	this->year = 0;
	this->pages = 0;

}