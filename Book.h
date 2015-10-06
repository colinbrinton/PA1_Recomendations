#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book
{
  int isbn, year;
  string title, author;
  int generateIsbn();
  

 public:
  Book();
  Book(int isbn, int year, int title, int author);
  void loadFile(ifstream books) const;
  void saveFile(ofstream &books);
  void addBook(int isbn, int year, int title, int author);
};
#endif
