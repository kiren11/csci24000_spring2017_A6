// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
//Sort cpp file
//Sort Header file

#ifndef SORT
#define SORT

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>

class Sort {

public:

  int unsortedNum[];

  //pure virtual function
  virtual void SortIt(int unsortedNum[]) const = 0;

  // ~SortIt() = 0;
};

#endif //SORT
