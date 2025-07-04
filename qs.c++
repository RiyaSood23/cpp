#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    // if (n%2==0){
    //     cout<<"Even"<<endl;

    // }
    // else{
    //     cout<<"Odd"<<endl;
    // }
    if (n > 0) {
        cout << "Positive" << endl;
    } else if (n < 0) {
        cout << "Negative" << endl;
    } else {
        cout << "Zero" << endl;
    }
    return 0;
}