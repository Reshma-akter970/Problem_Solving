#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b,c=0,result;

scanf("%lld %lld",&a,&b);
result=b;

for(long long int i=1;i<=a;i++)
{
result=result-(i-1);
if(result<0)
break;
c++;
}

cout<<c<<endl;
return 0;
}