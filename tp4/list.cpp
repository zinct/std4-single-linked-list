//
//  list.cpp
//  tp4
//
//  Created by Indra Mahesa on 08/10/23.
//

#include <stdio.h>
#include <iostream>
#include "list.h"

using namespace std;

void createList_1302220067(List &L) {
    first(L) = NULL;
}

address allocate_1302220067(infotype x) {
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    
    return P;
}

void insertFirst_1302220067(List &L, address P) {
    next(P) = first(L);
    first(L) = P;
}

void printInfo_1302220067(List L) {
    address P = first(L);
    while (P != NULL) {
        cout << info(P) << ", ";
        P = next(P);
    }
    cout << endl;
}
