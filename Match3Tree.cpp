
#include<bits/stdc++.h>
using namespace std;

int main()
{

  long long int  capital =0;

  cin>>capital;
  long double  primary=100;

 long double rate = 1.01;

 long double ratio = (double)(capital/primary);

cout<<ceil((log10(ratio))/(log10(rate)))<<endl;

return 0;
}
