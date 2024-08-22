#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int , string> p;

    p = make_pair(1, "Hello");
    
    cout << p.first << " " << p.second << endl;

    // Tuples are the next version of pairs, it contain two or more than two variables....
    tuple<int, int , string> tp;

    tp = make_tuple(1, 2, "Tuple");

    cout << get<0>(tp) << " " << get<1> (tp) << " " << get<2> (tp) << endl;

    vector<pair<int, int>> vp;

    vp.push_back(make_pair(1, 2));
    vp.push_back(make_pair(8, 5));
    vp.push_back(make_pair(3, 5));
    vp.push_back(make_pair(7, 6));
    vp.push_back(make_pair(2, 2));

    sort(vp.begin(), vp.end());

    for(auto x : vp){
        cout << x.first << " " << x.second << endl;
    }
}