
//2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
//Add  constr. (2 constrs : first to accept all details )
//2.2 Add Business logic methods
//Methods
//public void withdraw(double amt) 
//public void deposit(double amt)
#include<iostream>
using namespace std;
class BankAc{
    private:
    int accno;
    string name;
    double balance;
    double amt;
    public:
    BankAc()
    {
        cout<<"---Default bankAc---"<<endl;
    accno=0;
    name="NA";
    balance=0;
    }
    BankAc(int accno,string name,double balance)
    {
        cout<<"----paramater bankAc---"<<endl;
        this->accno=accno;
        this->name=name;
        this->balance=balance;
    }
    void withdraw(double amt) 
    {
        cout<<" balance after withdrawing="<<balance-amt<<endl;

    }

    void deposit(double amt)
    {
        cout<<" balance after deposite="<<balance+amt<<endl;
    }

void display()
{
    cout<<"Account No.="<<accno<<"\nName="<<name<<"\nBalance="<<balance<<endl;
}

};

int main()
{
    BankAc B1(100,"Bhagyashri",80000);
    B1.display();
    B1.deposit(10000);
    B1.display();
}