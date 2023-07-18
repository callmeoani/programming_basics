// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <iostream>
#include <string>

//create an Account class with the withdraw and deposit and view acct info capabilities.


class Account {
        std::string name; //name of the account owner
        int id; //unique number of the account
        double balance; //current amount of money in the account
    public:
        //define the constructor
        Account (const std::string& account_name, const int& account_number, const double& account_balance):
            name(account_name), id(account_number),  balance(account_balance) {
                if(account_balance < 0){
                    std::cout<< "Initial balance cannot be less than zero";
                    balance = 0;
                }
        };

        //define the class methods
        void info(){
            std::cout<< '\n';
            std::cout<< "Account's info: \n";
            std::cout << " \n";

            std::cout << "-----------------\n";
            std::cout<<"Account Name: " << name << '\n';
            std::cout<<"Account Number: " << id << '\n';
            std::cout<<"Account Balance: " << balance << '\n';
            std::cout << "-----------------\n";
        }

        void deposit(const double& amt) {
            if(amt >= 0) {
                balance += amt;
            }
        };

        void withdraw(const double& amt) {
            std::cout<< '\n';
            if(balance - amt < 0 ) {
                std::cout << "Insufficient balance to carryout this transaction";
            }else{
                balance -=amt;
                std::cout << "Widthdrawal Successful!";
            }
        };


};

int main() {
    Account sampleAcct("Abdul", 01, 55);

    sampleAcct.info();
    sampleAcct.deposit(20);
    sampleAcct.deposit(10);
    sampleAcct.info();

    sampleAcct.withdraw(50);
    sampleAcct.info();

    sampleAcct.withdraw(1000);
    sampleAcct.info();







}






