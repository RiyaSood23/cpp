#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    // odd even
    // if (n%2==0){
    //     cout<<"Even"<<endl;

    // }
    // else{
    //     cout<<"Odd"<<endl;
    // }
    // positive negative zero
    // if (n > 0) {
    //     cout << "Positive" << endl;
    // } else if (n < 0) {
    //     cout << "Negative" << endl;
    // } else {
    //     cout << "Zero" << endl;
    // }
    // leap year
    // if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
    //     cout << "Leap Year" << endl;
    // } else {
    //     cout << "Not a Leap Year" << endl;
    // }
   
        //  if (n>90 && n<=100){
        //     cout<<"A"<<endl;
        // }
        // else if (n>80 && n<=90){
        //     cout<<"B"<<endl;
        //  }
        //  else if (n>70 && n<=80){
        //     cout<<"C"<<endl;
        // }
        // else if (n<70){
        //     cout<<"Fail"<<endl;
        // }
        // int temp,p;
        // cin >> p;
        // temp = n;   
        // n = p;
        // p = temp;
        // cout << "Swapped values: " << n << " " << p << endl;
        int p;
        cin >>p;
        n=n-p;
        p=n+p;
        n=p-n;
        cout << "Swapped values: " << n << " " << p << endl;

    
    return 0;
}
