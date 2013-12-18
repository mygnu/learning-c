/* If the three sides of a triangle are entered through the */
/* keyboard, write a program to check whether the triangle is */
/* valid or not. The triangle is valid if the sum of two sides is */
/* greater than the largest of the three sides. */




#include "header.h" //gets most common header files from my own header
 
int main(int argc, char *argv[])
{
    int a,b,c,big,small,medium;
	a = b = c = big = small = medium = 0;
	char *type= " ";
	printf ("Ener the sides of a tirangle a,b and c: ");
	scanf("%d %d %d",&a,&b,&c);

	big =  (a>b?(a>c?a:c):(b>c?b:c));
	small= (a<b?(a<c?a:c):(b<c?b:c));
	medium = (big==a? (c>b? c:b):(big==b? (c>a? c:a):(a>b? a:b)));
	
	if ((small+medium)>big)
		{
			if(a==b || a==c || b==c)
				{
					if(a==b&&b==c&&c==a)
						type = "Equilateral";
					else
						type = "Isosceles";
				}
			

			else if(a!=b&&a!=c&&c!=a)
				{
					if((big*big) == (medium*medium)+(small*small))
						type = "Right-Angle";
					else
						type = "Scalene";
				}

			printf ("This is a valid %s triangle.\n",type);
				
		}
	else
		printf("This is not a valid triangle, \n");
	//printf ("big %d,medium %d, small %d\n",big,medium,small);
	return 0;
}

