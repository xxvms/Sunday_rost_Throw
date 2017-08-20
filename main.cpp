#include <iostream>
#include <vector>
#include "Person.h"
#include "Noise.h"

int main() {
    Noise n1("beep 1");
    try {
        std::vector<int> vector;
        vector.push_back(1);
        Noise n2("beep 2");
        Person John("John", "Snow", 0);

        int j = vector.at(99); // this does not exist we have only one item inside our verctor
    } catch (std::out_of_range& e){
        std::cout << " Out of range expection " << e.what();
    } catch (std::exception e){
        std::cout << e.what();

        std::cout << '\n';
    }


    return 0;
}