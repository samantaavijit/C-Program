#include <iostream>
using namespace std;
int main()
{
  int n,i=0,j,a[100];
  cout<<"Enter the Decimal value ";
  cin>>n;
  while(n!=0)
  {
      a[i]=n%8;
      n=n/8;
      i++;
  }
  cout<<"Octal is ";
  for(j=i-1;j>=0;j--)
  {
      cout<<a[j];
  }
}
