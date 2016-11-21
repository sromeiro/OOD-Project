//Main test driver file
// Change to test github //

#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cstdlib>
#include<string>
#include<vector>
#include"Person.h"
#include"Student.h"
#include"Teacher.h"
#include"Undergrad.h"
#include"Grad.h"
#include"Department.h"
#include"Course.h"

using namespace std;

int main()
{
  char generalChoice;
  char studentChoice;
  vector <Person> universitySystem;
  cout << "Welcome user!" << endl;

//Some testing with reading from a file below. Uncomment if you want to test.

  string name;
  int var1;
  int var2;

  //Object of inputFileStream named inFile. Will handle file input.
  ifstream inFile;
  //Open the file
  inFile.open("Teachers.txt");

  //Check for errors when opening the file
  if(inFile.fail())
  {
    cerr << "Error while opening Teachers.txt" << endl;
    //Terminates the program unsuccesfully
    exit(1);
  }

  inFile.seekg(0l); //Positions file-position pointer at begining of file
  while(!inFile.eof()) //While not the end of file, loop.
  {
    //If statement that looks for the comma character. This was just a test.
    //Can be used with some math to separate items that we need from the text file
    if(inFile.get() == ',')
    {
      cout << "You got a comma" << endl;
    }
    else
    {
      //cout << "No comma was read" << endl;
    }
  }

  //close the file after done using
  inFile.close();


/* I tested the above to verify that I could read from a file and use a comma
*  as the separator between items that we're looking for. Example, comma
*  separates TeacherID,FullName,Age. In this order within the text file.
*  The code is commented out above and can be tested by just uncommenting it.
*  it works for the file I have included "Teachers.txt".
*/


/*
  do
  {
    // Prompting for and reading in user input for choice //
    cout << "\nPlease enter your selection:\n" << endl;
    cout << "~ Enter s to add a new student to the system.";
    cout << "~ Enter t to add a new teacher to the system.";
    cout << "~ Enter d to add a new department to the system.";
    cout << "~ Enter c to add a new course to the system.";
    cout << "\nOtherwise, please enter character to terminate the program.\n";
    cout << "\nYour selection: ";
    cin >> generalChoice;

    // Converting choice to lowercase //
    tolower(generalChoice);

    // Establishing a switch statement to account for all different options //
    switch (generalChoice)
    {
      // Case for student //
      case 's':

        cout << "\nYou have selected to add a new student! Please select what kind of student.";
        cout << "Enter u for undergraduate or g for graduate: ";
        cin >> studentChoice;



        break;

      // Case for teacher //
      case 't':

        break;

      // Case for department //
      case 'd':

        break;

      // Case for course //
      case 'c':

        break;

      // Case for termination //
      default:

        generalChoice = 0;
        break;
    }

  }
  while (generalChoice);
*/


  //succesfull program termination
  return 0;
}
