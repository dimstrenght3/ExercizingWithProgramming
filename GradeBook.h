
 // Fig. 4.8: GradeBook.h
 // Definition of class GradeBook that determines a class average.
 // Member functions are defined in GradeBook.cpp
#include <string>
using std::string;


class GradeBook
{
	public:
		GradeBook( string ); // constructor initializes course name
		void setCourseName( string ); // function to set the course name
		string getCourseName(); // function to retrieve the course name
		void displayMessage(); // display a welcome message
		void determineClassAverage(); // averages grades entered by the user
	private:
		string courseName; // course name for this GradeBook
 }; // end class GradeBook
