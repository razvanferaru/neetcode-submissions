class MinStack {
private:
    stack<int>values;
public:
    MinStack() = default;
    
    void push(int val) {
        values.push(val);
    }
    
    void pop() {
        if(!values.empty()){
            values.pop();
        }
    }
    
    int top() {
        return values.top();
    }
    
    int getMin() {
        stack<int> copy = values;
        int min_value = INT_MAX;
        while(!copy.empty()){
            min_value = min(min_value, copy.top());
            copy.pop();
        }
        return min_value;
    }
};
