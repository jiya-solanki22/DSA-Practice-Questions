#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
	string str="";
	for(int i=0;i<s.size();i++)
	{
		if(isalpha(s[i]))
		{
			str+=tolower(s[i]);
		}
		else if(isdigit(s[i]))
		{
			str+=s[i];
		}
	}
	string rev=str;
	reverse(rev.begin(),rev.end());
	return rev==str;
}
int main()
{
	string s="";
	bool r=isPalindrome(s);
	if(r==1)
	cout<<"true";
	else
	cout<<"false";
	return 0;
}
