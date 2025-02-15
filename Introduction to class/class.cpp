//AUTHOR:MOSES WACHIRA
//ASSIGNMENT:INTRODUCTION TO CLASS
//REG NO : BSE-05-0193/2024

#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
public:// public access specifier
string name;
int balance;

void withdraw(int amount)
{
    balance= balance - amount;
}

};



int main()
{
  // BankAccount account1;
  // account1.name="Musaaah";
  // account1.balance=5000;
//cout<< account1.name << "has"  <<  account1.balance <<  "shillings"<<endl;

BankAccount account2;
account2.name="Brayo";
account2.balance=6788;

cout << account2.name << "has" << account2.balance << "shillings"<<endl;
account2.withdraw(100);
cout << account2.name << "has" << account2.balance << "shillings"<<endl;


    return 0;
}

