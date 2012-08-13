/* 
 * File:   main.cpp
 * Author: Jamie
 *
 * Created on 6 August 2012, 1:52 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>

#include "customer.h"


using namespace std;

void readCust(vector<customer>);

vector<customer> customers;

int main(int argc, char** argv)
{
    
    //vector<dvd> dvds;

    readCust(customers);

	cout << "afterreadfile" << endl;

	cout << customers.front().getCustomerID() << endl;

	system("PAUSE");
    
    return 0;
}

void readCust(vector<customer> customers)
{
    ifstream fin("customerDetails.txt");
    
    int tempID;
    string tempNum;
    string tempPass;
    string tempLastName;
    string tempFirstName;
    customer tempCust;
    
	if(fin.is_open())
	{
		while(fin.good())
		{
			fin >> tempID;

			fin.ignore(50, '\n'); // ignores the leftover newline from the fin statement before the getline statement

			getline(fin, tempPass);
			getline(fin, tempLastName);
			getline(fin, tempFirstName);

			fin >> tempNum;
			
			tempCust.setCustomerID(tempID);
			tempCust.setPassword(tempPass);
			tempCust.setLastName(tempLastName);
			tempCust.setFirstName(tempFirstName);
			tempCust.setPhoneNum(tempNum);
        
			customers.push_back(tempCust);

			cout << customers[0].getCustomerID() << endl;
		}
	}
}
