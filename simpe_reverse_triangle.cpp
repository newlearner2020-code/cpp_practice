#include<iostream>
using namespace std;
int i,j,x;
void setup(int n,char a)
{
	for(i=0;i<n;i++)
	{cout<<endl;
		for(j=0;j<=i;j++)
		
		{
			cout<<a;
		}
		cout<<endl;
	}
	
	
}


void reverse(int x, char b)
{
	for(i=x;i>=0;i--)
	{
		cout<<endl;
		for(j=0;j<i;j++)
		{
			cout<<b;
		}
		cout<<"\n";
	}
	
}

int main()
{  int n;   
cout<<"enter the count of star\n";
     cin>>n;
     x=n;
	cout<<"what you want to print on pattern";
	char z;
	cin>>z;
	setup(n,z);
	reverse(x,z);
	return 0;
}
