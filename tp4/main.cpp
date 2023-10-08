//
//  main.cpp
//  tp4
//
//  Created by Indra Mahesa on 08/10/23.
//

#include <iostream>
#include "list.h"

using namespace std;

int main() {
    List L;
    int inputInt;
    address P;
    
    createList_1302220067(L);
    
    cout << "Masukan angka 1 yg akan di input ke list: ";
    cin >> inputInt;
    
    P = allocate_1302220067(inputInt);
    insertFirst_1302220067(L, P);
    printInfo_1302220067(L);
    
    
    
    cout << "Masukan angka 2 yg akan di input ke list: ";
    cin >> inputInt;
    
    P = allocate_1302220067(inputInt);
    insertFirst_1302220067(L, P);
    printInfo_1302220067(L);
    
    cout << "Masukan angka 3 yg akan di input ke list: ";
    cin >> inputInt;
    
    P = allocate_1302220067(inputInt);
    insertFirst_1302220067(L, P);
    printInfo_1302220067(L);
    
    return 0;
}
