#ifndef RATING_H
#define RATING_H
#include <string>

class Rating
{
  //Private Data Members
  string  member;
  int isbn, rating;

 public:
  //Constructors (Default and Initializing)
  Rating();
  Rating(string member, int isbn, int rating);

  //Mutator Functions
  void setRating(string member, int isbn, int rating);

  //Accessor Functions
  int getRating(string member, int isbn) const;
  void displayRatings(string member) const;
  
      //Return an array of ISBN's of recomended books
  int* getRecomendations(string member) const;

  //Rating File IO Functions
  void loadFile(ifstream ratings) const;
  void saveFile(ofstream &books);
};
#endif
 
  
