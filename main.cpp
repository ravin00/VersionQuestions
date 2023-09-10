#include <iostream>
#include <cstring>
#include <iomanip>
#include "Student.h"
#include "Student.cpp"

using namespace std;

int main (){

    Student s1,s2,s3,s4;

    s1.setStudentDetails(1234,"Kamal");
    s1.setmarksOOC(85);
    s1.setmarksSPM(80);
    s1.setmarksISDM(75);

    s2.setStudentDetails(4567,"Saman");
    s2.setmarksOOC(65);
    s2.setmarksSPM(50);
    s2.setmarksISDM(45);

    s3.setStudentDetails(7891,"Nimal");
    s3.setmarksOOC(98);
    s3.setmarksSPM(75);
    s3.setmarksISDM(80);

    s4.setStudentDetails(1212,"Nimal");
    s4.setmarksOOC(35);
    s4.setmarksSPM(60);
    s4.setmarksISDM(40);


    double avgOOC;
    double avgSPM;
    double avgISDM;

    avgOOC = (s1.getmarksOOC() + s2.getmarksOOC() + s3.getmarksOOC() + s4.getmarksOOC()) / 4.0;

    cout << "Average OOC Mark : "<< setprecision(4) << avgOOC << endl;

    avgSPM = (s1.getmarksSPM() + s2.getmarksSPM() + s3.getmarksSPM() + s4.getmarksSPM())/4.0;

    cout << "Average SPM Mark : "<< setprecision(4) << avgSPM << endl;

    avgISDM = (s1.getmarksISDM() + s2.getmarksISDM() + s3.getmarksISDM() + s4.getmarksISDM())/4.0;

    cout << "Average ISDM Mark : " << setprecision(4) << avgISDM << endl;


    return 0;
}