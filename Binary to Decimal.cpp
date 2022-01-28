#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n, i = 0, j, a[100], m = 0;
  cout << "Enter the Binary value ";
  cin >> n;
  while (n != 0)
  {
    a[i] = n % 10;
    n = n / 10;
    i++;
  }
  cout << "Decimal is ";
  for (j = i - 1; j >= 0; j--)
  {
    m = m + (a[j] * pow(2, j));
  }
  cout << m;
}
