//
// Created by Maikol Guzman Alan on 4/4/22.
//
#include <stdlib.h>
#include <ostream>
#include <sstream>
#include <map>
#include <string>
#include <iostream>
#include <fstream>

#ifndef DP_CREATIONAL_SINGLETON_SINGLETONDATABASE_H
#define DP_CREATIONAL_SINGLETON_SINGLETONDATABASE_H

using namespace std;

class SingletonDatabase {
private:
    map<string, double> products;
    SingletonDatabase();

public:
    SingletonDatabase(SingletonDatabase const &) = delete;
    SingletonDatabase &operator=(SingletonDatabase const &) = delete;

    static SingletonDatabase &get();
    double getPrice(const string &name);
};


#endif //DP_CREATIONAL_SINGLETON_SINGLETONDATABASE_H
