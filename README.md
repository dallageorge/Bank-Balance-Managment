# Bank-Balance-Managment
A simple program for managing the balance of an account in a banking system. Basic functions supported are withdrawal and deposit of some amount.

Contains the following:
Account(char *description) and Account(char *description, float balance) to initialize objects with parameters.
bool withdraw(float amount) to withdraw the amount. 
bool deposit(float amount) for depositing the amount. 
Getters for the account balance and description.

A CreditCard class (derived from Account) to represent a credit card. The CreditCard has a LIMIT and allows overdrafts (so a negative balance will appear) up to the LIMIT amount.

A Savings class (derived from Account) which represents a savings account, which will only allow up to 3 withdrawals regardless of amount (as long as the balance is sufficient). Of course there is no limit on deposits.
