#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> stockSpan(vector<int>& prices) {
    int n = prices.size();
    vector<int> span(n);
    stack<int> st;
    
    // First element always has span 1
    span[0] = 1;
    st.push(0);
    
    for(int i = 1; i < n; i++) {
        // Pop elements from stack while they are smaller than current price
        while(!st.empty() && prices[st.top()] <= prices[i]) {
            st.pop();
        }
        
        // If stack becomes empty, then price[i] is greater than all previous prices
        if(st.empty()) {
            span[i] = i + 1;
        } else {
            // Else price[i] is greater than elements after index at top of stack
            span[i] = i - st.top();
        }
        
        st.push(i);
    }
    
    return span;
}

int main(){
    vector<int> price = {100, 80, 60, 70, 60, 75, 85};
    
    cout << "Stock Prices: ";
    for(int p : price) {
        cout << p << " ";
    }
    cout << endl;
    
    vector<int> span = stockSpan(price);
    
    cout << "Stock Spans:  ";
    for(int s : span) {
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
}