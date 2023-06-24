#include<iostream>
 
using namespace std;
 
struct bankAccountUser
{
    string name;
    string accountNumber;
    int currentBalance;
 
    void withdrawMoney(int amount)
    {
        if(currentBalance > amount){
            currentBalance -= amount;    
        }
        else
            cout << "Not enough balance\n";
    }
    
    void depositeMoney(int amount)
    {
        currentBalance += amount;
    }
    
    void balanceCheck()
    {
        cout << "Current Balance: " << currentBalance << endl;
    }
};
 
 
int main()
{
    bankAccountUser *user = new bankAccountUser[10];
    
    user[0].name = "Ashfaq";
    user[0].accountNumber = "1234546546";
    user[0].currentBalance = 1000;
    // a.name = "Ashfaq";
    // a.accountNumber = "947329843";
    // a.currentBalance = 1000;
    
    user[0].withdrawMoney(10);
    user[0].depositeMoney(20);
    user[0].balanceCheck();
    //a.withdrawMoney(10);
    //a.depositeMoney(20);
    //a.balanceCheck();
    delete []user;
    
    return 0;
}
