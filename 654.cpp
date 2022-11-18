#include <stdio.h>
int main(){
	char a[10005],b[10005];
	scanf("%s %s",&a,&b);
	for(int i=0;a[i]!='\0';i++){
		printf("%d",2*(a[i]-'0'));
	}
}
