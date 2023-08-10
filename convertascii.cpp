#include <iostream>
#include <algorithm>
#include <string.h>
#define ll long long 
using namespace std ;
int main()
{
	char c ;
	cin >> c ;
	int n = c ;
	if(n>=97)
		n = n-32 ;
	else 
	n = n+32 ;
	cout << (char)n <<endl ;
}
