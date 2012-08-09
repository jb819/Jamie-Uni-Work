
#include "store.h"

// getter function implementation
int store::getBarcode()
{
    return barcode;
}

string store::getTitle()
{
    return title;
}

string store::getDirector()
{
    return director;
}

string store::getStarring()
{
    return starring;
}

string store::getClassification()
{
    return classification;
}

string store::getPublisher()
{
    return publisher;
}

string store::getGenre()
{
    return genre;
}

string store::getStatus()
{
    return status;
}

// now for the setter functions

void store::setBarcode(int bcode)
{
    barcode = bcode;
}

void store::setTitle(string titl)
{
    title = titl;
}

void store::setDirector(string dir)
{
    director = dir;
}

void store::setStarring(string star)
{
    starring = star;
}

void store::setClassification(string clas)
{
    classification = clas;
}

void store::setPublisher(string pub)
{
    publisher = pub;
}

void store::setGenre(string gen)
{
    genre = gen;
}

void store::setStatus(string stat)
{
    status = stat;
}