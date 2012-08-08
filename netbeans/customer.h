/* 
 * File:   customer.h
 * Author: Jamie
 *
 * Created on 8 August 2012, 8:53 AM
 */

#ifndef CUSTOMER_H
#define	CUSTOMER_H

using namespace std;

class customer
{
private: // private member variables of the class are stored here
    int customerID;
    string password;
    string lastName;
    string firstName;
    int phoneNum;

public: // functions of the class
    //////////////// accessor functions for private data members
    int getCustomerID();
    void setCustomerID();

    string getPassword();
    void setPassword();

    string getLastName();
    void setLastName();

    string getFirstName();
    void setFirstName();

    int getPhoneNum();
    void setPhoneNum();

    ////////////////
};

#endif	/* CUSTOMER_H */

