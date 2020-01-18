#include<bits/stdc++.h>
using namespace std;

int main()
{
int l,r;
 
int mx=1e8;

cin>> l >>r;

int ct=0,a[100000001]={0};

a[0]=1;a[1]=1;

for(int i=2;i*i<mx;i++)
{
if(a[i]==0)
{
for(int j=i+1;j<mx;j+=i)
a[j]=1;
}

for(int i=l;i<=r;i++)
if(a[i]==0)
ct++;

cout<<ct;

return 0;




}