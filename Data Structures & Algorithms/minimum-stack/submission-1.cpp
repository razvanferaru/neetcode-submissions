class MinStack {
private:
    int* values;
    int size;
    int capacity;
public:
    MinStack() : size(0), capacity(10000){
        values = new int[capacity];
    }
    
    void push(int val) {
        values[size] = val;
        size++;
    }
    
    void pop() {
        if(size > 0){
            values[size] = 0;
            size--;
        }
    }
    
    int top() {
        return values[size-1];
    }
    
    int getMin() {
        int min_value = INT_MAX;
        for(int i=0; i<size; ++i)
            min_value = min(min_value, values[i]);
        return min_value;
    }
};
