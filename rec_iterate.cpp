#include<iostream>
using namespace std;
int gcd_iterative(int a,int b)
{
	int temp=0;
	while(b!=0)
	{
	    temp=a;
    	a=b;
	    b=temp%b;	
	}
    	return a;
}
int gcd_recursive(int a,int b)
{ 
  int gcd; 
  try{
    	if(a<0 || b<0)
    	{
		   throw 0;
	    }
	    else if (b==0)
	    {
	    	return a;
		}
		else
		{
			return gcd_recursive(b,a%b);
		}
    }
catch(int x)
{
	cout<<"cannot be calculated \n";

}
}
int fac_recursive(int a)
{
	if(a==0)
	{
		return 1;
	}
	else
	return a*fac_recursive(a-1);
}
int fac_iterative(int a)
{
	int f=1;
	if(a==0)
	   return 1;
	else
	   {
	   	for(a;a>0;a--)
	   	{
	   		f*=a;
		}
		return f;
	   }
}
int pow_iterative(int a,int b)
{
int temp;
temp=a;	
	try
	{
	if(b==0)
	  return 1;
	else if(a==0 ||a<0||b<0)
	  throw 0;
	else
	{
	  for(int i=1;i<=b-1;i++)
	  {
	  	a*=temp;
	  }
        return a;
    }
    }
    catch(int y)
   {
    	cout<<" cannot be done \n";
   }
}
int pow_recursive(int a,int b)
{
	int p=1;
	try
	{
	if(a==0||a<0 || b<0)
	  throw 0;
	else if (b==0)
	  return 1;
	else
	  return a*pow_recursive(a,b-1);    
    }
    catch(int x)
{
	cout<<" cannot be calculated \n";
}
}
int fib_recursive(int n)
{ 
   try
   {
   if(n<=0)
	  throw 0;
	else if(n==1)
	  return 0;
	else if(n==2 || n==3)
	  return 1;
	else 
	  return fib_recursive(n-1)+fib_recursive(n-2);      
   }
   catch(int z)
{
	cout<<"cannot be done";
}
}
int fib_iterative(int n)
{
	int x=0,y=1,z;
   try
   {
	if(n<=0)
	  throw 0;
	else if(n==1)
	  cout<<"0";
	else if(n==2||n==3)
	cout<<"1";
	else
	{ 
	while(n>2)
	{
		z=x+y;
		y=z;
		x=y;
		n--;
	}
	return z;
    }
	}
   catch (int z)
{
	cout<<"cannot be done";
}
}
int main()
{
	int ch,n1,n2,gcd1,gcd2,n3,n4,n5,n6,fac1,fac2,pow1,pow2,n7,n8,n9,n10,n11,n12,fib1,fib2;
	char choice;
		do
	{
	cout<<"1.gcd using iteration \n2.gcd using recursion \n";
	cout<<"3.factorial using iteration \n4.factorial using recursion \n";
	cout<<"5.power using iteration \n6.power using recursion \n";
	cout<<"7.fibonacci series using iteration \n8.fibonacci series using recursion \n";
	cout<<"enter your choice";
	cin>>ch;

	switch(ch)
	{
		case 1: cout<<"enter two numbers";
		         cin>>n1>>n2;
		         gcd1=gcd_iterative(n1,n2);
                 cout<<"gcd using iteration"<<gcd1;
				 break;		
				
		case 2: cout<<"enter two numbers";
		         cin>>n3>>n4;
		         gcd2=gcd_recursive(n3,n4);
                 cout<<"gcd using recursion"<<gcd2;
				 break;	
				 
	    
		case 3: cout<<"enter a number";
		         cin>>n5;
		         fac1=fac_iterative(n5);
                 cout<<"factorial using iteration"<<fac1;
				 break;		
				 
		case 4: cout<<"enter a number";
		         cin>>n6;
		         fac2=fac_recursive(n6);
                 cout<<"factorial using recursion"<<fac2;
				 break;
				 
		case 5: cout<<"enter two numbers";
		         cin>>n7>>n8;
		         pow1=pow_iterative(n7,n8);
                 cout<<"power using iteration"<<pow1;
				 break;	
				 
    	case 6: cout<<"enter two numbers";
		         cin>>n9>>n12;
		         pow2=pow_recursive(n9,n12);
                 cout<<"power using recursion"<<pow2;
				 break;		
				 
        case 7: cout<<"enter a number";
		         cin>>n11;
		         fib1=fib_iterative(n11);
                 cout<<"fibonacci using iteration"<<fib1;
				 break;					 			 
				 
	   case 8: cout<<"enter a number";
		         cin>>n10;
		         fib2=fib_recursive(n10);
                 cout<<"fibonacci using recursion"<<fib2;
				 break;					 			 
		
		default:cout<<"wrong choice";
		}
    
     cout<<" \n do you want to enter more(y/n) \n";
		cin>>choice;
	}
	while(choice=='y'|| choice=='Y');
	return 0;
	}
