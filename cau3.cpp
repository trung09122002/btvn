#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int k=0;
	do
	{
		cout<<"nhap so can kiem tra: ";cin>>n;
	}
	while(n<=0);
	for(int i =1;i<=n;i++)
		if(n%i==0)
			k++;
	if(k==2)
		cout<<n<<" la so nguyen to";
	else
		cout<<n<<" khong la so nguyen to";
	return 0;		
}
