/* 
 * File:   client.cpp
 * Author: rarce
 *
 * Client for testing the Set class functions.
 */

#include <cstdlib>
#include "set.h"

using namespace std;


int main(int argc, char** argv) {
    Set S1, S2;
    cout << "Constructing a set by adding 5 8 9 10" << endl;
    S1.addElement(5);
    S1.addElement(8);
    S1.addElement(9);
    S1.addElement(10);
    cout << "S1 now contains:" <<  S1 << endl;

    
    cout << "Constructing a set by adding 1 9 4 5" << endl;
    S2.addElement(1);
    S2.addElement(9);
    S2.addElement(4);
    S2.addElement(5);
    cout << "S2 now contains: " << S2  << endl;
    
    //S1.Union(S2);
    //S1.display(cout); cout << endl;
 
    cout << "Intersecting S1 and S2 ... " << endl;
    S2.Intersection(S1);
    cout << "The result is: " << S2  << endl;
    
    return 0;
}

