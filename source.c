#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	int num;
	char kg[100];
	float kg1;
	char date[100];
	while (1)
	{
		printf("�޴��� �������ּ���:\n\n");
		printf("1. ��� �߰��ϱ�\n\n");
		printf("2. ��� Ȯ���ϱ�\n\n");
		printf("3. ����\n\n");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			fp = fopen("record.txt", "a");
			printf("��¥�� �Է��Ͻÿ�(�� 2020/03/05): ");
			getchar();
			gets_s(date, 100);
			fputs(date, fp);
			fprintf(fp, " : ", date);
			printf("�����Ը� �Է��Ͻÿ�(��: 100): ");
			gets_s(kg, 100);
			
			kg1 = atof(kg);
			if (kg1 >= 65 && kg1 < 65.5)
				fprintf(fp, "llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 65.5 && kg1 < 66)
				fprintf(fp, "lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll  ", kg);
			if (kg1 >= 66 && kg1 < 66.5)
				fprintf(fp, "llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 66.5 && kg1 < 67)
				fprintf(fp, "lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 67 && kg1 < 67.5)
				fprintf(fp, "llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 67 && kg1 < 67.5)
				fprintf(fp, "llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 67.5 && kg1 < 68)
				fprintf(fp, "lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 68 && kg1 < 68.5)
				fprintf(fp, "llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 68.5 && kg1 < 69)
				fprintf(fp, "lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 69 && kg1 < 69.5)
				fprintf(fp, "llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 69.5 && kg1 < 70)
				fprintf(fp, "lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 70 && kg1 < 70.5)
				fprintf(fp, "llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 70.5 && kg1 < 71)
				fprintf(fp, "lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 71 && kg1 < 71.5)
				fprintf(fp, "llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 71.5 && kg1 < 72)
				fprintf(fp, "lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 72 && kg1 < 72.5)
				fprintf(fp, "llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 72.5 && kg1 < 73)
				fprintf(fp, "lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 73 && kg1 < 73.5)
				fprintf(fp, "llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 73.5 && kg1 < 74)
				fprintf(fp, "lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 74 && kg1 < 74.5)
				fprintf(fp, "llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);
			if (kg1 >= 74.5 && kg1 < 75)
				fprintf(fp, "lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll   ", kg);


			fputs(kg, fp);
			fprintf(fp, "kg\n", kg);
			break;
		case 2:
			fp = fopen("record.txt", "r");
			while (fgets(kg, 100, fp) != NULL)
				printf("%s\n", kg);
			break;
		case 3:
			exit(1);
			break;
		}

	}
	fclose(fp);
}