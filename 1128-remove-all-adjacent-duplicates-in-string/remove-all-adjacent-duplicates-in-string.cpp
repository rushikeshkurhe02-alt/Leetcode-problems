
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            if (st.empty()) {
                st.push(s[i]);
            }
            else {
                if (st.top() == s[i]) {
                    st.pop();
                }
                else {
                    st.push(s[i]);
                }
            }
        }

        string ans(st.size(), ' ');

        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};

