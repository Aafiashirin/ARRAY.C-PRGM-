#include<stdio.h>
#include<stdlib.h>
void main()
{
	//Static method
	int a[5]={10,20,30,40,50};
	//Direct method
	int b[5];
	b[0]=11;
	b[1]=22;
	b[2]=33;
	b[3]=44;
	b[4]=55;
	//Interactive method
	int c[5];
	int i;
	printf("Enter the value for c Array\n");
	for(i=0;i<5;i++)
	scanf("%d",&c[i]);
	printf("Contents of Array a\n");
	for(i=0;i<5;i++)
	printf("%d\n",a[i]);
	printf("Contents of Array b\n");
	for(i=0;i<5;i++)
	printf("%d\n",b[i]);
	printf("Contents of Array c\n");
	for(i=0;i<5;i++)
	printf("%d\n",c[i]);
	
	
}
