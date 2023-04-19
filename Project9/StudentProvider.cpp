#include "StudentProvider.h"
void StudentProvider::PrintStudent(Student* student) {
	string path = "1.txt";
	fstream  fileout;
	fileout.open(path, ios_base::app);
	fileout << "Name: " << student->getName() << endl;
	fileout << "Surname: " << student->getSurname() << endl;
	fileout << "Age: " << student->getAge() << endl;
	fileout << "GPA: " << student->getGPA() << endl;
	fileout.close();
}
