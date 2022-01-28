#include <iostream>
using namespace std;
int main()
{
  int n,i=0,j,a[100];
  cout<<"Enter the Decimal value ";
  cin>>n;
  while(n!=0)
  {
      a[i]=n%16;
      n=n/16;
      i++;
  }
  cout<<"Hexa-Decimal is ";
  for(j=i-1;j>=0;j--)
  {
      if(a[j]==10)
      cout<<"A";
      else if(a[j]==11)
      cout<<"B";
      else if(a[j]==12)
      cout<<"C";
      else if(a[j]==13)
      cout<<"D";
      else if(a[j]==14)
      cout<<"E";
      else if(a[j]==15)
      cout<<"F";
      else
      cout<<a[j];
  }
}
