//
// Created by Will Smith on 3/8/18.
//

#ifndef SPRING2018_PERSON_H
#define SPRING2018_PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    Person(const string &name, int age);

    Person();

    void setAge(int age);
};


#endif //SPRING2018_PERSON_H
