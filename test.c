//ʵ�ֶ���ַ��������ƶ������м���

#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����string.hͷ�ļ�system����=>strlen()
#include<string.h>

//������ʱ�⺯��=>Sleep()
#include<windows.h>

int main()
{
	char arr1[] = "ljyxihuanxiaonanniang";
	char arr2[] = "#####################";

	//printf("%d\n%d\n",strlen(arr1),strlen(arr2) );

	//1.��ȡ�ַ�������
	//��Ϊarr1��arr2������ͬ������ֻ��Ҫ��ȡһ���ĳ���
	//�ֱ��������������˵ı���
	int left = 0;
	int right = strlen(arr1) - 1;

	while(left<=right)
	//2.��arr1���ַ��滻��arr2��
	{
	arr2[left] = arr1[left];
	arr2[right] = arr1[right];

	//�±��ƶ���
	left++;
	right--;

	//��ӡ���
	printf("%s\n", arr2);

	//��ʱ����
	Sleep(1000);

	//ͨ������ʵ�ֶ�̬Ч��
	system("cls");

	}

	return 0;

}