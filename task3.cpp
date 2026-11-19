#include<iostream>
using namespace std;
class BankAccount {
    private:
        string accountNumber;
        string accountHolderName;
        double balance;
    public:
        void setAccountNo(string a) {
            accountNumber = a;
        }
        void setAccountHolder(string n) {
            accountHolderName = n;
        }
        void setBal(double b) {
            balance = b;
        }
        string getAccountNo() {
            return accountNumber;
        }
        string getAccountHolder() {
            return accountHolderName;
        }
        double getBal() {
            return balance;
        }
        void displayAccountInfo() {
            cout << "Account Number:  " << getAccountNo() << endl;
            cout << "Account Holder:  " << getAccountHolder() << endl;
            cout << "Account Balance:  " << getBal() << endl;
        }

        void deposit(double amount) {
            if(amount>0) {
                balance += amount;
                cout << "Deposit Amount:  " << amount << endl;
                cout << "Updated Balance:  " << balance << endl;
            } else {
                cout << "Invalid Deposit Amount" << endl;
            }
        }

        void withdraw(double amount) {
            if(amount<=balance && amount>0) {
                balance -= amount;
                cout << "WithDraw Amount:  " << amount << endl;
                cout << "Updated Balance:  " << balance << endl;
            } else {
                cout << "Invalid Withdraw Amount" << endl;
            }
        }
};

class SavingsAccount : public BankAccount{
    private:
        double interestRate;
        double minimumBalance;

    public:
        void setInterest(double i) {
            interestRate = i;
        }
        void setMinimumBal(double m) {
            minimumBalance = m;
        }
        double getInterest() {
            return interestRate;
        }
        double getMinimumBal() {
            return minimumBalance;
        }
        
        void displaySavingsInfo() {
            displayAccountInfo();
            cout << "Interest Rate:  " << getInterest() << endl;
            cout << "Minimum Balance:  " << getMinimumBal() << endl;
        }
        void addInterest(int m) {
            if(m<=0) {
                cout << "Invalid Number of Months Entered" << endl;
            } else {
                
                double profit = getBal() *(interestRate/100.00) * (m/12.0);
                cout << "Invest Profit:  " << profit << endl;
                cout << "Previous Balance:  " << getBal() << endl;
                double cal = getBal() + profit;
                setBal(cal);
                cout << "Updated Balance:  " << getBal() << endl;
            }
        }
};
class CurrentAccount : public BankAccount {
    private:
        double overDraftLimit;
        double monthlyFee;
    public: 
        void setOverDraftLimit(double o) {
            overDraftLimit = o;
        }
        void setMonthlyFee(double m) {
            monthlyFee = m;
        }
        double getMonthlyFee() {
            return monthlyFee;
        }
        double getOverDraft() {
            return overDraftLimit;
        }
        void displayCurrentInfo() {
            displayAccountInfo();
            cout << "Over Draft Limit:  " << getOverDraft() << endl;
            cout << "Monthly Fee:  " << getMonthlyFee() << endl;
        }
        void applyMonthlyFee() {
            if(monthlyFee>0 && monthlyFee < getBal()) {
                double b = getBal() - monthlyFee;
                setBal(b);
                cout << "Updated Balance After Monthly Fee:  " << getBal() << endl;
            } else {
                cout << "Insufficient Balance or Invalid Monthly fee" << endl;
            }
        }
};
class FixedDepositAccount : public BankAccount {
    private: 
        int tenureMonths;
        string maturityDate;
        float interestRate;
    public: 
        void setTenureMonths(int t) {
            tenureMonths = t;
        } 
        void setMaturity(string d) {
            maturityDate = d;
        }
        void setInterestRate(double i) {
            interestRate = i;
        } 
        float getInterestRate() {
            return interestRate;
        }
        int getTenure() {
            return tenureMonths;
        }
        string getMaturity() {
            return maturityDate;
        }

        void displayFixedDepositInfo() {
            displayAccountInfo();
            cout << "Tenure Months:  " << getTenure() << endl;
            cout << "Maturity Date:  " << getMaturity() << endl;
        }
        double calculateMaturityAmount() {
            return (getBal() + (getBal()* (getInterestRate()/100.0)*tenureMonths/12.0));
        }
};
int main(){
    // cout<<"---BANK ACCOUNT OBJECT---"<< endl;
    // BankAccount b1;
    // b1.setAccountHolder("Muhammad Hussain");
    // b1.setAccountNo("3218706244");
    // b1.setBal(5000);
    // b1.displayAccountInfo();
    // b1.deposit(500);
    // b1.withdraw(200);
    // cout << endl;

    cout << "---SAVING ACCOUNT OBJECT---" << endl;
    SavingsAccount s1;
    s1.setInterest(9);
    s1.setMinimumBal(5000);
    s1.setAccountHolder("Ghazanfar");
    s1.setAccountNo("3002306705");
    s1.setBal(1000);
    s1.displaySavingsInfo();
    s1.deposit(800);
    s1.withdraw(250);
    s1.addInterest(24);
    cout << endl;

    cout << "---CURRENT ACCOUNT OBJECT---" << endl;
    CurrentAccount c1;
    c1.setAccountNo("9029931");
    c1.setAccountHolder("Asad(XHAKA)");
    c1.setBal(90000);
    c1.setMonthlyFee(800);
    c1.setOverDraftLimit(10000);
    c1.displayCurrentInfo();
    c1.applyMonthlyFee();
    c1.deposit(7000);
    c1.withdraw(50000);
    cout << endl;

    cout << "---FIXED DEPOSIT ACCOUNT---" << endl;
    FixedDepositAccount f1;
    f1.setAccountHolder("Bilal");
    f1.setAccountNo("9639021");
    f1.setBal(9421);
    f1.setInterestRate(10);
    f1.setMaturity("Adult");
    f1.setTenureMonths(10);
    f1.displayFixedDepositInfo();
    f1.deposit(100);
    f1.withdraw(800);
    
}