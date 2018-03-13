#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

template <typename T>
std::ostream& operator << (std::ostream& out, std::vector<T> v){
  for (typename std::vector<T>::iterator it = v.begin(); it != v.end(); ++it)
{
out << *it << " " << std::endl;
}
}


template <typename T>
void vec_sort(std::vector<T> &v) {
  T temp;
  bool swap = true;
  while (swap) {
swap = false;
      for (int i = 0; i < (v.size() - 1); i++) {
        if (v[i] > v[i + 1]) {
          temp = v[i];
          v[i] = v[i + 1];
          v[i + 1] = temp;
          swap = true;
        }
      }
    }
  }

int main(){
std::vector<int> a = {1,5,7,4,3,2};
std::vector<std::string> b = {"apple", "banana", "carrot"};
vec_sort(a);
vec_sort(b);
  std::cout << "string a = " << std::endl;
            std::cout << a;
  std::cout << "It made it this far" << std::endl;
  std::cout << "string b = " << b << std::endl;

  return 0;
}
