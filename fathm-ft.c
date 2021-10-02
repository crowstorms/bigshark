#include<stdio.h>
int main()
{
	int fathoms,feet;//多条声明 
	
	fathoms = 2;
	feet = 6*fathoms;//查找fathoms的值，并将它乘以6，将结果赋给feet 
	printf("There are %d feet in %d fathoms!\n",feet,fathoms);
	printf("Yes,I said %d feet!\n",6*fathoms);//待打印的值不一定是变量，只要可以求值得出合适的类型值即可 
	
	return 0;
	
	
	
}
