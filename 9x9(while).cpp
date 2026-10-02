#include<iostream>
using namespace std;
int main()
{
int i=1;
int j=1;
while (i<=9)
{
j=1;
while (j<=i)
{
cout<<i<<"x"<<j<<"="<<i*j;
if (i!=j)
cout<<"    ";
else
{
cout<<endl;
}
j++;
}
i++;
}

return 0;
}
