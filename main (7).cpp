#include <iostream>
#include <vector>
#include "Book.h"
#include "Library.h"
using namespace std;

int main() {
  Book bookA{"Hello", "C++", 2000};
  Book bookB{"Bye", "Python", 2020};
  Library libA {"Hillside Library", "Ms. Pauls", 50};

  libA.addbook(bookA);
  libA.addbook(bookB);

  cout << "Total number of books: " << libA.gettotbooks() << endl;

  libA.printbooks();
}
