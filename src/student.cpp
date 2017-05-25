//============================================================================
// Name        : student.cpp
// Author      : shawn murray
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


class Student {

public:
    // Declaring the necessary variables
    string name;
    int numClasses;
    string classList[10];

    // constructor


    void setName(string n) {
        name = n;
    }

    void setNumClasses(int c) {
        numClasses = c;
    }

    void SetClassList(string l[]) {
      //  classList = l;
    }


    // The next three methods gets name, numClasses & classList
    string getName() {
        return name;
    }

    int getNumClasses() {
        return numClasses;
    }

    string getClassList() {
        return classList[9];
    }


    // function to reset the class list to zero
    void resetToZero() {

        string enterAgain;

        if (enterAgain == "n" || enterAgain == "N") {
            cout << "Program ended";

        }
    }


    // function to get the users input & determine if they want to continue
public:
    void userInput() {

        string enterAgain;

        do {

        cout << "Enter the students name: " << endl;
        cin >> name;

        cout << "Enter the number of classes the student is enrolled in: " << endl;
        cin >> numClasses;

        for (int i = 0; i < numClasses; i++) {
        	cout << "Enter the class list: " << endl;
        	cin >> classList[i];
        }

        cout << "Would you like to enter again (y for yes): " << endl;
        cin >> enterAgain;

        } while (enterAgain == "Y" || enterAgain == "y");

    }


    // function to display the name and class list
    void userOutput() {

        cout << "Student's name: " << name << endl;
        cout << "The student " << name << " is taking these classes: " << classList << endl;

    }

}; // End of student class


int main() {

	//Student().getName();
	Student().userInput();


	return 0;
}
