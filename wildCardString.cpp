#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isMatch(string s, string p, int i, int j){
//If you have reached the end of the pattern and you also reached the end of the text, then it's a match. Else it's not. 
if (j == p.size())
    return (i == s.size());
//Whenever the text string is empty or we're at the end of the string, the 
//pattern string can only be matched if it equals '*" because the '*' can be 
//replaced by an empty string.
if (i == s.size())
{
    for (int k = j; k < p.size(); k++)
        if (p[k] != '*') return false;

    return true;
}
//If we have a same character or a '?' they simply match so move ahead in both pattern and text.
if ((p[j] == s[i]) || p[j] == '?')
{
    return isMatch(s,p, i + 1, j + 1);
}
if (p[j] == '*')
{
    return isMatch(s, p, i , j + 1) ||    //Ignore the pattern and match with next character in pattern
          isMatch(s, p, i+ 1, j);      //Match multiple characters in string with '*'
}
return false;
}

int main(){
    string s="geeksforgeeks";
    string p="ge?ks";
    if(isMatch(s,p,0,0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
