/*Check whether two numbers are Amicable Numbers*/

#include<bits/stdc++.h>
using namespace std;
int check(int a, int b)
{
    int s = 0, i;
    for (i = 1; i < a/2; i++)
    {
        if (a % i == 0)
        {
            s = s + i;
        }
    }

    if (s == b)
    {
        s = 0;
        for (i = 1; i < b/2; i++)
        {
            if (b % i == 0)
            {
                s = s + i;
            }
        }

        if (s == a)
            return 1;
        else
            return 0;
    }

    return 0;
}
int main(){

int a, b;

    printf("Enter 1st no. : ");
    scanf("%d", &a);
    printf("Enter 2nd no. : ");
    scanf("%d", &b);

    if (check(a, b))
    {
        printf("%d and %d are Amicable Number", a, b);
    }
    else
    {
        printf("%d and %d are not Amicable Number", a, b);
    }

return 0;
}
