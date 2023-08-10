#include <iostream>
#include <algorithm>
using namespace std ;
int main()
{
	int w ; 
	cin >> w ;
	int x = w/2 ;
	if(w==1 || w == 2)
		cout<<"NO"<<endl ;
	else if(w%2==0)
		cout << "YES" << endl ;
	else 
		cout << "NO" << endl ;
}
