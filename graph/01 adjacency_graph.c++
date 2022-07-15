#include<bits/stdc++.h>
using namespace std;
void makegraph(vector<vector<int>>&S,int i ,int key)
{
    S[i].push_back(key);
    S[key].push_back(i);

}
void printgraph(vector<vector<int>>&S,int key)
{
    for(int i=0;i<key;i++)
    {
        for(int j = 0; j<S[i].size(); j++)
        {
            cout<<S[i][j]<<"\t";
        }
        cout<<endl;
    }

}
int main()
{
    int key=4;
    vector<vector<int>>S(key);
    makegraph(S,0,1);
    makegraph(S,0,2);
    makegraph(S,1,2);
    makegraph(S,2,3);
    printgraph(S,4);
}
