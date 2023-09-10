#include <iostream>
#include "Lab.h"
#include "Lab.cpp"

using namespace std;

int main (){

    Lab l1,l2,l3;

    l1.setLabDetails(401,60);
    l2.setLabDetails(402,40);
    l3.setLabDetails(403,30);

    int capacity;

    cout << "Enter Capacity  : ";
    cin >> capacity;

    if (capacity <= l3.getCapacity()){
        cout << "Lab 403"<< endl;
    }

    else if (capacity <= l2.getCapacity()){
        cout << "Lab 402"<<endl;
    }

    else if (capacity <= l1.getCapacity()){

        cout << "Lab 401" <<endl;
    }

    else {

        cout << "Inavlid Input" << endl;
    }


    return 0;
}