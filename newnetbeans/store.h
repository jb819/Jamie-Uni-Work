/* 
 * File:   store.h
 * Author: Jamie
 *
 * Created on 9 August 2012, 10:40 AM
 */

#ifndef STORE_H
#define	STORE_H

#include <string>

using namespace std;

class store
{
private: // private member variables of the class
    int barcode;
    string title;
    string director;
    string starring;
    string classification;
    string publisher;
    string genre;
    string status;
public: // functions of the class
    //////////////// accessors functions for private data members
    int getBarcode();
    void setBarcode(int);

    string getTitle();
    void setTitle(string);

    string getDirector();
    void setDirector(string);

    string getStarring();
    void setStarring(string);

    string getClassification();
    void setClassification(string);

    string getPublisher();
    void setPublisher(string);

    string getGenre();
    void setGenre(string);

    string getStatus();
    void setStatus(string);
};

#endif	/* STORE_H */

