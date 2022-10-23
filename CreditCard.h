#include "Account.h"
class CreditCard: public Account{
    private:
    float lim;
    public:
    CreditCard(char *des, float bal,float limi) : Account(des,bal){
        lim = limi;
        description = des;
        balance= bal;
    }
    virtual bool withdraw(float amount){
        if (balance+lim>=amount){
            balance = balance - amount;
            return true;
        }
        else return false;
    }
    
};