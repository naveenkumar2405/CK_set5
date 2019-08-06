#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int noOfElements;
  int min = INT_MAX, max = INT_MIN;

  cin >> noOfElements;

  while(noOfElements-- != 0)
  {
    int num;
    cin >> num;
    if (num > max) max = num;
    if (num < min) min = num;
  }

  cout << min << " " << max;

  return 0;
}
