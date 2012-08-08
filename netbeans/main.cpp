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

void readCust(fstream fin, vector customers);

int main(int argc, char** argv)
{
    fstream fin;
    vector<customer> customers;
    //vector<dvd> dvds;


    readCust(fin, customers);

    cout << customers.back().getCustomerID() << endl;

    return 0;
}

void readCust(fstream fin, vector customers)
{
    fin.open("customerDetails.txt");

    if(fin.good())
    {
        fin.getline(customers.push_back(customer.setCustomerID()));
    }

}