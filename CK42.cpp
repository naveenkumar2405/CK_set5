#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  string str1, str2;
  cin >> str1 >> str2;

  (str1.length() > str2.length()) ? cout << str1 : cout << str2;
  return 0;
}
