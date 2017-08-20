//
// Created by tombr on 20/08/2017.
//

#include <iostream>
#include "Noise.h"

Noise::Noise(std::string sim): Sound_I_Make(sim){
    std::cout << " Constructing Noise " << Sound_I_Make << '\n';
}

Noise::~Noise()  {
    std::cout << "Destructing noise" << Sound_I_Make << std::endl;

}
