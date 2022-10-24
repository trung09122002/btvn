#include<bits/stdc++.h>
using namespace std;
void nhap(int &n)
{
	do
	{
		cout<<"\n nhap so luong n: ";
		cin>>n;
	}
	while(n<=3);
}
void nhapmang(int *a, int n)
{ int i;
	for(i=0;i<n;i++)
		{
			cout<<"a["<<i<<"]=";
			cin>>a[i];	
		}
}
void xuatmang(int *a, int n)
{ int i;
	cout<<"\nmang vua nhap la: ";
	for(i=0;i<n;i++)
		cout<<"\t"<<a[i];
}
void xoa(int *a, int n)
{	
	int k;
	do
	{
		cout<<"\nnhap vi tri can xoa: ";
		cin>>k;
	}while(k<0 || k>n);
	for(int i=0;i<n;i++)
	{
		if(i==k)
		{
			for(i=k;i<n;i++)
				a[i]=a[i+1];
			n--;
		}
	}
	cout<<"\nmang sau khi xoa vi tri "<<k<<": ";
	for(int i=0;i<n;i++)
		cout<<"\t"<<a[i];
}
main()
{
	int n,k,*a;
	nhap(n);
	a=new int[n];
	nhapmang(a,n);
	xuatmang(a,n);
	xoa(a,n);
	delete []a;
}
