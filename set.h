/* 
 * File:   set.h
 * Author: rarce
 *
 * A Set class declarations.
 */

#ifndef SET_H
#define	SET_H
#include <iostream>
using namespace std;

typedef int ElementType ;
const int CAPACITY = 20;
class Set {
public:
    Set() {size=0;}
    
    // Adds and element to the set (if not already in the set)
    void addElement(ElementType);
    
    // Given an element will return its position if found, else returns -1
    int contains(ElementType) const;
    
    // Determines if the set is full
    bool full() const;
    
    // Given an element will remove it from the set
    void removeElement(ElementType);
    
    // Union between the invoking and the argument set. 
    // Modifies the invoking object.
    void Union(const Set&);
    
    // Intersection between the invoking and the argument set. 
    // Modifies the invoking object.
    void Intersection(const Set&);
    
    // A display function.
    void display(ostream&) const;
private:
    ElementType contents[CAPACITY];
    int size;
};

// overloading the << operator..
ostream& operator<< (ostream&, const Set &);

#endif	/* SET_H */

