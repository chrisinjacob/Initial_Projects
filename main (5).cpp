#include <iostream>
#include <string>
using namespace std;

class Account {
  public:
    Account (int b){
        setbalance (b);
    }
    void setbalance (int x){
        bal = x;
    } 
    int getbalance (){
        return bal;
    }
    
  private:
    int bal;
};

int main(){
    Account acctA (500);
    cout << acctA.getbalance() << endl;
    Account acctB (250);
    cout << acctB.getbalance();
}

