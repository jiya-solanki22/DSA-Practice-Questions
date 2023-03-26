#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
/*bool isValid(string s)
{
	stack<char>bracket;
	for (int i=0;i<s.size();i++) {
        switch (i) {
            case '(': bracket.push(i); break;
            case '{': bracket.push(i); break;
            case '[': bracket.push(i); break;
            case ')': if (bracket.empty() || bracket.top()!='(') return false; else bracket.pop(); break;
            case '}': if (bracket.empty() || bracket.top()!='{') return false; else bracket.pop(); break;
            case ']': if (bracket.empty() || bracket.top()!='[') return false; else bracket.pop(); break;
            default: ; 
        }
    }
    return bracket.empty() ;
}*/
stack<char> st;
        
        // using stack to solve this problem helps us to respect the relative placement of brackets
bool isValid(string s)
{       stack<char>st; 
        for(int i=0;i<s.length();i++) {
            char top = st.empty() ? '#' : st.top();
            
            if(top == '(' && s[i] == ')') {
                st.pop();
            }else if(top == '{' && s[i] == '}') {
                st.pop();
            }else if(top == '[' && s[i] == ']') {
                st.pop();
            }else{
                st.push(s[i]);
            }    
        }
        
        return st.empty();
}
int main()
{
    string s = "[[]{}]()";
    bool check = isValid(s);
    if(check){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
