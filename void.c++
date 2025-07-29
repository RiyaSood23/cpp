#include <iostream>
using namespace std;
void print (double x){
    cout<<"double "<<x<<endl;
}
void print(float x){
    cout<<"float "<<x<<endl;
}
int main(){
    print(89.12378);
    print(1.2);
    return 0;
}