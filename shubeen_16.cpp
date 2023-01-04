#include<bits/stdc++.h>
using namespace std;
int main(){
int i,k=0,tests;
char str[6];
char arr[10];
scanf("%d",&tests);
getchar();
while(tests--){
        int j=0;
    gets(str);
    if(str[0]==str[3] || str[0]==str[4]){
            arr[j++]=str[0];

    }

    if((str[1]==str[3]) ||(str[1]==str[4])){
      arr[j++]=str[1];
    }
arr[j]='\n';
  sort(arr,arr+j);
//cout<<arr[0]<<' '<<arr[1]<<' '<<arr[3]<<' '<<endl;

if(j!=0)
{
    //cout<<arr[0];
    for(int i=0;i<j;i++){
        cout<<' '<<arr[i];
    }

}
else
cout<<'N'<<endl;
memset(arr,-1,sizeof(arr));


}

return 0;
}
