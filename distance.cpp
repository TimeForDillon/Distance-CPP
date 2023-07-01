#include "distance.h"

/*******************************************************************************
 * Constructor Distance: Class Distance
 *______________________________________________________________________________
 * This constructor sets feet and inches to default (0). returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Distance::Distance()
{
    feet = 0;       // CALC - sets feet to 0
    inches = 0;     // CALC - sets inches to 0
}

/*******************************************************************************
 * Constructor Distance: Class Distance
 *______________________________________________________________________________
 * This constructor sets feet and inches to input. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      unsigned ft: distance in feet
 *      double in  : distance in inches
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Distance::Distance(unsigned ft,     // IN - distance in feet
                   double in)       // IN - distance in inches
{
    feet = ft;      // CALC - sets feet to input
    inches = in;    // CALC - sets inches to input
    // init() - corrects negative distances and converts inches >= 12 to feet
    init();
}

/*******************************************************************************
 * Constructor Distance: Class Distance
 *______________________________________________________________________________
 * This constructor sets inches to input and feet to 0. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      double in  : distance in inches
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

Distance::Distance(double in)       // IN - distance in inches
{
    feet = 0;       // CALC - sets feet to 0
    inches = in;    // CALC - sets inches to input
    // init() - corrects negative distances and converts inches >= 12 to feet
    init();
}

/*******************************************************************************
 * Method convertToInches: Class Distance
 *______________________________________________________________________________
 * This method converts feet to inches and adds to inches. returns double.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      double: inches
 ******************************************************************************/

double Distance::convertToInches() const
{
    // PROCESSING - converts feet to inches and adds to inches
    return ((feet * 12) + inches);
}

/*******************************************************************************
 * Method operator+: Class Distance
 *______________________________________________________________________________
 * This method overloads the + operator to add two distance objects. returns
 * distance object.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const Distance &obj: distance object
 *
 * POST-CONDITIONS
 *      const Distance     : returned sum of two objects
 ******************************************************************************/

const Distance Distance::operator+(const Distance &obj) const // IN - dist obj
{
    // PROCESSING - returns the sum of both objects inches
    // convertToInches() - converts feet to inches and adds to inches
    return Distance(convertToInches() + obj.convertToInches());
}

/*******************************************************************************
 * Method operator-: Class Distance
 *______________________________________________________________________________
 * This method overloads the - operator to subtract two distance objects.
 * returns distance object.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      const Distance &obj: distance object
 *
 * POST-CONDITIONS
 *      const Distance     : returned difference of two objects
 ******************************************************************************/

const Distance Distance::operator-(const Distance &obj) const // IN - dist obj
{
    // PROCESSING - returns the difference of both objects inches
    // convertToInches() - converts feet to inches and adds to inches
    return Distance(convertToInches() - obj.convertToInches());
}

/*******************************************************************************
 * Method display: Class Distance
 *______________________________________________________________________________
 * This method prints out distance in correct format. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

void Distance::display()const
{
    // OUTPUT - outputs distance in proper format
    cout << feet << "' " << inches << "\"";
}

/*******************************************************************************
 * Method init: Class Distance
 *______________________________________________________________________________
 * This method corrects negative measurements and converts inches to feet.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

void Distance::init()
{
    // PROCESSING - make negative measure positive
    if(inches < 0) inches *= -1;

    // PROCESSING - convert inches to feet.
    while(inches >= 12)
    {
        inches -= 12;
        feet += 1;
    }
}
