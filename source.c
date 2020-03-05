#include <stdio.h>

int main()
{
	FILE *fp;
	int num;
	char kg[100];
	char date[100];
	while (1)
	{
		printf("메뉴를 선택해주세요:\n\n");
		printf("1. 기록 추가하기\n\n");
		printf("2. 기록 확인하기\n\n");
		printf("3. 종료\n\n");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			fp = fopen("record.txt", "a");
			printf("날짜를 입력하시오(예 2020/03/05): ");
			getchar();
			gets_s(date, 100);
			fputs(date, fp);
			fprintf(fp, ": ", date);
			printf("몸무게를 입력하시오(예: 100kg): ");
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