#include<bits/stdc++.h>
using namespace std;
int main()
{

 int n,co=0;
int arr[8];
memset(arr,0,sizeof(arr));
scanf("%d",&n);
while(n>0)
{
    int temp = n%2;
       arr[co++]= temp;
    n/=2;/*n=n/2 */

}

for(int i=7;i>=0;i--)
    printf("%d",arr[i]);
puts("");


    return 0;
}
