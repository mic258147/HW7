#include <stdio.h>
#include <stdlib.h>

int main()
{
	errno_t err1;
	FILE *fptr;
	char ch;
	int count = 0;

	err1 = fopen_s(&fptr, "welcome.txt", "r");
	if (err1==0)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}