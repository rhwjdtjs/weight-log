#include <stdio.h>

int main()
{
	FILE *fp;
	int num;
	char kg[100];
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
			fprintf(fp, ": ", date);
			printf("�����Ը� �Է��Ͻÿ�(��: 100kg): ");
			gets_s(kg, 100);
			fputs(kg, fp);
			fprintf(fp, "\n", kg);
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