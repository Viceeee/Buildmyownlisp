//C语言允许用户使用 typedef 关键字来定义自己习惯的数据类型名称，来替代系统默认的基本类型名称、数组类型名称、指针类型名称与用户自定义的结构型名称、共用型名称、枚举型名称等。一旦用户在程序中定义了自己的数据类型名称，就可以在该程序中用自己的数据类型名称来定义变量的类型、数组的类型、指针变量的类型与函数的类型等。
//可以使用typedef来定义一个库中没有的数据类型比如
#include<stdio.h>
#include<string.h>

typedef struct Sanshangyouya 
{
	int breastsize;
	int waistsize;
	int buttocksize;
	char number[50] ;
}Threesize;

int main(int argc , char** argv)
{
	Threesize threesizes;
	Threesize shuibuying;

    threesizes.breastsize = 83;
	threesizes.waistsize = 59;
	threesizes.buttocksize = 88;
	strcpy(threesizes.number,"还没查到三上优亚的番号");
	shuibuying.breastsize = 79;
	shuibuying.waistsize = 52;
	shuibuying.buttocksize = 78;
	strcpy(shuibuying.number, "\nMIDE-680\nMIDE-657\nMIDE-613\nMIDE-586\nMIDE-580\n");

	printf("三上悠亚的胸围是:%d\n",threesizes.breastsize);
	printf("三上悠亚的腰围是:%d\n",threesizes.waistsize);
	printf("三上悠亚的臀围是:%d\n",threesizes.buttocksize);
	printf("三上悠亚的番号是:%s\n",threesizes.number);
	
	printf("水卜樱的胸围是:%d\n",shuibuying.breastsize);
	printf("水卜樱的腰围是:%d\n",shuibuying.waistsize);
	printf("水卜樱的臀围是:%d\n",shuibuying.buttocksize);
	printf("水卜樱的番号是:%s\n",shuibuying.number);

	//使用puts函数的话
	//puts("胸围是：)......
	//算了，puts好像没有printf这个的功能这么齐全
	return 0;
}

