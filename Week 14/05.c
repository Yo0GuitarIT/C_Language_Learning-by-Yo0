#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	char **month;
	int row,col;
	char month_name[12][10]={"January","February","March","April","May","June","July","August","September","October","Novermber","December"};
	
	month = (char **)malloc(12*sizeof(char*));    //宣告二維字元陣列儲存12月份的名稱
	//動態配置12個字串
	for(int i=0;i<12;i++){
		month[i] = (char *)malloc(10*sizeof(char)); //動態配置十個字元
		month[i]=month_name[i];
	}

	for(int i=0;i<12;i++){
		printf("%d月分的月分的英文名稱：%s\n",i+1,month[i]);
	}
  return 0;
}
