#include <iostream>
using namespace std;

int main() 
{
  int a = 0, b = 1, i = 2, n, c;
  cin >> n;
  while ( i < n){
    c = a + b;
    a = b;
    b = c;
    i++;
  } 
  cout << c;
}
  

