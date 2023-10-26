#include <iostream>
#include <string>
using namespace std;
int main ()
{
      string str1;
      int i, j = 0, k, m, n, temp;
	  cin >> str1;
	  int size=str1.length();
      int str2[((size+1)/2)];
      for(i = 0; i < size; i++)
      {
          if((i % 2) == 0)
          {
              str2[j] = (((int) str1[i])-48);
              j++;
          }
      }
      for(m = 1; m < j; m++)
     {
          for(n = 0; n < j-1; n++)
         {
              if(str2[n] > str2[m])
              {
                  temp = str2[n];
                  str2[n] = str2[m];
                  str2[m] = temp;
              }
          }
      }
      for(k = 0; k < j; k++)
      {
          if(k == 0)
          {
              cout << str2[k];
          }
          else
          {
              cout << '+' << str2[k];
          }
      }
      	cout << endl;

      return 0;
}

