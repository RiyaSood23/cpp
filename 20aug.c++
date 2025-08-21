#include<iostream>
using namespace std;
class Test{
    public:
    int x=10;
    private:
    int y=20;

}
int main(){
    Test t1;
    t1.x;
    t1.y;
    cout<<t1.x<<endl;
    cout<<t1.y<<endl;
    return 0;
}