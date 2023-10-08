//
//  list.h
//  tp4
//
//  Created by Indra Mahesa on 08/10/23.
//

#ifndef list_h
#define list_h
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList_1302220067(List &L);

address allocate_1302220067(infotype x);

void insertFirst_1302220067(List &L, address P);

void printInfo_1302220067(List L);

#endif /* list_h */
