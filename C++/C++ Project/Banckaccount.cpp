#include<bits/stdc++.h>

using namespace std;

class BankAccount
{
public:
    string account_holder;
    string address;
    int age;
    int account_number;
protected:
    int balance;
private:
    string password;

public:
    BankAccount(string account_holder,string address, int age, string password)
    {
        this->account_holder = account_holder;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number =rand()%1000000000;
        cout<<"Your account no is "<<this->account_number<<endl;
    }
};


void create_account()
{
    string account_holder,address,password;
    int age;
    cout<<"CREATE ACCOUNT"<<endl;
    cin>>account_holder>>address>>age>>password;
    BankAccount *myAccount = new BankAccount(account_holder,address,age,password);
}
int main()
{
    create_account();
    return 0;
}
