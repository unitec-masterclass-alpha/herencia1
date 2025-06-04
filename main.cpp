#include "person.h"
#include "student.h"
#include "professor.h"

#include <iostream>

using std::cout;
using std::endl;
int main() {
	Person* p[3];
	p[0] = new Person("Juan", "ABC12", 20);
	p[1] = new Student("Jean", 20, "Industrial");
	p[2] = new Professor("Jenny", 33, "Psycho", 20000);

	for (int i=0; i<3; i++)
		cout << p[i]->GetID() << endl;

	//cout << "EL GPA DE Jean es: " << b->GetGPA() << endl;
	
	for (int i=0; i<3; i++){
		Student* s = dynamic_cast<Student*>(p[i]);
		if (s != nullptr){
			cout << s->GetGPA() << endl;
		}else{
			Professor* r = dynamic_cast<Professor*>(p[i]);
			if (r != nullptr){
				cout << r->Raise(0) << endl;
			}else{
				cout << "Solo es person" << endl;
			}
		}
		
	}



	
	for (int i=0; i<3; i++)
		delete p[i];

	return 0;
}
