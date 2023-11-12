#include <iostream>
using namespace std;


int main()
	{
		int n;
		cin >> n;
		int arr[n];
		int i;
		for(i=0; i<n; i++)
			{
				cin >> arr[i];
			}
		int a, b, c, d, min, max;
		int  min_count = 0; 
		int  max_count = 0;
		min = arr[0];
		max = arr[0];
		
		for(i=0; i<n; i++)
			{
				if(max < arr[i])
					{
						max = arr[i];
					}
				if(min > arr[i])
					{
						min = arr[i];
					}
			}

		for(i=0; i < n; i++)
			{
				if(arr[i]==max)
					{
						a=i;
						max_count++;
					}
				if(arr[i]==min)
					{
						b=i;
						min_count++;
					}
			}

		for(i=0; i < n; i++)
			{
				if(min_count > 1)
					{
						for(i=n-1; i>=0; i--)
							{
								if(i==min)
									b=i;
								break;
							}
					}				
			}

		for(i=0; i < n; i++)
			{
				if(max_count > 1)
					{
						for(i=0; i < n; i++)
							{
								if(i==max)
									a=i;
								break;
							}
					}
			}
		if(a!=0 || b!=n-1)
			{
				
			}	
		return 0;
	}
