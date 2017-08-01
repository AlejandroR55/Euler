#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
typedef long long num;

bool isPali(num n)
{
  
  num oneD = n % 10;
  num tenD = ((n % 100) - n % 10) / 10;
  num hunD = ((n % 1000) - (n % 100)) /100; 
  num thoD = ((n % 10000) - (n % 1000)) /1000;
  num tthD = ((n % 100000) - (n % 10000)) /10000; 
  num hthD = ((n % 1000000) - (n % 100000)) /100000; 
  
  if(oneD == hthD && tenD == tthD && hunD == thoD && hthD == 9 &! hthD == 0 )
  {
    
    return true;
  }
  
    return false;
}

int main()
{ 
  
  int product;
  
  for(int i = 900; i < 1000; i++)
  {
    
    for(int j = 900; j < 1000; j++)
    {
      
      product = j * i;
      
      if(isPali(product) == true)
      {
        cout << i << " x " << j << endl << "HERE IS A PALIDROME: " << product << endl << endl;
      }
    }
  }
}
