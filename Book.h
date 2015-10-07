#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book
{
  //Private Data Members
  int isbn, year;
  string title, author;

  //Generate a unique int for book ISBN
  int generateIsbn();
  

 public:
  //Constructors (Default and Initializing)
  Book();
  Book(int isbn, int year, string  title, string author);

  //Book File IO Functions
  void loadFile(ifstream books) const;
  void saveFile(ofstream &books);

  //Mutator Functions
  void addBook(int isbn, int year, int title, int author);
  void setIsbn(int isbn);
  void setYear(int year);
  void setTitle(string title);
  void setAuthor(string author);

  //Accessor Functions
  Book getBook(int isbn, int year, int title, int author) const;
  int getIsbn() const;
  int getYear() const;
  string getTitle() const;
  string getAuthor() const;
  
};
#endif
