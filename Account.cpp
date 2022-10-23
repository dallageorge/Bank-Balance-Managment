#include <iostream>
#include "Account.h"
using namespace std;
Account :: Account(char *des){
    description=des;
}
Account :: Account(char *des, float bal){
    description=des;
    balance= bal;
}
bool Account :: withdraw(float amount){
	if (balance-amount>=0){
    balance=balance-amount;
	return true;}
	else return false;
}
bool Account :: deposit(float amount){
	if (amount>=0){
    balance = balance+amount;
	return true;}
	else return false;
}
float Account :: getBalance(){
    return balance;
}
char * Account :: getDescription(){
    return description;
}
