// The Trip
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,i;
	int std[100],sum=0;
	float temp,avg=0, diff=0,spent=0,owned=0;
	// clrsc2r();

	printf("\n Enter How Many Students= \t");
	scanf("%d",&n);   // No of students
	
	i=0;
	while(i<n)
	{
		scanf("%f",&temp); //amount in dollars
		temp=temp*100;
		std[i]=(int)temp;
		sum=sum+std[i];
		i++;
	}
	avg=(float)sum/n;  // calculate average spent
	
	i=0;
	while(i<n)
	{
		diff=std[i]-avg;   // calculate differences
		if(diff>0)
			spent=spent+diff; //add in spent
		else
			owned=owned+abs(diff); //add in owned
		i++;
	}
	if(spent>owned)			// print greater one
		printf("$%.2f",owned/100);
	else
		printf("$%.2f",spent/100);
	getch();
	return(0);
}
	