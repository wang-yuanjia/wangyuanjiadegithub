#include<iostream>
using namespace std;
class MyClass
{
public:
void fun(int arr[],int len)
{
int minIndex=0;
for(int i=1;i < len;i++)
{
if(arr[i]<arr[minIndex])
{
minIndex=i;
}
}
int temp=arr[minIndex];
arr[minIndex]=arr[len-1];
arr[len-1]=temp;
}
};
int main()
{
int n;
char ch;
cin>>n;
cin>>ch;
int a[100];
for(int i = 0;i < n;i++)
{
cin>>a[i];
if(i!=n-1)
cin>>ch;
}
MyClass obj;
obj.fun(a,n);
for(int i = 0;i < n;i++)
{
if(i > 0)   cout <<",";
cout<<a[i];
}
cout<<endl;
return 0;
}
