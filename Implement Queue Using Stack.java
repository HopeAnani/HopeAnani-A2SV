class MyQueue {
    List <Integer> L;
    public MyQueue() {
        L = new ArrayList<>();
    }
    
    public void push(int x) {
        L.add(x);
    }
    
    public int pop() {
        int x = L.get(0);
        L.remove(0);
        return x;
    }
    
    public int peek() {
        return L.get(0);
    }
    
    public boolean empty() {
        return L.isEmpty();
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */
