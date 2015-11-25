/*
 * main.cpp
 *
 *  Created on: Nov 25, 2015
 *      Author: pavel
 */

#include <iostream>

#include "addressbook.pb.h"

using namespace std;

int main(int argc, char **argv) {
    try {
        cout << "Quality Beta" << endl;

        tutorial::Person person;

        person.set_name("Чувак");
        person.set_email("shnaiderpasha@gmail.com");

        cout << person.SerializeAsString() << endl;

    } catch (exception const& e) {
        cerr << e.what() << endl;
    }
}

