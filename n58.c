#include <stdio.h>
#define N 1000
int main(){
int arr[N];
int n;
printf("ENTER THE SIZE OF THE ARRAY:");
scanf("%d",&n);
printf("enter an array:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("reversed array:");
for (int i = n-1; i>=0; i--){
printf("%d",arr[i]);
printf(" ");
}
return 0;
}
