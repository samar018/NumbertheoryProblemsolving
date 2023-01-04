#include<bits/stdc++.h>
using namespace std;
int main()
{
   char ch[10000];
   scanf("%s",&ch);
   int digit = strlen(ch);

   for(int i=0;i<strlen(ch);i++)
   {
       if(ch[i]!='0')
        break;
       else
        digit--;
   }


   if(digit>0)
   printf("%d\n",digit);
   else
    printf("%d\n",1);

    return 0;
}
