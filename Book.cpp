#include <iostream>
#include "Book.h"

using namespace std;

void Book::setBookDetails(int bID,string bname,string aut){
       int bookID = bID;
       string bookName = bname;
       string author = aut;

}

void Book ::displayBookDetails(){
    cout << "BookID : " << bookID << endl << "Book Name : " << bookName << endl << "Author : " << author << endl << endl;
}

void Book ::setBookID(int i ){
    cout << "Input New Book ID : ";
    cin >> bookID;
}