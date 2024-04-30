#include <iostream>
using namespace std;

int main() 
{
  int m, n, sum, prod;
  cin >> m >> n;
  for (int i = m; i <= n; i++)
  {
    if(i <= 99)
    {
      sum = i/10 + i%10;
      prod = (i/10) * (i%10);
      if(sum + prod == i)
      {
        cout<< i << endl;
      }
    }
 }
}
  

