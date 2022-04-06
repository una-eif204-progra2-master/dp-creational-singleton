//
// Created by Maikol Guzman Alan on 4/4/22.
//

#include "SingletonDatabase.h"

SingletonDatabase::SingletonDatabase() {
    clog << "constructed" << endl;

    // Create a text string, which is used to output the text file
    string productName;
    string sPrice;
    string FILENAME="../../database.txt";

    // Read from the text file
    ifstream myReadFile(FILENAME);

    if (!myReadFile.is_open()) {
        throw invalid_argument("Could not open the file [" + FILENAME + "]");
    }

    // Use a while loop together with the getline() function to readByLine the file line by line
    while (getline (myReadFile, productName)) {
        getline(myReadFile, sPrice);
        products[productName] = stod(sPrice); // Convert double from string
    }

    // Close the file
    myReadFile.close();
}

SingletonDatabase &SingletonDatabase::getInstance() {
    static SingletonDatabase singletonDatabase;
    return singletonDatabase;
}

double SingletonDatabase::getPrice(const string &name) {
    clog << "in use" << endl;
    return products[name];
}

SingletonDatabase::~SingletonDatabase() {
    clog << "destructed" << endl;
}
