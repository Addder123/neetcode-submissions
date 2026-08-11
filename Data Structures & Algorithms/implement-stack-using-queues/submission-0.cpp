class MyStack {
public:
    MyStack() {}
    queue<int> myStack1;
    queue<int> myStack2;   
    
    void push(int x) {
      myStack2.push(x);
      while(!myStack1.empty()){
        myStack2.push(myStack1.front());
        myStack1.pop();
      }
      swap(myStack1,myStack2);  
    }
    
    int pop() {
       int top = myStack1.front();
       myStack1.pop();
       return top;
    }
    
    int top() {
    return myStack1.front();    
    }
    
    bool empty() {
   return myStack1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */