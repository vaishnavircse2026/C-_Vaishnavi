#include <iostream>
#include <stack>
#include <queue>
#include <chrono>
using namespace std;
using namespace chrono;
template<class T>
class MyStack{
    private:
    T data[10000];
    int top;
    public:
    MyStack(){
        top=-1;
    }
    void push(T value){
        if(top<9999)
        data[++top]=value;
    }
    void pop(){
        if(top>=0)
        top--;
    }
};
template<class T>
class MyQueue{
    private:
    T data[10000];
    int front, rear;
    public:
    MyQueue(){
        front=0;
        rear=-1;
    }
    void enqueue(T value){
        if(rear<9999)
        data[++rear]=value;
    }
    void dequeue(){
        if(front<=rear)
        front++;
    }
};
int main(){
    const int N=10000;
    //Custom Stack Benchmark
    auto start=high_resolution_clock::now();
    MyStack<int>MyStack;
    for(int i=0;i<N;i++)
    MyStack.push(i);
    for(int i=0;i<N;i++)
    myStack.pop();
    auto end=high_resolution_clock::now();
    auto customStackTime=duration_cast<microseconds>(end-start);
    //STL Stack Benchmark
    start=high_resolution_clock::now();
    stack<int>stl
};