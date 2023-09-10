#pragma once 

class Employee {

    private : int employeeID;
              char employeeName[20];
              int OTHours;
              int OTRate;

    public : void setEmployeeDetails(int emID,const char ename [20]);
             void displayEmployeeDetails();
             void setOTHours(int otH);
             void setOTRate(int otR);
             int calculateOTPayment();


};