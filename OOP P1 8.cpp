#include<iostream>
using namespace std;
int main()
{
	int n,i,j,f;
	float ans = 0;
	cout<<"Enter Limit : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=1;
		for(j=1;j<=i;j++)
		    f = f*j;
		ans = ans + (float)1/f;
	}
	cout<<"Answer : "<<ans;
}
