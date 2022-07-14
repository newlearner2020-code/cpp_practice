#include<iostream>
using namespace std;
int i,j,k,x;
int triangle(int n,char y)
{
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			cout<<" ";
		}
	for(k=1;k<=2*i-1;k++)
		{
			cout<<y;	
		}
		
			cout<<"\n";
}
}
int main()
{ char g;
	cout<<"enter the count of pattern:-";
	cin>>x;
	cout<<"enter the pattern character:-";
	cin>>g;
	triangle(x,g);
 	return 0;	
}
