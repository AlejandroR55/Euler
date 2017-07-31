#include <iostream>
#include <fstream>

using namespace std;
typedef long long ll;

int main()
{
  /*
  int j = 0;
  for(int i = 0; i < 1000; i++)
  {
    if(i % 3 == 0 || i % 5 == 0)
    {
      j += i;
    }
  }
  cout << j << endl;
  */

  ll current = 1;
  ll previous = 1; 
  ll temp = 0;
  ll total = 0;
  
  while (current < 4000000)
  {
    temp = current;
    current = current + previous;
    previous = temp;
    
    if(current % 2 == 0)
    {
      total += current;
    }  
  }  
  
  cout << total << endl;  
      
  return 0;
}
