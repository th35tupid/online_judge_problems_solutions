#include <iostream>
using namespace std;
int main()
	{
		int a, b;
		cin >> a >> b;
		int c=0;
		while(1)
			{	
				if(a > b)
					break;
				c++;
				a*=3;
				b*=2;

			}
		cout << c;



return 0;
}
