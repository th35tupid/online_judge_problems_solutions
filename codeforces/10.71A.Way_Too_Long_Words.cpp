#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i;
    for(i=0; i<n; i++)
      {
	string str;
	cin >> str;
	int count=str.length();
	if(count>10)
	   {
	      int mid_count=count-2;
	      cout << str[0] << mid_count << str[count-1] << endl;
	   }
	else
	   {
	      cout << str<< endl;
	   }

      }

	return 0;
}
