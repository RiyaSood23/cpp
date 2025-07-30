// lambda function
#include <iostream>
using namespace std;

// int main(){
   
   
//     auto sayHello=[](){
//         cout<<"Hello";
//     };
//     sayHello();
// }
// we can either put the lambda fun in main or seperate and call it in mazin treat ir like a norml function
// auto func=[](int a,int b){
//     ++a;
//     ++b;
//     cout<<"after: "<<a<<" "<<b<<endl;
// };
// int main(){
//     int a=8;
//     int b=10;
//      cout<<"before: "<<a<<" "<<b<<endl;
//     func(a,b);
//      return 0;
// }
//pointer and reference are very similar 
// pointer stores address of variable
// reference denotes exact address
// auto add = [](int a, int b){
//     return a + b;
// };
// int main(){
//     cout<<add(2,3)<<endl; // call by value lmbda wit parameters
//     // for reference we use &
//     return 0;
// }
// to passs multiple arguments together we use [] this can call upto 10 together
// it sends a value to the lambda function
// it checks in surrounding 
// auto sum = [=] (){
//     cout<<a+b<<endl;
// };
// int main(){
//     int a=5;
//     int b=7;
//     sum(a,b);
// }

int main(){
    int a=10,b=15;
    auto sum = [=] (){
    ++a; 
    ++b;
    cout<<a<<" "<<b<<endl;
};
    
    inc();
    return 0;
}