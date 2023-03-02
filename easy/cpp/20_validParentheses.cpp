#include <string>;
#include <stack>;
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        /* MINE, could do better w runtime and complexity
        if(s.size() <= 1) return false;
        stack<char> stk;
        char last;
            
        for(char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                stk.push(c);
                last = c;
            }
            else if ((c == ')' && last == '(') || (c == '}' && last == '{') || (c == ']' && last == '['))
            {
                stk.pop();
                if(stk.empty()) last = 0;
                else last = stk.top();
            }
            else return false;
        }
        
        return stk.empty();
        */
        
        // After looking at comments, 100% faster
        if (s.length() == 1) return false;
        stack<char> stk;
        
        for(char c : s)
        {
            
            if (c == ')' || c == ']' || c == '}')
            {
                if(stk.empty()) return false;
                if((c == ')' && stk.top() != '(') || (c == ']'&& stk.top() != '[') || (c == '}'&& stk.top() != '{'))
                {
                    return false;
                }
                stk.pop();
            }
            else stk.push(c);
        }
        return stk.empty();
    }
};