#include <iostream>
using namespace std;
int bs(int a[],int l,int r,int x)
{
if(r>=l)
{
int m=l+(r-l)/2;
if(a[m]==x)
return m;
else if(a[m]>x)
return bs(a,l,m-1,x);
else
return bs(a,m+1,r,x);
}
return -1;
}
int main()
{
int a[10],n,i,key,res;
cout<<"Name: Piyush Chaudhari"<<"\n";
cout<<"Roll No: TCOA55"<<"\n";
cout << "\nEnter size of array" << endl;
cin>>n;
cout<<"\nEnter the Array in Ascending order::\t";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"\nEntered Array Is ::\t";
for(i=0;i<n;i++)
{
cout<<"\n";

cout<<a[i];
}
cout<<"\nEnter the element to be searched::\t";
cin>>key;
res=bs(a,0,n-1,key);
if(res==-1)
cout<<"\nElement not found ";
else
cout<<"\nElement found at position "<<res;
return 0;
}
