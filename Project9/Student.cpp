#include "Student.h"
void Student::setName(string name) {
	(name.empty()) ? this->name = "NULL" : this->name = name;
}
void Student::setSurname(string surname) {
	(surname.empty()) ? this->surname = "NULL" : this->surname = surname;
}
void Student::setAge(int age) {
	if (age <= 17 && age >= 55) {
		this->age = 0;
		cout << "This age not normal for student"<<endl;
	}
	else {
		this->age = age;
	}
}
void Student::setGPA(int GPA) {
	if (GPA <= 1 && GPA >= 12) {
		cout << "This GPA not normal for student"<<endl;
		this->GPA = 0;
	}
	else {
		this->GPA = GPA;
	}
}
string Student::getName() {
	return name;
}
string Student::getSurname() {
	return surname;
}
int Student::getAge() {
	return age;
}
int Student::getGPA() {
	return GPA;
}
Student::Student() {
	setName("");
	setSurname("");
	setAge(17);
	setGPA(1);
}
Student::Student(string name) :Student() {
	setName(name);
}
Student::Student(string name,string surname) :Student(name) {
	setSurname(surname);
}
Student::Student(string name, string surname,int age) :Student(name,surname) {
	setAge(age);
}
Student::Student(string name, string surname, int age, int GPA) :Student(name, surname,age) {
	setGPA(GPA);
}
Student::~Student() {
	cout << "System error"<<endl;
	this->name.clear();
	this->surname.clear();
	this->age = 0;
	this->GPA = 0;

}
