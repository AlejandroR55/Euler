#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
typedef long long num;

int main()
{ 
  num finish = 0;
  num forTest = 2520;
  for(forTest < 3040; forTest + 2;)
  {
    forTest += 1;
    if(forTest % 1 == 0 && forTest % 2 == 0 && forTest % 3 == 0 && forTest % 4 == 0 && forTest % 5 == 0 && forTest % 6 == 0 && forTest % 7 == 0 && forTest % 8 == 0 && forTest % 9 == 0 && forTest % 10 == 0 && forTest % 11 == 0 && forTest % 12 == 0 && forTest % 13 == 0 && forTest % 14 == 0 && forTest % 15 == 0 && forTest % 16 == 0 && forTest % 17 == 0 && forTest % 18 == 0 && forTest % 19 == 0 && forTest % 20 == 0)
    {
      cout << "THIS WORKS" << endl << forTest << endl;
    }
  }
  return 0; 
}
