/* 
 * File:   customer.h
 * Author: Jamie
 *
 * Created on 8 August 2012, 8:53 AM
 */

#ifndef CUSTOMER_H
#define	CUSTOMER_H

#include <string>

using namespace std;

class customer
{
private: // private member variables of the class are stored here
    int customerID;
    string password;
    string lastName;
    string firstName;
    string phoneNum; // ints do not like numbers with a leading 0

public: // functions of the class
	customer();
    //////////////// accessor functions for private data members
    int getCustomerID();
    void setCustomerID(int);

    string getPassword();
    void setPassword(string);

    string getLastName();
    void setLastName(string);

    string getFirstName();
    void setFirstName(string);

    string getPhoneNum();
    void setPhoneNum(string);

    ////////////////
};

#endif	/* CUSTOMER_H */

