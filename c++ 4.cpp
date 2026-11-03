#include <iostream>
using namespace std;
class Rectangle{
    int length,breadth;
public:
Rectangle(){
    length=1;
    breadth=1;
}
Rectangle(int l){
    length=l;
    breadth=l;
}
Rectangle(int l,int b){
    length=l;
    breadth=b;
}
void area(){
    cout<<"Area="<<length*breadth<<endl;
}
};
int main(){
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4,6);
    r1.area();
    r2.area();
    r3.area();
    return 0;
}