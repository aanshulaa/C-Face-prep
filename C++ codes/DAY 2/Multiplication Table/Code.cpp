#include<iostream>
using namespace std;
int main()
{
   int i,n,m;
   cin >> n >> m;
   cout << "Enter n" << endl;
   cout << "Enter m" << endl;
   cout << "The multiplication table of " << n << " is"<< endl;
   for(i = 1; i <= m; i++)
   {
     cout << i << "*" << n << "=" << n * i << endl;
     
   }
  
}