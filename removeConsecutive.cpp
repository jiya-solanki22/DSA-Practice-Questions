#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
string removeConsecutive(string s)
{
	string str="";
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=s[i-1])
		{
			str+=s[i];
		}
		else
		{
			str=str;
		}
	}
	return str;
}
int main()
{
	string s="aabaa";
	cout<<removeConsecutive(s);
	return 0;
}
