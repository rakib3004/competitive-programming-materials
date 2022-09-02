#include<bits/stdc++.h>
using namespace std;


void test()
{

    int lineCount=0;


    int n;


    cin>>n;

    string lineArray;

    int distance[n]= {0}

                     cin>>lineArray;

    int i;

    for(i=0; i<n; i++)
    {
        if(lineArray[i]=='L')
        {
            d[i]=i;
        }
        else
        {
            d[i]=n-1-i;
        }

    }
    sort(distance,distance+n);


    for(i=0; i<n; i++)
    {


    } return;

}
int main()
{


    int t;

    cin>>t;
    while(t--)
    {

        test();

    }


    return 0;

}
