#ifndef MEMBER_H
#define MEMBER_H
#include <string>

class Member
{
  //Private Data Members
  string name, account;
  bool login; //Holds login state

 public:

  //Constructors (Default and Initializing)
  Member();
  Member(string name, string account);

  //Mutator Functions
  void addMember(string name, string account);
  void setMemberName(string name);
  void setMemberAccount(string account);

    //Used to set login state
  void memberLogin();
  void memberLogout();

  //Accessor Functions
  void getMember() const;
  void getLogin() const;
  void displayAccount();
  
     //Function to quit program
  void quit();
};

#endif
