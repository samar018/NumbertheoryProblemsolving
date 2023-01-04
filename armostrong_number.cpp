#include<bits/stdc++.h>
using namespace std;
int main(){
int num,a,b,c,t=0;
int result=0;
scanf("%d",&num);
t=num;
while(num!=0){

    int rem=num%10;
    result=result+rem*rem*rem;
    num/=10;


}
if(result==t){
    printf("armstrong");

}
else{
    printf("it is not");
}
return 0;
}
