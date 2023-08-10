// Fig. 4.9: GradeBook.cpp
// Member-function definitions for class GradeBook that solves the
// class average program with counter-controlled repetition.
#include <iostream>
	using std::cout;
    using std::cin;
    using std::endl;
 	using std::string;
 	
#include "GradeBook.h" // include definition of class GradeBook

// constructor initializes courseName with string supplied as argument
GradeBook :: GradeBook (string name)
{
	setCourseName(name);
}

// function to set the course name;
// ensures that the course name has at most 25 characters
void GradeBook :: setCourseName(string name)
{
	if (name.length() <= 25)
	courseName = name;
	else 
	{
		courseName = name.substr (0,25);
		cout << "Name \"" << name << "\" exceeds maximum length (25).\n" 
		<< "Limiting courseName to first 25 characters.\n" << endl;
	}
	
}

// function to retrieve the course name
string GradeBook :: getCourseName()
{
	return courseName;
}

// display a welcome message to the GradeBook user
void GradeBook :: displayMessage()
{
	cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
    << endl;

}

// determine class average based on 10 grades entered by user
void GradeBook::determineClassAverage()
{
	int total;
	int gradeCounter;
	int grade;
	int average;
	
// initialization phase
	total=0;
	gradeCounter=1;
	
// processing phase
	while (gradeCounter < 10)
	{
		cout << "Enter Grade: ";
		cin >> grade;
		total = total+grade;
		gradeCounter = gradeCounter+1;
	}
	
// termination phase 
	average = total/10;
	
//display total and average of grades
	cout << "\nTotal of all 10 grades is " << total << endl;
	cout << "Class average is " << average << endl;

}
