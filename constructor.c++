// // #include <iostream>
// // using namespace std;

// // class demo{
// //     public:
// //     int x;
// //     demo(int a){
// //         x=a;
// //     }
// // };

// // int main(){
// //     demo d1(10);
// //     cout<<d1.x<<endl;
// // }
// #include <iostream>
// #include <string>
// using namespace std;
// class demo {
//     public:
//     int x;
//     string str;
//     demo(string s) {
//         str = s;
//     }
// };
// int main() {
//     demo d1("Hello");
//     cout << "Value of str: " << d1.str << endl;
//     return 0;
// }
#include <iostream>
using namespace std;
class point{
    private:
    int x, y;
    public:
    point(int a, int b): x(a), y(b) {
        std :: cout << "point initiated with x: " << x << " and y: " << y << endl;
    }
};
int main(){
    point p1(3,4);
    return 0;
}