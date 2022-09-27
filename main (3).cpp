#include <iostream>
#include <string>
#include "Account.h"

int main() {

  Account acctA{250, "AcctA"};
  
  Account* acctPtr;
  acctPtr = &acctA;
  
  std::cout << acctPtr->getName() << "\n";
  std::cout << acctPtr->getBalance() << "\n";

  acctA.setName("Chrisin");
  acctA.setBalance (10);

  std::cout << acctPtr->getName() << "\n";
  std::cout << acctPtr->getBalance() << "\n";
}