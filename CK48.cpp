#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0, avg, ind = 0;;

  cin >> n;

  while (ind++ != n)
  {
    int num;
    cin >> num;
    sum += num;
  }

  avg = sum / n;

  cout << avg;

  return 0;
}
