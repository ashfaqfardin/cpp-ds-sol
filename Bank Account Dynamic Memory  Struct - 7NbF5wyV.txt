#include <iostream>

using namespace std;

struct bankUser{
    string userName;
    string accountNumber;
    int balance;
};

void withdrawMoney(bankUser* user, int money){
    if(money < user->balance){
        user->balance -= money;
    }
    else{
        cout << "You do not have sufficient balance" << endl;
    }
}

void depositeMoney(bankUser* user, int money){
    user->balance +=money;
}

void checkCurrentBalance(bankUser* user){
    cout << user->balance << endl;
}

int main()
{
    bankUser* user = new bankUser;
    user->userName = "Mohammad";
    user->accountNumber = "123456789";
    user->balance = 1000;
    
    cout << "Current Balance: ";
    checkCurrentBalance(user);
    
    depositeMoney(user, 100);
    cout << "Balance after depositeMoney: ";
    checkCurrentBalance(user);
    
    withdrawMoney(user, 200);
    cout << "Balance after withdrawMoney: ";
    checkCurrentBalance(user);
    

    return 0;
}
