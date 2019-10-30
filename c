#include <stdio.h> 
#include <string.h> 
#define MAX 100 

int arr[MAX][MAX], used[MAX]; 
int cnt, versh, rebr, i, a, b; 

void fun(int v)
{ 
int i; 
used[v] = 1; 
cnt++; 
for (i = 1; i <= versh; i++) 
if ((arr[v][i] == 1) && (used[i] == 0)) fun(i); 
} 


int main(void) 
{ 
printf("vvedite znach verchin:\n"); 
scanf("%d", &versh); 
printf("vvedite znach reber:\n"); 
scanf("%d", &rebr); 
printf("mejdu kakimi vershinami rebro(vvodit' with space)\n"); 
for(i = 0; i < rebr; i++) { 
scanf("%d %d", &a, &b); 
arr[a][b] = arr[b][a] = 1; 
} 
cnt = 0; 
fun(1); 
if (cnt == versh) printf("connected graph\n"); 
else printf("not connected graph\n"); 
return 0; 
}
