#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];//1 2 3
	}
	for(int num=0;num<(1<<n);num++)//0 1 2 3 4 5 6 7
	{
	    vector<int>ans;//[ ]
	    for(int i=0;i<n;i++)//0 1 2
	    {
	        //check that position contains one or not
	        if(num%(1<<i))
	        {
	            ans.push_back(a[i]);
	        }
	    }
	    for(auto it:ans)
	    {
	        cout<<it<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
