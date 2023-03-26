#include<iostream>
#include<bits/stdc++.h>
#define NO 256
using namespace std;
string smallestWindow(string s,string t)
{
	int slen=s.length();
	int tlen=t.length();
	
	// check if string's length is less than T's
    // length. If yes then no such window can exist
	if(slen<tlen)
	{
		cout<<"No such window exists";
		return "";
	}
	int start=0,min_len=INT_MAX,start_index=-1;
	int s_count[NO]={0};
	int t_count[NO]={0};
	
	// store occurrence of characters of 't'
	for(int i=0;i<tlen;i++)
	{
		t_count[t[i]]++;
	}
	 // start traversing the string
    int count = 0;  // count of characters
	for(int i=0;i<slen;i++)
	{
		// count occurrence of characters of string
		s_count[s[i]]++;
		
		// If s's char matches with t's char
        // then increment count
		if(t_count[s[i]]!=0 && s_count[s[i]]<=t_count[s[i]])
		{
			count++;
		}
		
		// if all the characters are matched
		if(count==tlen)
		{
			//minimizng the current window
            //If the current window has a character which occured more number of times
            //than the character in T string, then remove starting chars
			while(s_count[s[start]]>t_count[s[start]] || t_count[s[start]]==0)
			{
				if(s_count[s[start]] > t_count[s[start]])
				{
					s_count[s[start]]--;
				}
				start++;
			}
			int len_win=i-start+1;
			if(min_len>len_win)
			{
				min_len=len_win;
				start_index=start;
			}
		}
	}
	if (start_index == -1)
    {
       cout << "No such window exists";
       return "";
    }
 
    // Return substring starting from start_index
    // and length min_len
    return s.substr(start_index, min_len);
}
int main()
{
    string s = "tutorial cup";
    string t = "oti";
  
    cout << "Smallest window is : "<< smallestWindow(s,t)<<endl;
    return 0;
}
