// #include<iostream>
// using namespace std;
// int sum(int n){
//     int sum=0;
//     while(n>0){
//     int rem=n%10;
//     sum=sum+rem;
//     n=n/10;}
//     return sum;

// }
// int main(){
//     int n;
//     cin>>n;
//     sum(n);
//     cout<<sum(n)<<endl;
//     return 0;

// // }
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==1 || n==0){
//         return 1;
//     }
//     else{
//         return(factorial (n-1)*n);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     factorial(n);
//     cout<<factorial(n)<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Rectangle {
//     int length;
//     int width;
// public:
//     Rectangle(int l, int w) {
//         length = l;
//         width = w;
//     }
//     int area() {
//         return length * width;
//     }
//     int perimeter() {
//         return 2 * (length + width);
//     }
// };

// int main() {
//     Rectangle r(5, 10);
//     cout << "area: " << r.area() << endl;
//     cout << "perimeter: " << r.perimeter() << endl;
//     return 0;
// }
// Q6. Bank Account Simulation Create a BankAccount class with:
// Data members: accountNo, balance.
// Functions: deposit(), withdraw(), display().
// Demonstrate transactions in main().

// #include <iostream>
// #include <string>
// using namespace std;
// class BankAccount {
//     public:
//     string accountNo;
//     double balance;
//     BankAccount(string accNo, double initialBalance) {
//         accountNo = accNo;
//         balance = initialBalance;
//     }
//     void deposit(double amount) {
//         if (amount > 0) {
//             balance += amount;
//             cout << "Deposited: " << amount << endl;
//         } else {
//             cout << "Deposit amount must be positive." << endl;
//         }
//     }
//     void withdraw(double amount) {
//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//             cout << "Withdrawn: " << amount << endl;
//         } else if (amount > balance) {
//             cout << "Insufficient balance for withdrawal." << endl;
//         } else {
//             cout << "Withdrawal amount must be positive." << endl;
//         }
//     }
//     void display() {
//         cout << "Account No: " << accountNo << endl;
//         cout << "Current Balance: " << balance << endl;
//     }
// };

// int main(){
//     BankAccount account("123456789", 1000.0);
//     account.display();
    
//     account.deposit(500.0);
//     account.display();
    
//     account.withdraw(200.0);
//     account.display();
    
//     account.withdraw(1500.0); // Attempt to withdraw more than balance
//     account.display();
    
//     return 0;
// }
#include <iostream>
using namespace std;
class student{
    char[50] name;
    int roll;
    int marksEnglish;
    int marksMaths;
    int marksScience;
    
};
int average(student){
    return (marksEnglish + marksMaths + marksScience) / 3;
}
int main() {
    
}