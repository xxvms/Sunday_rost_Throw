//
// Created by tombr on 20/08/2017.
//

#include <string>
#include "Person.h"
#include "Noise.h"
#include <iostream>

int Person::ratio(){
    std::string full_name = Get_Name();
    int length_without_spaces = full_name.length() -1 ;
    return arbitrary_number / length_without_spaces;
}

Person::Person() : first_name(""), last_name(""), arbitrary_number(0)
{}
Person::Person(std::string first, std::string last, int arbitrary) : first_name(first), last_name(last), arbitrary_number(arbitrary) {
    Noise noisePerson("Speaking");
    if (arbitrary_number == 0){
        throw std::invalid_argument("Arbitrary number for Person can not be zero");
    }
}

Person::~Person() {

}
