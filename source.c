#include <stdio.h>

int main()
{
	FILE *fp;
	int num;
	char buffer[100];
	while (1)
	{
		printf("�޴��� �������ּ���:\n");
		printf("1. ��� �߰��ϱ�\n");
		printf("2. ��� Ȯ���ϱ�\n");
		printf("3. ����\n");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
            fp = fopen("record.txt", "a");
            printf("��¥,�����Ը� �Է��Ͻÿ�(��: 2020/03/05 75kg) :");
            getchar();
            gets_s(buffer, 100);
            fputs(buffer, fp);
            fprintf(fp, "\n", buffer);
            break;
		case 2:
			fp = fopen("record.txt", "r");
			while(fgets(buffer, 100, fp)!=NULL)
				printf("%s\n", buffer);
			break;
		case 3:
			exit(1);
			break;
		}
		
	}
	fclose(fp);
}