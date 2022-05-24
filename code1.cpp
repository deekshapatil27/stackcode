class MinStack {
public:
    stack<int> stck,minstack;
    void push(int val)
    {
    stck.push(val);
    if (minstack.empty() || val<=minstack.top())
    {
    minstack.push(val);
    }       
    }
    
    void pop()
    {  
    if (stck.top() == minstack.top())
    {
    minstack.pop();
    }
    stck.pop();
    }
     
    int top()
    {
    return stck.top();
    }
    
    int getMin()
    {
    return minstack.top();
    }

};
