#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
bool compare(pair<int,int>p1, pair<int,int>p2)
{
    double pperw1= (double) p1.first/p1.second;
    double pperw2= (double) p2.first/p2.second;
    return pperw1>pperw2;
}
int main(){
    int n;
    cout<<"number of items: ";
    cin>>n;
    cout<<"enter the weight and profit of items:\n";
vector<pair<int,int>> items(n);
for (int i = 0; i < n; i++)
{
    cin>>items[i].first >> items[i].second;
}
int w;
cout<<"enter weight of sack: ";
cin>>w;
sort(items.begin(), items.end(), compare);
int ans=0;
for (int i = 0; i < n; i++)
{
    if(w>=items[i].second){
        ans+=items[i].first;
        w-=items[i].second;
        continue;
    }
    double pw= (double) items[i].first/items[i].second;
    ans+= pw * w;
    w=0;
    break;
}
cout<<ans;
return 0;
}