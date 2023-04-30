#include<iostream>
using namespace std;
int main()
{ 
   int num[10],temp;
   for (int i=0;i<10;i++)
   cin >>num[i];
   
for(int i=0;i<10;i++)
{
	for(int j=0;j<10-i;j++)
	{
		if(num[j]<num[j-1])
		{
		 temp = num[j];
			num[j]=num[j-1];
			num[j-1]=temp;
		}
	}
}
cout<<"sorted array is :" <<endl;
for(int i =0; i<10;i++)
cout<<num[i];
return 0;
}
