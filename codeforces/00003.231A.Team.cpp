#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i , a, b, c, d;
	int count=0;
	for(i=0; i<n;i++)
	{
		cin >> a >> b >> c;
		d=a+b+c;
		if(d>1)
			count++;
	}
		cout << count << endl;

	return 0;
}
