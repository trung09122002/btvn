#include<bits/stdc++.h>
using namespace std;
void nhap(int &x, int &n)
{
	do
	{
		cout<<"\nnhap n: ";cin>>n;
		cout<<"\nnhap x: ";cin>>x;
	}
	while(n<=0);
}
int gt(int n)
{
	if(n==1)
		return 1;
	else
		return n*gt(n-1);
}
float tong1(int x, int n)
{
	float s1=0;
	for(int i=1;i<=n;i++)
		s1=s1+(float)pow(x,i)/gt(i);
return s1;
}
float tong2(int x,int n)
{
	float s2=1;
	for(int i=1;i<=n;i++)
		s2=s2+(float)pow(x,2*i)/gt(2*i);
return s2;
}
float tong3(int x,int n)
{
	float s3=1;
	for(int i=0;i<=n;i++)
		s3=s3+(float)pow(x,2*i+1)/gt(2*i+1);
return s3;
}
int main()
{
	int x,n;
	nhap(x,n);
	cout<<"\nS1 bang "<<tong1(x,n);
	cout<<"\nS2 bang "<<tong2(x,n);
	cout<<"\nS3 bang "<<tong3(x,n);
return 0;
}
