#include <iostream>
using namespace std;
void doubleFunc(int a){
    cout<<2*a<<endl;
}
void refdouble(int a){
    cout<<2*a<<endl;
}
int main() {
    int a=10;
    doubleFunc(10);// call by value
    refdouble(a);// call by reference
    return 0;
}