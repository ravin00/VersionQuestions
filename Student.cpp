#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

void Student ::setStudentDetails(int sID,const char sname[20]){

    studentID = sID;
    strcpy(studentName,sname);
}

void Student ::setmarksOOC(int mOOC){
    marksOOC = mOOC;
}

int Student ::getmarksOOC(){

    return marksOOC;
}


void Student ::setmarksSPM(int mSPM){
    marksSPM = mSPM;
}

int Student ::getmarksSPM(){
    return marksSPM;
}

void Student::setmarksISDM(int mISDM){

    marksISDM = mISDM;

}

int Student ::getmarksISDM(){

    return marksISDM;
}

