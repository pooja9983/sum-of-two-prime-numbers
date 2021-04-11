#include<iostream>
using namespace std;
bool prime (int n);
int main()
{ 
int n,i;
bool flag =false;
cout<<"enter the positive interger:";
cin>>n;
for (i=2;i<=n/2;++i)
{
if  (prime (i))
{
		if (prime(n-1))
{
cout << n <<" can be expressed as sum of "<<  i  << "and" <<  n-i;
flag =true;

}
	}
}

if (flag ==0)
cout<<n<<"can't be expressed as sum of two prime numbers";
return 0;
}
bool prime (int n)
{
int i;
bool prime =true;

{
for(i=2;i<=n/2;++i)
	{ 
	if (n%i==0)
	{
		prime =false;
		break;
	}
	}
	}
	return  prime;
}


