//pattern prinintg using numbers only 0 and 1:-
#include<iostream>
using namespace std;
int i,j,n=10;
int a=0,b=1;
int main()
{
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			a=0;
				b=1;
		}
		else
		{
				b=0;
				a=1;
		}
		for(j=1;j<i;j++)
		{  
			if(j%2==0)
			{
				cout<<a;
			}
			else
			{
				cout<<b;
			}
		}
		cout<<"\n";
	}
	
	
}
