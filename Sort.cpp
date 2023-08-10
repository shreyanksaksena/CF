#include <iostream>
#include <algorithm>
using namespace std ;
int main()
{
	int a[3] , b[3];
	for(int i = 0 ; i < 3 ; i++)
	{
		cin>>a[i] ;
	}	
	for(int i = 0 ; i < 3 ; i++)
	{
		 b[i] = a[i] ;
	}
	sort(begin(b), end(b));
    for (int i : b)
    {
    	cout << i <<endl;
    }
    cout<<endl;
    for(int i = 0 ; i < 3 ; i++)
	{
		cout<<a[i]<<endl ;
	}	
	return 0 ;
}
