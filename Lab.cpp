#include <iostream>
#include "Lab.h"

using namespace std;

void Lab ::setLabDetails(int lID,int c){

    labID = lID;
    capacity = c;
}

int Lab ::getCapacity(){

    return capacity;
}