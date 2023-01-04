#include<bits/stdc++.h>
using namespace std;
int main(){
int num,n=0,test=0,tests=0,reminder=0;
int result=0;
scanf("%d",&num);
tests=num;
while(num!=0){

    int rem=num%10;
    //result=result+rem*rem*rem;
    num/=10;
    ++n;

}
test=num;
while(num!=0){
        printf("ok");
        int pow=1;
    reminder=num%10;
    for(int i=0;i<=n;i++){
        pow=pow*reminder;
    }
    printf("%d",result);
    result+=pow;
    num/=10;

}

if(result==test){
    printf("armstrong");

}
else{
    printf("it is not");
}
return 0;
}
