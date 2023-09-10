#pragma once 

class Student {

    private : int studentID;
              char studentName [20];
              int marksOOC;
              int marksSPM;
              int marksISDM;


    public : void setStudentDetails(int sID,const char sname[20]);
             void setmarksOOC(int marksOOC);
             int getmarksOOC();
             void setmarksSPM(int marksSPM);
             int getmarksSPM();
             void setmarksISDM(int marksISDM);
             int getmarksISDM();
};