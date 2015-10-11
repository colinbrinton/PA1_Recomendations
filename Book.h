#ifndef BOOK_H
#define BOOK_H
#include <string>

using namespace std;

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

template
class DArray
{
 public:
  DArray();
  DArray(int size);
  DArray(const DArray &rhs);
  DArray &operator= (cosnt DArray &rhs);
  ~DArray();
  recommend &operator[] (int index);
  void add(const Recommend &obj);
  int getSize();
  void setSize(int size);
  void clear();
  void remove(int index);

private:
  Recommend *array;
  int size;
  int bitSize;

  const static int INTI_SIZE = 64;
  const static int SIZE_INCR = 2;
};

#endif
