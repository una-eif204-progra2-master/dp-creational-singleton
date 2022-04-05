//
// Created by Maikol Guzman Alan on 3/16/22.
//
#include <ostream>
#include <stdexcept>
#include "SingletonDatabase.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA! (VIRTUAL)\n" << std::endl;

    try {
        double price1 = SingletonDatabase::get().getPrice("PS5 Game: Call of Duty");
        cout << "First Request: " << price1 << endl;

        double price2 = SingletonDatabase::get().getPrice("PS5 Game: Fifa");
        cout << "First Request: " << price2 << endl;

    } catch (exception& ex) {
        cerr << ex.what() << '\n' << std::endl;
    }

}