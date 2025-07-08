#include<iostream>
using namespace std;
// expected output is 3*4 matrix 
// * * * *
// * * * *
// * * * *
   
int main(){
    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<4;j++){
        cout<<"* ";
    }
    cout << endl;
}
return 0;
}