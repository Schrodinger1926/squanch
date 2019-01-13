#include "lib.h"
#include <iostream>

void utils::print_version(){
  std::cout << "MAJOR VERISON: 1.0" << std::endl;
  std::cout << "MAJOR VERISON: 0.1" << std::endl;
}


int utils::get_square(int n){
  return n*n;
}
