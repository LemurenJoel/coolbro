#include <stdio.h>

int main()
{
	int num = 0;
	int svar = 1;

	while((int)svar != 4){
		printf("Talet är %d, välj en operation: \n", num);

		printf("1) Addera med 1\n");
		printf("2) Multiplicera med 2\n");
		printf("3) Subtrahera med 3\n");
		printf("4) Avsluta programmet\n");

		scanf("%d", &svar);
		printf(">> %d\n", svar);
		if (svar == (int)svar)
		{
			switch(svar){
			case 1:
				num += 1;
				break;
			
			case 2:
				num *= 2;
				break;

			case 3:
				num -= 3;
				break;

			default:
				printf("Svaret är inte ett heltal mellan 1-4\n");
				break;
		}
		}
}
return 0;
}