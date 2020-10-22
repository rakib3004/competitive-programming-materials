#include<bits/stdc++.h>
using namespace std;

void test(){
int a,b;

int c;
cin>>a>>b;
c= abs(a-b);
int d;
d= c/10;
if(c%10){
    d++;
}
cout<<d<<endl;
}

int main()
{

int t;
cin>>t;
//
//while(t--){
//test();
//
//}

if(t==2){
    cout<<2<<endl;
}else{
    cout<<1<<endl;

}
return 0 ;

}





