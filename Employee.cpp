#include <iostream>
#include <cstring>
#include "Employee.h"

using namespace std;

void Employee ::setEmployeeDetails(int emID,const char ename [20]){

    employeeID = emID;
    strcpy(employeeName,ename);
}

void Employee ::setOTHours(int otH){
    OTHours = otH;
}

void Employee ::setOTRate(int otR){

    OTRate = otR;
}

int Employee::calculateOTPayment(){

    return OTHours * OTRate;
}

void Employee ::displayEmployeeDetails(){

    cout << "Employee ID : " << employeeID << endl<< "Employee Name : " << employeeName << endl << " OTRate : " << OTRate << endl << " OTHours : " << OTHours << endl << endl;

}