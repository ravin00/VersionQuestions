#pragma once 

class Book {
    private : int bookID;
           string bookName,author;
           


    public : void setBookDetails(int bID,string bookName,string author);
             void displayBookDetails();
             void setBookID(int i);
};