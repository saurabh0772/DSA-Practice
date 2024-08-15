#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> v = {{1,5},{2,3}, {4,9}, {5,2}};

    sort(v.begin(), v.end(), [](pair<int, int > a, pair<int, int> b){
        return a.first < b.first;
    });


    for(auto it: v){
        cout<<it.first<<" "<<it.second<<endl;
    }
}