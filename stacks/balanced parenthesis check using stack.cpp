#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool BalancedParenthesis(string str){
    int n = str.length();
    stack<char> s;
    for(int i=0; i<n; i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '[') s.push(str[i]);
        else if(str[i] == ')' || str[i] == '}' || str[i] == ']'){
            if(s.empty()) return false;
            else if(str[i] == ')' && s.top() != '(') return false;
            else if(str[i] == '}' && s.top() != '{') return false;
            else if(str[i] == ']' && s.top() != '[') return false;
            else s.pop();
        }
    }
    return (s.empty() ? true : false);
}


int main() {
    string s;
    cout<<"Enter a String(without spaces) to check balanced parenthesis:"<<endl;
    cin>>s;
    bool a = BalancedParenthesis(s);
    if(a) cout<<"Balanced";
    else cout<<"unbalanced";
	return 0;
}