#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix)
{
    vector<int> v;
    int rs=0,re=matrix.size(),cs=0,ce=matrix[0].size();
    while (rs<re && cs<ce)
    {
        for(int i=cs;i<ce;i++)
        {
            v.push_back(matrix[rs][i]);
        }
        rs++;
        for(int i=rs;i<re;i++)
        {
            v.push_back(matrix[i][ce-1]);
        }
        ce--;
        if(rs<re)
        {
            for(int i=ce-1;i>=cs;i++)
            {
                v.push_back(matrix[re-1][i]);
            }
            re--;
        }
        if(cs<ce)
        {
            for(int i=re-1;i>=rs;i++)
            {
                v.push_back(matrix[i][cs]);
            }
            cs++;
        }
        cout<<matrix[0].size();
        return v;
    }
}
int main()
{
    vector<vector<int>>matrix{{1,2,3}, {4,5,6}, {7,8,9}};
    
	for (int x : spiralOrder(matrix)) {
        cout << x << " ";
    }
	return 0;
}
