#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void PrintSubSets(int ind,int n,int a[],vector<int>&ds)
{
    if(ind==n)
    {
        for(auto it:ds)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
        return;
    }
    //pick logic
    if(ind<n)
    {
        ds.push_back(a[ind]);
        PrintSubSets(ind+1,n,a,ds);
        ds.pop_back();
    }
    //non pic logic
    PrintSubSets(ind+1,n,a,ds);
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>ans;
    PrintSubSets(0,n,a,ans);
	return 0;
}
