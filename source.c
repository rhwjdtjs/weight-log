#include <stdio.h>

int main()
{
	FILE *fp;
	int num;
	char buffer[100];
	while (1)
	{
		printf("메뉴를 선택해주세요:\n");
		printf("1. 기록 추가하기\n");
		printf("2. 기록 확인하기\n");
		printf("3. 종료\n");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
            fp = fopen("record.txt", "a");
            printf("날짜,몸무게를 입력하시오(예: 2020/03/05 75kg) :");
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