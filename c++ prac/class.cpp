#include <iostream>
using namespace std;

class Account {
  private:
    double balance;

  public:
    void deposit(double amount) {
      balance += amount;
    }

    void withdraw(double amount) {
      balance -= amount;
    }

    double checkBalance() {
      return balance;
    }
};

int main() {
  Account myAccount;
  myAccount.deposit(1000);
  cout << "Current balance: " << myAccount.checkBalance() << endl;

  myAccount.withdraw(500);
  cout << "Current balance: " << myAccount.checkBalance() << endl;

  return 0;
}
