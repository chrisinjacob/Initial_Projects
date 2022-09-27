#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

int main() {

  cout << "Number of accounts: "
       << Account::getcount() << "\n";
       
  Account acctA{250, "AcctA"};
  cout << acctA.getName() << "\n"
       << acctA.getBalance() << "\n";
       
  cout << "Number of accounts: "
       << Account::getcount() << "\n"; 

  Account acctB{350, "AcctB"};
  cout << acctB.getName() << "\n"
       << acctB.getBalance() << "\n";
    
  cout << "Number of accounts: "
       << Account::getcount() << "\n";  
}