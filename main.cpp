#include "Sort.h"


int main(){
std::vector<int> a = {1,5,7,4,3,2};
std::vector<std::string> b = {"banana", "apple", "carrot"};
  std::vector<double> c = {3.5, 3.7, 53.3, 6.3};
  vec_sort(c);
  vec_sort(a);
vec_sort(b);

  //FIXME: Does not print out all 3 types of vectors? 

  std::cout << "string b = " << b << std::endl;
  std::cout<< c << std::endl;

  std::cout << "string a = " << std::endl;
            std::cout << a;

  std::cout << "It made it this far" << std::endl;
  std::cout << "string b = " << b << std::endl;

  return 0;
}
