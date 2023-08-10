	#include <iostream>
	#include <algorithm>
	#include <string.h>
	#define ll long long 
	using namespace std ;
	int main()
	{
		ll a,b,c,d ,mul = 1ll, fin;
		cin>>a>>b>>c>>d;
		a = a%100 ;
		b = b%100 ;
		c = c%100 ;
		d = d%100 ;
		mul = a*b*c*d*1ll ;
		fin = mul ;
		if(fin%100 >=0 && fin%100 <=9)
			cout <<"0"<<fin%100 <<endl;
		else
		cout << fin%100 << endl ;
	}
