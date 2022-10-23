#include "Account.h"
class Savings : public Account{
  private:
  int times=0;
  public:
  Savings(char *des, float bal): Account(des,bal){
        description = des;
        balance= bal;}
  virtual bool withdraw(float amount){
    if (balance>=amount && times<=2){
    balance=balance-amount;
    times+=1;
    return true;}
    else return false;}
};