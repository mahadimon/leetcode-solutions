/*
https://leetcode.com/problems/valid-parentheses/

Test Case-1:
"()[]{}"

Test Case-2:
"]"
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> checkStack;
        for(char& c: s){
            if( c == '(' || c == '{' || c == '['){
                checkStack.push(c);
            }else if(c==')'){
                if(!checkStack.empty() && checkStack.top() == '(')
                    checkStack.pop();
                else
                    return false;
            }else if(c == '}'){
                if(!checkStack.empty() && checkStack.top() == '{')
                    checkStack.pop();
                else
                    return false;
            }else if(c == ']'){
                if(!checkStack.empty() && checkStack.top() == '[')
                    checkStack.pop();
                else
                    return false;
            }
        }
        if(checkStack.empty())
            return true;
        return false;
    }
};