#include<bits/stdc++.h>
using namespace std;
int static series[100005];
int Fibonacciseries(int n){

int first=0,second=1,co=2,sum=0;

 if(n>0){
sum=first+second;
second=sum;
first=second;
series[co++]=sum;
printf(" num %d",co);
Fibonacciseries(n-1);

 }

}


int main(){

int num,length;



/*memset(series,0,sizeof(series));*/
series[1]=0;

printf("enter the length of fibonacci series");

scanf("%d",&length);

printf("enter the nth fibonacci number ");

scanf("%d",&num);

//printf("Fibonacci Series: ");

//printf("%d %d ", 0, 1);

Fibonacciseries(length);
for(int i=0;i<=length;i++){
    printf("%d\t",series[i]);
}

printf("%d th fibonacci is %d",num,series[num]);

return 0;
}
