#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int product(float d, float e){
    return d*e;
}
int avg(int a, int b, int c){
    return (a+b+c)/3;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    float d,e;
    cin>>d>>e;
    int add=  sum(a,b);
    cout<<add<<endl;
      float pro=  product(d,e);
    cout<<pro<<endl;
      int ag=  avg(a,b,c);
    cout<<ag<<endl;
}