//
// Created by tombr on 20/08/2017.
//

#ifndef SUNDAY_ROST_THROW_PERSON_H
#define SUNDAY_ROST_THROW_PERSON_H


class Person {
private:
    std::string first_name;
    std::string last_name;
    int arbitrary_number;

public:
    Person(std::string first, std::string last, int arbitraty);
    Person();
    ~Person();
    std::string Get_Name() { return first_name + " " + last_name; }
    int Get_Number() { return arbitrary_number; }
    int ratio();

};


#endif //SUNDAY_ROST_THROW_PERSON_H
