#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y;
	do
	{
		cout<<"nhap vao nam: ";cin>>y;
	}
	while(y<=0);
	if((y%4==0)&&(y%100!=0)||(y%400==0))
		cout<<"nam "<<y<<" la nam nhuan";
	else
		cout<<"nam "<<y<<" la nam khong nhuan";
return 0;
}
