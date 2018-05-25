// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
//Bubble Sort Cpp file

#include<iostream>

#include "Bubble_Sort.h"

void Bubble_Sort::SortIt(int unsortedNum[]) {
  int i = 0;
  //the all of the ints in the text file
  for(int i = 0; i <= 51; i++) {
    //if the first number is bigger than the one next to it
    if (unsortedNum[i] > unsortedNum[i+1]) {
      //swap those numbers
      std::swap(unsortedNum[i], unsortedNum[i+1]);
      //incremenet and compare the next two
      i++;
    }
  }
};
