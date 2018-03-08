//
// Created by Will Smith on 3/8/18.
//

#include "Person.h"

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

Person::Person() {
    name = "none";
    age = 17;
}

Person::Person(const string &name, int age) : name(name), age(age) {}
