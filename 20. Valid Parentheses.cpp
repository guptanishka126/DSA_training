class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char,char> braces = {
            {')','('},
            {'}','{'},
            {']','['}
        };
        for(char c:s){
            if(braces.count(c)){
                if(stack.empty()||stack.top() != braces[c]){
                    return false;
                }
                stack.pop();
            } else{ 
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
