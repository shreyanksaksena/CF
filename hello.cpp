#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll A,B,C,lhs,rhs ;
    char S,Q ;
    cin >> A>>S>>B>>Q>>C ;
    if(S=='+')
        lhs = A+B;
    else if(S == '-')
        lhs = A-B ;
    else if(S == '*')
        lhs = A*B;
    rhs = C ;
    if(lhs==rhs)
        cout<<"Yes"<<endl ;
    else 
    cout <<lhs<<endl;
    return 0;
}
