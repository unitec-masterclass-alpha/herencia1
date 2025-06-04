#include "person.h"
#include "student.h"
#include "professor.h"

#include <iostream>

using std::cout;
using std::endl;
int main() {
	Person* a = new Person("Juan", "ABC12", 20);
	Person* b = new Student("Jean", 20, "Industrial");
	Person* c = new Professor("Jenny", 33, "Psycho", 20000);

	cout << a->GetID() << endl;
	cout << b->GetID() << endl;
	cout << c->GetID() << endl;


	delete a;
	delete b;
	delete c;


	return 0;
}
