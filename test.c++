#include<iostream>
using namespace std;
void swap(int *ptr1,int *ptr2){
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;
}
int findLargest(int *ptr1, int *ptr2 , int *ptr3){
    if(*ptr1>*ptr2 && *ptr1>*ptr3){
        return *ptr1;
    }
    else if(*ptr2>*ptr1 && *ptr2>*ptr3){
        return *ptr2;
    }
    else{
        return *ptr3;
    }
}
int main(){
    int a=10, b=20,c=30;
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;
    cout<<"Before swapping : "<<"a= "<<a<<" "<<"b= "<<b<<endl;
    swap(&a,&b);
    cout<<"After swapping : "<<"a= "<<a<<" "<<"b= "<<b<<endl;
    //findLargest(a,b,c);
    int largest = findLargest(ptr1,ptr2,ptr3);
    cout<<"Largest number is: "<<largest<<endl;
    // int *ptr4=100;
    // int *ptr4= largest;
    cout<<"Largest no. now is: "<<*ptr4<<endl;
    return 0;
}