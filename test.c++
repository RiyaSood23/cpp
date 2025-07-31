#include<iostream>
using namespace std;
int swap(int *ptr1,int *ptr2){
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;
}
int main(){
    int a=10, b=20,c=30;
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;
    cout<<"Before swapping : "<<"a= "<<a<<" "<<"b= "<<b<<endl;
    swap(a,b);
    cout<<"After swapping : "<<"a= "<<a<<" "<<"b= "<<b<<endl;


}