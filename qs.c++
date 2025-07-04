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
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
        cout << "Leap Year" << endl;
    } else {
        cout << "Not a Leap Year" << endl;
    }
 
    return 0;
}