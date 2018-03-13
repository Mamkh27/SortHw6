//
// Created by Manprit Heer on 3/13/18.
//

#ifndef SORT_SORT_H
#define SORT_SORT_H
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

template <typename T>
std::ostream& operator << (std::ostream& out, std::vector<T>& v){
  for (typename std::vector<T>::iterator it = v.begin(); it != v.end(); ++it) {
    out << " " << *it << std::endl;
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

#endif //SORT_SORT_H
