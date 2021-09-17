 #include<stdio.h>
 void main()
 {
 	int num,rem,product=1;
 	printf("Enter the number: ");
 	scanf("%d",&num);
 	printf("\n The product of given number is ");
 	while(num>0)
 	{
 		rem=num%10;
 		product=product*rem;
 		num=num/10;	
	 }
	 printf("%d",product);
 }
