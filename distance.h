/*******************************************************************************
 * AUTHOR        : Dillon Welsh, Yang Zhang
 * ASSIGNMENT 3  : DATE CLASS
 * CLASS         : CS3A
 * SECTION       : 71206
 * DUE DATE      : 09/16/2020
 ******************************************************************************/

#ifndef DISTANCE_H
#define DISTANCE_H

#include <iostream>

using namespace std;

class Distance
{
private:
    unsigned feet;      // IN - measurement in feet
    double inches;      // IN - measurement in inches

public:
    /********************************
     ** CONSTRUCTORS & DESTRUCTORS **
     ********************************/
    Distance();                         // constructor
    Distance(unsigned ft, double in);   // constructor
    Distance(double in);                // constructor

    /***************
     ** ACCESSORS **
     ***************/

    double convertToInches() const;
    const Distance operator+(const Distance &obj) const;
    const Distance operator-(const Distance &obj) const;
    void display()const;

private:
    /***************
     ** ACCESSORS **
     ***************/
    void init();
};

/*******************************************************************************
 * Distance Class
 *  This class represents measurement in inches and feet. This will properly
 *  output the sum and difference of measurements in the appropriate unit.
 ******************************************************************************/

/********************************
 ** CONSTRUCTORS & DESTRUCTORS **
 ********************************/

/*******************************************************************************
 * Distance();
 * Constructor; Sets inches and feet to zero;
 * Parameters: none
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * Distance(unsigned, double);
 * Constructor; Sets inches and feet to user input values;
 * Parameters: unsigned, double
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * Distance(double);
 * Constructor; Sets inches to user input values and feet to 0;
 * Parameters: double
 * Return: none
 ******************************************************************************/

/***************
 ** ACCESSORS **
 ***************/

/*******************************************************************************
 * double convertToInches() const;
 *
 * Accessor; This will convert feet to inches
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: double
 ******************************************************************************/

/*******************************************************************************
 * const Distance operator+(const Distance &obj) const;
 *
 * Accessor; This operator overload will allow us to use the + sign to interact
 * with (add) two separate Distance objects
 * -----------------------------------------------------------------------------
 * Parameters: Distance object
 * -----------------------------------------------------------------------------
 * Return: Distance object
 ******************************************************************************/

/*******************************************************************************
 * const Distance operator-(const Distance &obj) const;
 *
 * Accessor; This operator overload will allow us to use the - sign to interact
 * with (subtract) two separate Distance objects
 * -----------------------------------------------------------------------------
 * Parameters: Distance object
 * -----------------------------------------------------------------------------
 * Return: Distance object
 ******************************************************************************/

/*******************************************************************************
 * void display()const;
 *
 * Accessor; This method prints out the measurement
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * void init();
 *
 * Accessor; This method converts negative measurements to positive and converts
 * inches to feet.
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: none
 ******************************************************************************/

#endif // DISTANCE_H
