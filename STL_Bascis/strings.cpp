#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "Hello";
    string s2 = "World";

    string s = s1 + s2;
    cout << s << endl; 

    //find is used to find the starting index of that particular search word...
    cout << s.find("ell") << endl;

    // replace is used to replace some part of the string
    // syntax starting index, length, word to be replaced
    s.replace(5, 5, " Saurabh");
    cout << s << endl;

    string sub = s.substr(0, 5);


    // all element of string into upper case or lower case
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;

    cout << sub << endl;
}