
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,a,b,max1,max2,result;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);


   max1=n*a;
   max2=b;

    result = min(max1,max2);


    cout<<result;
    return 0;
}
