#include <iostream>
using namespace std;
int main()
	{
		int a, b, c, d;
		cin >> a >> b >> c;
		int i;
		int total_cost=0;
		for(i=0; i< c; i++)
			{
				total_cost += a*(i+1);
			}
		if(total_cost>b)
			cout << total_cost-b << endl;
		else
			cout << 0 << endl;




return 0;
}
