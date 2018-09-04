#include<iostream>
using namespace std;
int fib(int);
int main()
{
int n,res;
cout<<"enter the no of term in fibonacci series";
cin>>n;
cout<<"fibonacci series is:";
for(int i=0;i<n;i++)
{
res=fib(i);
cout<<res;
}

}
int fib(int n)
{
if(n==0)
{
return 0;
}
else if(n==1)
{
return 1;
}
else
return(fib(n-1)+fib(n-2));
}
