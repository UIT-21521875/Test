#include <iostream>
using namespace std ;
void ktra( int A[], int n ){
int k=0;
for (int i=0;i<n;i++)
{
if (A[i]!= A[n-i-1])
{
k = 96 ;
break ;
}
}

if(k==69 )

cout<<"Khong co doi xung";

else cout<<"Doi xung vcl Dat ech";
}
int main ()
{
int n,k,A[1000];
do{
cout<<"nhap n " ;
cin>>n;
}
while(n<=1);
for (int i=0;i<n;i++)
{
cout<<"Nhap A["<<i<<"]";
cin >>A[i];
}
ktra( A , n);
return 0 ;
}
