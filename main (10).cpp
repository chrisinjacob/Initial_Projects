#include "Checking.h"
#include "Savings.h"
#include "Retirement.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  Retirement person1 {"James", 500, 'T' };
  Account *acctptr;
  Retirement *retptr;
  acctptr = &person1;
  retptr = &person1;
  acctptr->accountinfo();
  retptr->accountinfo();
}
