#include "library.h"
struct Student {
private:
	string name, surname;
	int age, GPA;
public:
	void setName(string name);
	void setSurname(string surname);
	void setAge(int age);
	void setGPA(int GPA);
	string getName();
	string getSurname();
	int getAge();
	int getGPA();
	Student();
	Student(string name);
	Student(string name,string surname);
	Student(string name, string surname, int age);
	Student(string name, string surname, int age, int GPA);
	~Student();
};