#include <iostream>
using namespace std;
class Student{
private:
    int rollNo;
    string name;
public:
//constructor
Student(int r,string n){
    rollNo=r;
    name=n;
    cout<<"Student object created"<<endl;
}
//Member Function
void display(){
    cout<<"Roll Number:"<<rollNo<<endl;
    cout<<"Name:"<<Name<<endl;
}
//Deconstructor
~Student(){
    cout<<"Student object destroyed"<<endl;
}
};
int main(){
    Student s1(101,"Arun");
    s1.display();
    return 0;
}