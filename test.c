#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main() {
	char str1[] = "welcome to bite";
	char str2[] = "###############";
	int left = 0;
	//��ȡ���һ��Ԫ�ص��±�
	int right = strlen(str2) - 1;
	while (left <= right) {
		printf("%s\n", str2);
		str2[left] = str1[left];
		str2[right] = str1[right];
		++left;
		--right;
		//vs����ת����/�����Ķ��� F12/ctrl + �ٱ����
		//�ص��ϴ�λ�� ctrl + <- 
		Sleep(200);
	    //cls ����
		system("cls");
	}
	system("pause");
	return 0;
}