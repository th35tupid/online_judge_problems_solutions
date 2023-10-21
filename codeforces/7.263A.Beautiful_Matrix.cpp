#include <iostream>
#include <cstdlib>
using namespace std;
int main()
	{
	    int arr[5][5];
	    int a, b, i, j;
	    for(i=0; i<5; i++)
		{
			for(j=0; j<5; j++)
				{
					cin >> arr[i][j];
	    		if(arr[i][j]==1) 
				{
					a=i+1; 
					b=j+1;
				}
			}
		}
	   cout << (abs(3-a)+abs(3-b)) << endl;

	return 0;
}
