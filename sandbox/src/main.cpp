#include <nutsack.h>
#include <iostream>

int utils::get_cube(int x){
  return utils::get_square(x)*x;
} 

int main(){
 
  int x = 3;
  utils::print_version();
  std::cout << utils::get_square(x) << std::endl; 
  std::cout << utils::get_cube(x) << std::endl; 


}
