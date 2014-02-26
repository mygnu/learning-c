#include <stdio.h>

int main()
{
    double x =1;
    int n,i;
    printf("Please enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++) 		/* late comment
				 i believe this calculates the Nth " "*/
    {
        x=x*i;
    }
    printf("%f\n",x);
    return 0;
}
