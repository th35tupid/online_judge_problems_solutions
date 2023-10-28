#include <iostream>
using namespace std;


int main()
	{
		long long arr[4];
		int i, j;
		int c=0;
		
		for(i=0; i < 4 ; i++)
			{
				cin >> arr[i];
			}
		for(i=0; i < 3; i++)
			{
				for(j=i+1; j < 4; j++)
					{
						if(arr[i]==arr[j])
							c++;
					}
			}
		int a =(c==0)?0:(c==1)?1:(c==6)?3:2;
		cout << a << endl;




	return 0;
	}
