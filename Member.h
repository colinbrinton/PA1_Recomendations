#ifndef MEMBER_H
#define MEMBER_H
#include <string>

class Member
{
  string name, account;
  bool login;

  void setLogin();
  
 public:
  Member();
  Member(string name, string account);
  void addMember(string name, string account);
  void getMember() const;
  void getLogin() const;
  void setMember(string name, string account);
  void memberLogin();
  void memberLogout();
  void displayAccount();
};

#endif
