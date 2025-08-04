#include <iostream>
using namespace std;

namespace MyMath{                     //declares the group : group is a collection of functions and variables
    int add (int a, int b){
        return a+b;
    }
}

int main(){
    int result=MyMath::add(2,3);
    cout<<"The Result is "<<result;
}