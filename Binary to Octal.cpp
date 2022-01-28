#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,i=0,j,a[100],m=0;
  cout<<"Enter the Binary value ";
  cin>>n;
  while(n!=0)
  {
      a[i]=n%10;
      n=n/10;
      i++;
  }
  for(j=i-1;j>=0;j--)
  {
      m=m+(a[j]*pow(2,j));
  }
  i=0;
  while(m!=0)
  {
      a[i]=m%8;
      m=m/8;
      i++;
  }
  cout<<"Octal is ";
  for(j=i-1;j>=0;j--)
  {
      cout<<a[j];
  }
}
