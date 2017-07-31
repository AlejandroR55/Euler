#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
typedef long long ll;

bool isPrime(ll n)
{
  for(int i = sqrt(n); i > 1; i--)
  {
    if(n % i == 0)
    {
      return false;
    }
  }
  
  return true;  
}

int main()
{ 
  for(int i = sqrt(600851475143); i > 1; i--)
  {
    if(600851475143 % i == 0 && isPrime(i))
    {
      cout << i << endl;
    }
  }
  
  return 0;
}
