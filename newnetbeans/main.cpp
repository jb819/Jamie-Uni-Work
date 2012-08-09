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

int main(int argc, char** argv)
{
    vector<customer> customers;
    //vector<dvd> dvds;


    readCust(customers);

    cout << "hello" << endl;
    //cout << customers.back().getCustomerID() << endl;

    
    return 0;
}

void readCust(vector<customer> customers)
{
    ifstream fin;
    fin.open("customerDetails.txt");
    
    int tempID;
    int tempNum;
    string tempPass;
    string tempLastName;
    string tempFirstName;
    customer tempCust;
    

    if(fin.good())
    {
        fin >> tempID;
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
    }
    else
        cout << "error";

}
