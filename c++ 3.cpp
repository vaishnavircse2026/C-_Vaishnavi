#include <iostream>
using namespace std;
namespace First{
    int num=10;
}
namespace Second{
    int num=20;
}
int main(){
    cout<<"First Number:"<<First::num<<endl;
    cout<<"Second Number:"<<Second::num<<endl;
    return 0;
}