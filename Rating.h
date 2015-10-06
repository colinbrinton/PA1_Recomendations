#ifndef RATING_H
#define RATING_H
#include <string>

class Rating
{
  string book, member;
  int rating;

 public:
  Rating();
  Rating(string member, string book, int rating);
  void setRating(string member, string book, int rating);
  int getRating(string member, string book) const;
  void displayRatings(string member) const;
  void loadFile(ifstream ratings) const;
  void saveFile(ofstream &books);
};
#endif
 
  
