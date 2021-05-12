#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i=1,count=0,n;
	cin>>n;
	while(i<=sqrt(n))
	{
		if(n%i==0)
		{
		count=count+1;
	    }
	    i++;
	}
	cout<<count<<endl;
	if(count==1)
	{
		cout<<"prime";
	}
	else
	{
	     cout<<"not prime";		
	}
}






/*#include<iostream>
using namespace std;
int main()
{
	int i=1,count=0,n;
	cin>>n;
	while(i<=n)
	{
		if(n%i==0)
		{
		count=count+1;
	    }
	    i++;
	}
	cout<<count<<endl;
	if(count==2)
	{
		cout<<"prime";
	}
	else
	{
	     cout<<"not prime";		
	}
}*/







/*#include<iostream>
using namespace std;
int main()
{
	int i=1,count=0,n;
	cin>>n;
	while(i<=n/2)
	{
		if(n%i==0)
		{
		count=count+1;
	    }
	    i++;
	}
	cout<<count<<endl;
	if(count==1)
	{
		cout<<"prime";
	}
	else
	{
	     cout<<"not prime";		
	}
}*/





