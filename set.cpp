/* 
 * File:   set.cpp
 * Author: rarce
 * 
 * A Set class implementation.
 */

#include "set.h"

using namespace std;

bool Set::full() const{
    return (size == CAPACITY);
}

void Set::addElement(ElementType e){
    if (!full() && ( contains(e)==-1)) {
        contents[size] = e;
        size++;
    }
}

void Set::removeElement(ElementType e) {
    int pos = contains(e);
    if (pos >= 0) {
        for (int i=pos; i<size-1;i++) {
            contents[i] = contents[i+1];
        }
        size--;
    }
}

int Set::contains(ElementType e) const {
    for(int i=0; i<size; i++) {
        if (contents[i] == e) return i;
    }
    return -1;
}

void Set::Union(const Set &S1) {
    for (int i=0; i<S1.size; i++){
        addElement(S1.contents[i]);
    }
}

void Set::Intersection(const Set& S1) {
    int pos;
    for (int i = size - 1; i >= 0; i--) {
        pos = S1.contains(this->contents[i]);
        if (pos == -1) {
            for (int j = i; j < size - 1; j++) {
                contents[j] = contents[j + 1];
            }
            size--;
        }
    }
}

void Set::display(ostream& out) const{
    cout << "{ ";
    for(int i=0; i<size; i++)
        out << contents[i] << " ";
    cout << "} ";
}


ostream& operator<< (ostream& out, const Set &S){
    S.display(out);
    return out;
}
