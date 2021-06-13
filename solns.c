/* Enter your solutions in this file */
#include <stdio.h>

int mode (int a[],int b)
  {
  	int x[b],count[b];
 	for (int i=0;i<b;i++)
 	{
 		x[i]=a[i];
 		for(int j=0;j<b;j++)
 		{
 			if (x[i]==a[j])
 				count[i]++;
 		}
 	}
 	int big;
 	big=0;
 	if (b==1)
 		return a[0];
 	else
 	{	
		for(int k=0;k<b-1;k++)
		{	
			if (count[k]>count[k+1])
			{	
			if (count[k]>big)
				big=a[k];
			}		 
			else 
			{
				if (count[k+1]>big)
					big=a[k+1];
			}			
		}			
		return big;
	}
}

int max (int a[],int n)
  {
	int big;
	big=0;
	if (n==1)
		return a[0];
	else
	{	
		for(int i=0;i<n-1;i++)
		{	
			if (a[i]>a[i+1])
			{	
			if (a[i]>big)
				big=a[i];
			}		 
			else 
			{
				if (a[i+1]>big)
					big=a[i+1];
			}			
		}			
		return big;
	}		
}

int factors(int num,int a[])
{
	int no,pf,i;
	i=0;
	no=0;
	for(pf=2;pf<=num;pf++)
	{
		if (num%pf==0)
		{
			num=num/pf;
			a[i]=pf;
			pf=1;
			no++;
			i++;
		}
			
	}
	return no;
}	

float average(int a[],int n)
{
float sum=0;
float avg;	
if (n==1)
	{
	avg=a[0];
	return avg;
	}
else 
	{
	for(int i=0;i<n;i++)
		sum=sum+a[i];
	avg=(float)sum/n;
	return avg;
	}
}	

  int min (int a[],int n)
  {
	int small;
	if (n==1)
		return a[0];
	else
	{	
		for(int i=0;i<n-1;i++)
		{	
			if (a[i]<a[i+1])
			{	
			if (a[i]<small)
				small=a[i];
			}		 
			else 
			{
				if (a[i+1]<small)
					small=a[i+1];
			}			
		}			
		return small;
	}		
}
