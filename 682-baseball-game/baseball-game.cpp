class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(int i = 0; i<operations.size(); i++){
        
            
                if(operations[i] == "C"){
                    st.pop();
                }
                else if(operations[i] == "D"){
                    st.push(2*st.top());
                }
                else if(operations[i] == "+"){
                    int n = st.top();
                    st.pop();
                    int sum = n + st.top();
                    st.push(n);
                    st.push(sum);
                }
                else{
                    st.push(stoi(operations[i]));
                }
            
        }
          int total = 0;
          int s = st.size();
          while(!st.empty()){
            total = total + st.top();
            st.pop();
          }
          return total;

    }
};