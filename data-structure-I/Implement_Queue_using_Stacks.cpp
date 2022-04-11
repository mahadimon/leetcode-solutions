/*
https://leetcode.com/problems/implement-queue-using-stacks/
Test Case-1:
["MyQueue", "push", "push", "peek", "pop", "empty"]
[[], [1], [2], [], [], []]

*/

class MyQueue {
private:
    stack<int> myStack, reserveStack;
public:
    int front;
    MyQueue() {
         
    }
    
    void push(int x) {
        if(myStack.empty())
            front = x;
        myStack.push(x);
    }
    
    int pop() {
        int popResult=0;
        while(!myStack.empty()){
            reserveStack.push(myStack.top());
            myStack.pop();
        }
        popResult = reserveStack.top();
        reserveStack.pop();
        while(!reserveStack.empty()){
            push(reserveStack.top());
            reserveStack.pop();
        }
        return popResult;
    }
    
    int peek() {
        if(!myStack.empty())
            return front;
        return -1;
    }
    
    bool empty() {
        if (myStack.empty())
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */