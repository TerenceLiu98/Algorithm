#include <stdio.h>
#include <math.h>

/* RSA Algorithm is using Public Key and Privite Key to tranport message */
#define P	67	/* P and Q have to be prime number */
#define	Q	71

#define N	(P * Q)	 /* add the (), or will cause the mistake */
#define phi	((P - 1)*(Q - 1)) /* Euler Function phi(N) */

#define E	101		/* E and D follow the regulation below */
#define D	1601	/* (E * D)  \equiv 1 mod phi  */

/* The transport message's length must be less than N */ 
/* The Chinese Word: '中' in ascii is [228, 184, 173] */

int main(void)
{
	int i;
	int TrsMsg[4] = {228, 184, 173};
	long en[3], de[3];
	int SecCode[3], DeMsg[3];

	printf("This is a demo of RSA:\n");
	printf("Message\t Encrpytion \t   Encrpyted Message \n");

	for (i = 0; i < 3; i++)
	{
		/* s = m(E) mod N */
		en[i] = (int)pow(TrsMsg[i], E);
		SecCode[i] = en[i] % N;

		printf("%d\t%d\t\t%d\n", TrsMsg[i], en[i], SecCode[i]);
	}

	printf("\n Original Message \t Encrpyted Message \t Encrpytion \t\t Decrpytion Message \n");
	for (i=0; i<3; i++)
	{
		/* d = s(D) mod N */
		de[i] = pow(SecCode[i], D);
		DeMsg[i] = de[i] % N;

		printf("%d\t\t%d\t%d\t\t%d\n", TrsMsg[i], SecCode[i], de[i], DeMsg[i]);
	}

	getchar();
  
  return 0;
}
/********************************************************************************************
*	File Name				:	RSA.c 
*	Abstract Description	:	RSA加解密算法的简单演示	
*	Create Date				:	2019/06/16/
*	Author					:	Terence Lau
********************************************************************************************/
