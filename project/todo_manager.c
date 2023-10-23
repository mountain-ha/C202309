#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; //할일 목록 생성
	int taskCount = 0; //할 일 개수 변수 생성

	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1;

		//메뉴를 출력하고 메뉴에 있는 수 입력 받기
		printf("------------------\n"); 
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5.할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0;
		int delIndex = -1;
		int changeIndex = -1;
		char ch;


		switch (choice) {

		//할 일 입력받고 저장하기
		case 1: 
			printf("할 일을 입력하세요 (공백 없이 입력하세요): ");

			//입력받은 할 일을 할 일 목록에 추가
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount])); 
			printf("할 일 ""%s""가 저장되었습니다\n\n", tasks[taskCount]);
			
			// 할 일 개수 +1
			taskCount++;
			break;
		
		//할 일 삭제하기
		case 2: 
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			
			// 입력한 번호에 할 일이 존재하지 않을때 "범위를 벗어났습니다" 출력 후 break로 이동 
			if (delIndex > taskCount || delIndex <= 0) { 
				printf("삭제 범위가 벗어났습니다.\n");  
			}

			//입력한 번호에 할 일이 존재할때 할 일 삭제하기
			else { 
				printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);


				//입력한 할 일 삭제
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				//할 일을 삭제하면서 생긴 할 일 목록에 빈 공간을 할 일을 한칸씩 당겨서 메우기
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
				}
				taskCount -= 1;
			}
			break;
		
		//할 일 목록 출력
		case 3:
			printf("할 일 목록\n");
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("\n");
			break;
		
		//프로그램 종료를 위해 terminate = 1로 만들고 swich문 나가기
		case 4:
			terminate = 1;
			break;
		
		//번호와 할 일 입력받고 해당 번호의 할 일 수정하기
		case 5:
			printf("수정할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);

			//입력한 번호에 할 일이 없을때 "수정 범위가 벗어났습니다"출력후 break로 이동  
			if (delIndex > taskCount || delIndex <= 0) {
				printf("수정 범위가 벗어났습니다.\n");
			}
			else {

				//할 일 삭제
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				

				//해당 위치애  할 일 입력받고 저장하기
				printf("수정할 할 일의 내용을 입력하세요 (공백 없이 입력하세요): ");
				scanf_s("%s", tasks[delIndex - 1], (int)sizeof(tasks[delIndex - 1]));
				printf("할 일 ""%s""가 수정되었습니다\n\n", tasks[delIndex - 1]);;
				break;

		
		// 1, 2, 3, 4, 5이외의 번호 입력시 "잘못된 선택입니다. 다시 선택하세요"출력
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
			}

			//case 4에서 terminate = 1로 했을경우 프로그램 종로
			if (terminate == 1) {
				printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
				break;
			}

			//할 일이 10개 이상일때 프로그램 종료
			if (taskCount <= 10) {
				printf("할 일이 다 찼습니다");
				break;
			}

		}
	}
}
