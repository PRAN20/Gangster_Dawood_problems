#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int num;
    cin>>num;
    
    while(num--)
    {
        int i,j,n;
        
        cin>>n;
        
        vector<int>v(n);
        
        for(i=0;i<n;i++)
            cin>>v[i];
        
        sort(v.begin(),v.end());
        
        if(n&1)
            cout<<v[n/2];
        else
            cout<<v[(n/2)-1];
        cout<<"\n";
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
