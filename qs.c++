// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     // odd even
//     // if (n%2==0){
//     //     cout<<"Even"<<endl;

//     // }
//     // else{
//     //     cout<<"Odd"<<endl;
//     // }
//     // positive negative zero
//     // if (n > 0) {
//     //     cout << "Positive" << endl;
//     // } else if (n < 0) {
//     //     cout << "Negative" << endl;
//     // } else {
//     //     cout << "Zero" << endl;
//     // }
//     // leap year
//     // if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
//     //     cout << "Leap Year" << endl;
//     // } else {
//     //     cout << "Not a Leap Year" << endl;
//     // }
   
//         //  if (n>90 && n<=100){
//         //     cout<<"A"<<endl;
//         // }
//         // else if (n>80 && n<=90){
//         //     cout<<"B"<<endl;
//         //  }
//         //  else if (n>70 && n<=80){
//         //     cout<<"C"<<endl;
//         // }
//         // else if (n<70){
//         //     cout<<"Fail"<<endl;
//         // }
//         // int temp,p;
//         // cin >> p;
//         // temp = n;   
//         // n = p;
//         // p = temp;
//         // cout << "Swapped values: " << n << " " << p << endl;
//         int p;
//         cin >>p;
//         n=n-p;
//         p=n+p;
//         n=p-n;
//         cout << "Swapped values: " << n << " " << p << endl;

    
//     return 0;
// }
//3x4 matrix
#include <iostream>
using namespace std;
int main(){
    int n, i,j;
    cin>>n;
    for(i =0;i<n-1;i++){
        for(j = 0; j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
//4x4 hollow square
#include <iostream>
using namespace std;
int main(){
    int n, i,j;
    cin>>n;
    for(i =0;i<n;i++){
        for(j = 0; j<n;j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
            cout<<"* ";
        }
        else{cout<<" ";}
    }
        cout<<endl;
    }
    return 0;
}
//right amnmgled triangle
#include <iostream>
using namespace std;
int main(){
    int n, i,j;
    cin>>n;
    for(i =1;i<=n;i++){
        for(j = 1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//inverted right angled triangle
#include <iostream>
using namespace std;
int main(){
    int n, i,j;
    cin>>n;
    for(i =n ;i >=1 ;i--){
        for(j = 1; j<=i;j++){
            cout<<"*";            
        } 
        cout<<endl;
    }
    return 0;
}