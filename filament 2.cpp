#include<stdio.h>
main()
{
	char email[100]="xyz",email1[100];
	char passwor[100]="987654321",password1[100];
	printf("Enter the Email :");
	scanf("%s",&email1);
	printf("Enter the password :");
	scanf("%s",&password1);

	if(strcmp(email,email1)==0)
	{
	if(strcmp(password,password1)==0)
	{
		printf("\nlogin not success . ");
	}
	else
	{
		printf("\nlogin not exits .")
	}
}
else
{
	printf("does not exits .");
}
	
}
