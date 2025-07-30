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
auto func=[](int a,int b){
    ++a;
    ++b;
    cout<<"after: "<<a<<" "<<b<<endl;
};
int main(){
    int a=8;
    int b=10;
     cout<<"before: "<<a<<" "<<b<<endl;
    func(a,b);
     return 0;
}