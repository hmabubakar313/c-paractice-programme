#include <iostream>
using namespace std;
int main ()
{
  int n,sum=0;
  cout<<"enter number you want to sum";
  cin>>n;
  for (int i=0;i<=n;i++)
  {
    sum=sum+i;
  }
cout<<"sum of number is "<<sum;
return 0;
}
