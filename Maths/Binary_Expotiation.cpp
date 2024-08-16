#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
    if(b == 0) return 1;

    int x = power(a, b/2);

    if(b % 2 == 0) return x * x;
    else return  x * x * a;
}

int main(){
    int a, b; cin >> a >> b;

    long long ans = power(a,b);

    cout << ans << endl;
}