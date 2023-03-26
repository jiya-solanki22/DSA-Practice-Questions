#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s,string t)
{
	if(s.length()!=t.length())
	return false;
	
	sort(s.begin(),s.end());
	sort(t.begin(),t.end());
	return s==t;
}
int main()
{
	string s="rat";
	string t="car";
	bool ans=isAnagram(s,t);
	if(ans==1)
	cout<<"true";
	else
	cout<<"false";
	return 0;
}
