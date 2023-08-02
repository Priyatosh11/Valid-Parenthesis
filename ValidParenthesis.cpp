class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
     for(int i=0; i<s.length(); i++) {
         
         char ch = s[i];
         
         //if opening bracket, stack push
         //if close bracket, stacktop check and pop
         
         if(ch == '(' || ch == '{' || ch == '['){
             s1.push(ch);
         }
         else
         {
             //for closing bracket
             if(!s1.empty()) {
                  char top = s1.top();
                  if( (ch == ')' && top == '(') || 
                     ( ch == '}' && top == '{') || 
                     (ch == ']' && top == '[') ) {
                      s1.pop();
                  }
                 else
                 {
                     return false;
                 }
             }
             else
             {
                 return false;
             } 
         }  
     }
    
    if(s1.empty())
        return true;
    else
        return false;     
    }
};
