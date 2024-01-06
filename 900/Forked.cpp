/*  21UEC005_Aryaman_Singh   */
#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_set>
#define loopf for(ll i=0;i<n;i++)
#define A ios_base::sync_with_stdio(false);
#define R cin.tie(NULL);
#define Y cout.tie(NULL);
#define tcs ll T;cin>>T;while(T--)
#define ll long long int
#define vecas vector<ll> v; for(ll i=0;i<n;i++) {ll x; cin>>x; v.push_back(x);}
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif
    A R Y
    tcs
    {
        //Make a set of all the 8 possible neighbours of king and queen and count the number of common locations 
        int a,b;
        cin>>a>>b;
        int xk,yk;
        cin>>xk>>yk;
        int xq,yq;
        cin>>xq>>yq;
        set<pair<int,int>> s1;                        
        set<pair<int,int>> s2;
        vector<int> adj = {-1,1};
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                int x1=xk+adj[i]*a;
                int y1=yk+adj[j]*b;
                int x2=xq+adj[i]*a;
                int y2=yq+adj[j]*b;
                s1.insert({x1,y1});
                s2.insert({x2,y2});
            }
        } 
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                int x1=xk+adj[i]*b;
                int y1=yk+adj[j]*a;
                int x2=xq+adj[i]*b;
                int y2=yq+adj[j]*a;
                s1.insert({x1,y1});
                s2.insert({x2,y2});
            }
        } 
        int cnt=0;
        for(auto it:s1){
            if(s2.find({it.first,it.second}) != s2.end()){
                cnt++;
            }
        } 
        cout<<cnt<<endl;                      
    }
    return 0;
}