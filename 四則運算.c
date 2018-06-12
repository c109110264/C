#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int a,b;
char d;
printf("輸入a值 輸入b值 輸入運算符號\n");
scanf("%d %d %c",&a,&b,&d);
switch(d){
	case'+':
	printf("%d+%d=%d",a,b,a+b);
	break;
	case'-':
	printf("%d-%d=%d",a,b,a-b);
	break;
	case'*':
	printf("%d*%d=%d",a,b,a*b);
	break;
	case'/':
	printf("%d/%d=%d",a,b,a/b);
	break;
	default:
	printf("錯誤");
	break;	
		
}

	return 0;
}
