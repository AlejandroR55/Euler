#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int j = 0;
  for(int i = 0; i < 1000; i++)
  {
    if(i % 3 == 0 || i % 5 == 0)
    {
      j += i;
    }
  }
  cout << j << endl;
  
  return 0;
}
