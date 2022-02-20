#include <stdio.h>

#define NUMBER_OF_STUDENT 3

// 構造体・・・複数の変数をまとめて使いたい時に使う（オブジェクト的な感じか？）
struct Student
{
	char student_name[100];
	int student_age;
};

int main(void)
{
	// Studentという構造体の変数をNUMBER_OF_STUDENT個だけ作っている
	struct Student st[NUMBER_OF_STUDENT];
	int i;
	int num;

	printf("%d人の生徒の情報を入力してください\n", NUMBER_OF_STUDENT);

	for (i = 0; i < NUMBER_OF_STUDENT; i++) {
		printf("%d人目の名前 :", i+1);
		scanf("%d", st[i].student_name);
		printf("%d人目の年齢 :", i+1);
		scanf("%s", st[i].student_age);
	}
	return 0;
}
