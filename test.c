//实现多个字符从两端移动，向中间汇聚

#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//调用string.h头文件system函数=>strlen()
#include<string.h>

//调用延时库函数=>Sleep()
#include<windows.h>

int main()
{
	char arr1[] = "ljyxihuanxiaonanniang";
	char arr2[] = "#####################";

	//printf("%d\n%d\n",strlen(arr1),strlen(arr2) );

	//1.获取字符串长度
	//因为arr1和arr2长度相同，所以只需要获取一个的长度
	//分别定义数组左右两端的变量
	int left = 0;
	int right = strlen(arr1) - 1;

	while(left<=right)
	//2.将arr1的字符替换到arr2中
	{
	arr2[left] = arr1[left];
	arr2[right] = arr1[right];

	//下标移动，
	left++;
	right--;

	//打印结果
	printf("%s\n", arr2);

	//延时函数
	Sleep(1000);

	//通过清屏实现动态效果
	system("cls");

	}

	return 0;

}