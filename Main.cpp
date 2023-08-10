// Create GradeBook object and invoke its determineClassAverage function.
// include definition of class GradeBook
#include "GradeBook.h"


int main()
{
	// create GradeBook object myGradeBook and
    // pass course name to constructor
	GradeBook myGradeBook( "CS101 C++ Programming" );
	
	myGradeBook.displayMessage(); // display welcome message
    myGradeBook.determineClassAverage(); // find average of 10 grades
    return 0; // indicate successful termination

}

