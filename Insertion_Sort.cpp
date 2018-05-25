// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
//Insertion Sort cpp file

#include<iostream>

#include "Insertion_Sort.h"

void Insertion_Sort::SortIt(int unsortedNum[]) {

      //variable used to compare places
  	 	int j;

      //temp variable used for swapping
      int temp;

    //will keep going til the end of the unsortedNum
  	for (int i = 0; i <= 51; i++){
  		  j = i;

  		while (j > 0 && unsortedNum[j] < unsortedNum[j-1]){
          //swap takes place
  			  temp = unsortedNum[j];
  			  unsortedNum[j] = unsortedNum[j-1];
  			  unsortedNum[j-1] = temp;
          //decrement j
  			  j--;

  			  }
  	}
};
