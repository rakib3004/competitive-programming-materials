#include<bits/stdc++.h>
using namespace std;


void test()
{

    int a,b,c;


       cin>>a>>b>>c;


       /*

    • 1+2*3=7

    • 1*(2+3)=5

    • 1* 2 *3=6

    • (1+2)*3=9


       */

       int cal1,cal2,cal3,cal4;

       cal1=a+b*c;
       cal2=a*(b+c);
       cal3=a*b*c;
       cal4=(a+b)*c;

       int maximum = max(cal1,cal2);

       maximum = max(maximum,cal3);
        maximum = max(maximum,cal4);



            cout<<maximum<<endl;

    return;

}
int main()
{


    int t;

  t=1;
    while(t--)
    {

        test();

    }


    return 0;

}
