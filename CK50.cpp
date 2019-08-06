#include <iostream>
using namespace std;

int main()
{
  int num;
  int flag = 1;
  
  cin >> num;
  
  while(num)
  {
    if(num %2 != 0 && num != 1)
    {
      flag = 0;
      break;
    }
    num /= 2;
  }
  
  ( flag == 1 ) ? cout << "yes" : cout << "no";
  
  return 0;
}
