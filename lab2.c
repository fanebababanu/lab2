#include <stdlib.h>
#include <stdio.h>

int function(int x, int *i){
	if(x>0){
        (*i)++;
        printf("%d ", x);
        function(x-2,i);
	}
	else return x;
}

int main(){
	int a=30, i=0;
	a=function(a,&i);
	printf("i=%d, a=%d", i, a);
	return 0;
}

