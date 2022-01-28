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
      a[i]=m%16;
      m=m/16;
      i++;
  }
  cout<<"Binary to Hexa-Decimal is ";
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
