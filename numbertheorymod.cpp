#include<bits/stdc++.h>
using namespace std;
main()
{
    int fact=1;
	for(int i=1;i<=100;i++)
	{
		fact=((fact%97)*(i%97))%97;

	}
	printf("%d\n",fact);

}
