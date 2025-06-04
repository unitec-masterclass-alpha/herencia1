//
// Created by Arias Arevalo, Carlos on 5/30/25.
//

#ifndef PERSON_H
#define PERSON_H

#include <string>

using std::string;

class Person {
private:
	char* _name;
	unsigned int _age;
	char _id[6];
public:
	Person(const string& name, unsigned int age);
	Person(const string& name, const string& id, usinged int age);
	virtual ~Person();
	Person(const Person& person);
	Person& operator=(const Person& person);
	virtual string ToString()const;
	void Birthday();
	string GetID()const;
};



#endif //PERSON_H
