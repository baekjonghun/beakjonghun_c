/*
�ۼ���:������
�ۼ���:2018-02-28
����:���ڿ��� ���鹮�� �Է� �ޱ�
����:gets()�� ��������.
*/
#include <stdio.h>
/*
�ۼ���:������
�ۼ���:2018-02-28
����:���ڿ��� ���鹮�� �Է� �ޱ�
����:���ڿ��� �Է¹ޱ� ���� ������ �Ű� ������ ��.
*/
int main(void) {

	char name[32] = { 0 };
	int age = 0;
     
	printf("���̸� �Է��Ͻÿ�.:");
	scanf_s("%d%*c", &age); //���� ���¹� ���1.scanf_s(%d%*c , &age);
	fflush(stdin); //���2. ���۸� ��쵵�� ��.

	printf("�̸��� �Է��Ͻÿ�.:");

	gets_s(name , sizeof(name)); 
	printf("�̸��� %s ���̴� %d �Դϴ�.", name, age);



	return 0;
}