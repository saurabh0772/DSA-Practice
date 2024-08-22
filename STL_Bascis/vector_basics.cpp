#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v = {1,2,3,4,44,5,5,6,66,6};

    int max_ele = *max_element(v.begin(), v.end());
    int min_ele = *min_element(v.begin(), v.end());

    cout << max_ele << " " << min_ele << endl;

    //sort in ascending order
    sort(v.begin(), v.end());

    // sort in descending order:
    // sort(v.rbegin(), v.rend());

    // erase an element from vector
    v.erase(v.begin() + 2);

    // remove all the duplicates from a vector:
    v.resize(unique(v.begin(), v.end()) - v.begin());

    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
}