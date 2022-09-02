#include<bits/stdc++.h>
using namespace std;


 long long int test()
{

    long long int n;

    cin>>n;


    long long int i;

    long long int maxSeat=0;
    long long int containSeat=0;


     long long int a,b;
    for(i=1;i<n;i++){
        cin>>a>>b;

containSeat = containSeat+a-b;
maxSeat = max(maxSeat,containSeat);

    }
    return maxSeat;

}
int main()
{


    int t;

   cin>>t;

   int caseA=t;
    while(t--)
    {

         long long int ans = test();
        cout<<"Case "<<caseA-t<<": "<<ans<<endl;;

    }


    return 0;

}
