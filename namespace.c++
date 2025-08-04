// #include <iostream>
// using namespace std;

// namespace MyMath{                     //declares the group : group is a collection of functions and variables
//     int add (int a, int b){
//         return a+b;
//     }
// }

// int main(){
//     int result=MyMath::add(2,3);
//     cout<<"The Result is "<<result;
// }
#include <iostream>
namespace Physics{
    float gravity(){
        return 9.8;
    }
}
int main(){
    float g = Physics::gravity();
    std::cout<<g;
    return 0;
}