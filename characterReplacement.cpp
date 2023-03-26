#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int characterReplacement(string str,int k)
{
	int maxCount=0,ans=0,j=0;
	int n=str.size();
	vector<int>count(26);
	for(int i=0;i<n;i++)
	{
		count[str[i]-'A']++;
		maxCount=max(maxCount,count[str[i]-'A']);
		while(j<=i && i-j+1-maxCount>k)
		{
			--count[str[j]-'A'];
			j++;
		}
		ans=max(ans,i-j+1);
	}
	return ans;
}

int main()
{
	string str="ABAB";
	int k=2;
	cout<<characterReplacement(str,k);
	return 0;
}
