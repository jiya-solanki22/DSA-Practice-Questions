#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string printSequence(string str[],string input)
{
	string output="";
	int n=input.length();
	for(int i=0;i<n;i++)
	{
		if(input[i]==' ')
		{
			output+="0";
		}
		else
		{
			int position=input[i]-'A';
			output+=str[position];
		}
	}
	return output;
	
}
int main()
{
	string a[]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
	string input="HELLO WORLD";
	cout<<printSequence(a,input);
	return 0;
}
