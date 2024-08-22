#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(3);

    cout << "The count of 4 is " << s.count(4) << endl;
    cout << "The count of 5 is " << s.count(5) << endl;

    // s.erase(3) ;

    //find function returns an iterator..
    // so it you want to check that the value exists or not then use it as
    if(s.find(3) != s.end()) cout << "present" << endl;
    else cout << "not " << endl;

    for(auto it: s) cout << it << " ";
    cout << endl;

    // ordered set takes O(logn)  times in insert , erase , cnt operation
    // whereas unordered set takes O(n) time in those...


    // Multiset:
    // It is same as set , but it can store multiple values..

    multiset<int > ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(4);

    cout << "The count of 3 is " << ms.count(3) << endl;

    ms.erase(3); // it will delete all occurences of 3 from multiset...

    for(auto it : ms) cout << it << " ";
    cout << endl;
}