#include<stdio.h>

int main()
{
	char *str;
	char arr1[10] = {'a','b','c','d','e','f'};
	//char arr1[10] = {a,b,c,d,e,f};   错误1
	
	puts(arr1);//字符串输出
	str = arr1;//字符串地址拷贝  缓冲区地址拷贝
	puts(str);
	
	return 0;
}