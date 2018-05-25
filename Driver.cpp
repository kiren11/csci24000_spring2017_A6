// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
//Driver file

#include <iostream>

//header files
#include "Insertion_Sort.h"
#include "Bubble_Sort.h"

int main() {

  //for menu inputs
  int firstMenuAnswer;
  int secondMenuAnswer;

  //used to keep track of position in array, temp var
  int i = 0;

  //first menu
  std::cout<<("      /--------------------------------/")<<std::endl;
  std::cout<<("      |         ~ ASSIGNMENT 4 ~       |")<<std::endl;
  std::cout<<("      |  1. Load file                  |")<<std::endl;
  std::cout<<("      |  2. Exit Program               |")<<std::endl;
  std::cout<<("      /--------------------------------/")<<std::endl;

  //gets users selction, saves as answerf or first menu
  std::cout<< "Please enter your selection: " <<std::flush;
  std::cin>> firstMenuAnswer;

  //if input is number 1, text file will be loaded
  if (firstMenuAnswer== 1) {

    //int array to hold values read from file
    int unsortedNum[51];


    //input stream
    std::ifstream inFile;
    std::string currentLine;
    std::stringstream converter;
    std::stringstream ss;

    // Integer Variable
    int number;

    // String Variable
    std::string stringNumber;

      //open textfile
      inFile.open("data.txt");

      //counter for size of array
      int arrayLength = 50;

      //while there are lines in the file
      while(getline(inFile, currentLine)) {

            //clear stringstream, get line
              ss.clear();
              ss.str("");
              ss.str(currentLine);

            }
        //tokenzie and store in stringNumber
        while(getline(ss, stringNumber, ',')) {

          //add all tokenized strings to stringArray
          for (int i = 0; i <= 50; i++) {

            //clear stream
            //initialize as empty string
            converter.clear();
            converter.str("");

            //convert from string -> int
            converter << stringNumber;
            converter >> number;

            std::cout<<"Unsorted Array: "<<std::flush;
            std::cout<<number<<std::flush;
            std::cout<< "  " <<std::flush;

            i++;
            }
          }

        //close stream
        inFile.close();
        std::cout<<"   "<<std::endl;

    //second menu
    std::cout<<("      /--------------------------------/")<<std::endl;
    std::cout<<("      |         ~ ASSIGNMENT 4 ~       |")<<std::endl;
    std::cout<<("      |  1. Insertion Sort             |")<<std::endl;
    std::cout<<("      |  2. Bubble Sort                |")<<std::endl;
    std::cout<<("      |  3. Exit Program               |")<<std::endl;
    std::cout<<("      /-------------------------------/")<<std::endl;

    //gets selection for second menu
    std::cout<<"Please enter your selection: "<<std::flush;
    std::cin>> secondMenuAnswer;

    //decides which sorting mechanism to use based on user input
    if (secondMenuAnswer == 1) {
        Insertion_Sort* insertionsort = new Insertion_Sort(unsortedNum);
        insertionsort->SortIt(unsortedNum);
        delete insertionsort;

    } else if (secondMenuAnswer == 2) {
        Bubble_Sort* bubblesort = new Bubble_Sort(unsortedNum);
        bubblesort->SortIt(unsortedNum);
        delete bubblesort;

    } else if (secondMenuAnswer == 3) {
        //quit program
        std::cout<<"Goodbye!"<<std::endl;
        //break;
    }

  //if file does not exist, catch exception
   else   {
    std::cout<<"Unable to read file!"<<std::endl;
  }

  //used to quit program
} else if (firstMenuAnswer == 2 || secondMenuAnswer == 3) {
     //exit program
     std::cout<<"Goodbye!"<<std::endl;
     //break;
  }
}
