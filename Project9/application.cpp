#include "StudentProvider.h"
int main(){
	string path = "1.txt";
	fstream filein;
	string line;
	filein.open(path, ios_base::in);
	StudentProvider* student_provider = new StudentProvider();
	unsigned int const size = 5;
	Student* student[size] = { new Student("Jack", "Markov", 22, 10),new Student("Dan", "Poplavsky", 35, 11),\
	new Student("Bob","Gromin", 41,9), new Student("Vlad","Lipov",28,7), new Student("Albert","Enshtein",50,12)};
	for (size_t i = 0; i < size; i++)
	{
		student_provider->PrintStudent(student[i]);
		cout << endl;
	}
	if (filein.is_open()) {
		while (getline(filein,line)) {
			cout << line << endl;
		}
		filein.close();	
	}
	return 0;
}