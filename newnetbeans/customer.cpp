#include "customer.h"

customer::customer()
{
	customerID = 0;
}
// implementation of the getter functions for the class
int customer::getCustomerID()
{
    return customerID;
}

string customer::getPassword()
{
    return password;
}

string customer::getLastName()
{
    return lastName;
}

string customer::getFirstName()
{
    return firstName;
}

string customer::getPhoneNum()
{
    return phoneNum;
}

// implenemtation of the setter functions of the class

void customer::setCustomerID(int id)
{
    customerID = id;
}

void customer::setPassword(string pass)
{
    password = pass;
}

void customer::setLastName(string lname)
{
    lastName = lname;
}

void customer::setFirstName(string fname)
{
    firstName = fname;
}

void customer::setPhoneNum(string num)
{
    phoneNum = num;
}
