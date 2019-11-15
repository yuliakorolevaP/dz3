#include <stdio.h> 
#include <string.h> 
#define MAX 100 

int arr[MAX][MAX], used[MAX]; 
int cnt, versh, rebr, i, a, b, j; 

int main(void) 
{ 
int c=0;
printf("vvedite znach verchin:\n"); 
scanf("%d", &versh); 
printf("vvedite znach reber:\n"); 
scanf("%d", &rebr); 
for( i=0; i<versh; i++){ 
		for( j=0; j<versh; j++){
			arr[i][j] =0;}} 
printf("mejdu kakimi vershinami rebro(vvodit' with space)\n"); 
for(i = 0; i < rebr; i++) { 
scanf("%d %d", &a, &b); 
arr[a-1][b-1] = arr[b-1][a-1] = 1; 
} 
cnt=0; 
for( i=0; i<versh; i++){ 

	for( j=0; j<versh; j++){ 
		if (arr[i][j]==0) { 
			cnt++;} 
		if (cnt==versh) { 
		c=-1; 
						} 
	} 
cnt=0; 
} 
if (c==-1){ 
printf("ne svyaznyi graph"); 
} 
if (c==0){ 
printf(" svyaznyi graph"); 
} 
return 0; 
}
