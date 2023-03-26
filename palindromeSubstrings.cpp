#include <iostream>
#include<string>
using namespace std;

bool isPalindromic(string s, int i, int j)
{   
    if (i > j)
        return 1;
 
    if (s[i] != s[j])
        return  0;
 
    return isPalindromic(s, i + 1, j - 1);
}

int main() {
    string str="abc";
    
    int count =0,n=str.size();
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(isPalindromic(str,i,j)){
                count++;
            }    
        }
    }
    cout<<count;
}
