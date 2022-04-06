//
// Created by Maikol Guzman Alan on 4/4/22.
//
#include <cstdlib>
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

protected:
    /**
     * The Singleton's constructor should always be private to prevent direct
     * construction calls with the `new` operator.
     */
    SingletonDatabase();

public:
    /**
     * Singletons should not be cloneable.
     */
    SingletonDatabase(SingletonDatabase const &) = delete;
    /**
     * Singletons should not be assignable.
     */
    SingletonDatabase &operator=(SingletonDatabase const &) = delete;

    virtual ~SingletonDatabase();

    /**
     * This is the static method that controls the access to the singleton
     * instance. On the first run, it creates a singleton object and places it
     * into the static field. On subsequent runs, it returns the client existing
     * object stored in the static field.
     */
    static SingletonDatabase &getInstance();
    double getPrice(const string &name);
};


#endif //DP_CREATIONAL_SINGLETON_SINGLETONDATABASE_H
