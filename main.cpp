#include <iostream>
#include "Book.h"
#include "Book.cpp"

using namespace std;

int main (){

    Book b1,b2,b3;

b1.setBookDetails(1111,"Jane Eyer","Charlotte bronte");
b2.setBookDetails(1212,"Divergent","Veronica Roth");
b3.setBookDetails(1313,"Matilda","Roald Dahl");

    b1.setBookID(1);
    b2.setBookID(2);
    b3.setBookID(3);

    b1.displayBookDetails();
    b2.displayBookDetails();
    b3.displayBookDetails();
    

    return 0;
}