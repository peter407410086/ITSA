#include <stdlib.h>
#include <stdio.h>
#include<string.h>

int main(){
	int x, i, j, cnt = 0;
	char a[100];
	scanf("%s", a);
	cnt = strlen(a);
	cnt -= 1;//¸õ¨ì¦r§À
	for(i = 0; i < cnt; i++){
        if(a[i] != a[cnt-i]){
            break;
        }
	}
	if(i == cnt){
        printf("YES\n");
	}
	else{
        printf("NO\n");
	}

}
