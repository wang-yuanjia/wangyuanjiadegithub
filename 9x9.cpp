#include<iostream>
using namespace std;
int main()
{
for(short i=1;i<=9;i++)
{
for(short j=1;j<=i;j++)
{
short k=i*j;
cout<<i<<"x"<<j<<"="<<k;
if(i!=j)
cout<<"    ";
}
cout<<endl;
}
return 0;
}
