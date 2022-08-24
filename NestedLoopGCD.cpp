#include<bits/stdc++.h>
using namespace std;


int gcd (int a, int b, int c)
{

  int maxi = 0;

  maxi = max(a, max(b, c));

  for(int i = maxi; i>1; i--)
  {
      if(( a%i == 0 ) and ( b%i == 0 ) and ( c%i == 0 ))
      {
          return i;
          break;
      }
  }

  return 1;
}


int main()
{

    int n,a,b,max1,max2,result,k;
    scanf("%d",&k);

    int i,j,m;
   long long int totalGCD=0;

for(i=1;i<=k;i++){
    for(j=1;j<=k;j++){
        for(m=1;m<=k;m++){
            totalGCD = totalGCD + gcd(i,j,m);
        }
    }
}

    cout<<totalGCD;
    return 0;
}
