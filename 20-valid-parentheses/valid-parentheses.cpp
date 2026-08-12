class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {

            // Opening bracket -> push into stack
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            }

            // Closing bracket
            else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {

                // No opening bracket available
                if (st.empty()) {
                    return false;
                }

                // Check matching bracket
                if (s[i] == ')' && st.top() != '(') {
                    return false;
                }

                if (s[i] == ']' && st.top() != '[') {
                    return false;
                }

                if (s[i] == '}' && st.top() != '{') {
                    return false;
                }

                // Matching opening bracket found
                st.pop();
            }
        }

        // Valid only if no opening brackets are left
        return st.empty();
    }
};