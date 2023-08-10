	#include <iostream>
#include <algorithm>
	#define ll long long 
	using namespace std ;
	int main()
	{
		ll A,B,C, mx , mn ; 
		cin >> A >> B >> C ;
		mn = min({A,B,C}) ;
		mx = max({A,B,C}) ;
		cout << mn<<" "<<mx<<endl;
	}
