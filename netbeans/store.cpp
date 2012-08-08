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
    //////////////// accessor functions for private data members
    getBarcode();
    setBarcode();

    getTitle();
    setTitle();

    getDirector();
    setDirector();

    getStarring();
    setStarring();

    getClassification();
    setClassification();

    getPublisher();
    setPublisher();

    getGenre();
    setGenre();

    getStatus();
    setStatus();
};
