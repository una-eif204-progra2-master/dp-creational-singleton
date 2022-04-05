//
// Created by Maikol Guzman Alan on 3/16/22.
//
#include <ostream>
#include <stdexcept>
#include "SingletonDatabase.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA! (VIRTUAL)" << endl;
    cout << "Creation pattern - Singleton" << endl << endl;

    try {
        double price1 = SingletonDatabase::getInstance().getPrice("PS5 Game: Call of Duty");
        cout << "First Request [New Instance] [PS5 Game: Call of Duty]   Price : " << price1 << endl;

        double price2 = SingletonDatabase::getInstance().getPrice("PS5 Game: Fifa");
        cout << "Second Request [Same Instance] [PS5 Game: Fifa]         Price : " << price2 << endl;

        double price3 = SingletonDatabase::getInstance().getPrice("PS4 Game: Uncharted");
        cout << "Third Request [Same Instance] [PS4 Game: Uncharted]     Price : " << price3 << endl;

    } catch (exception& ex) {
        cerr << ex.what() << '\n' << std::endl;
    }

}