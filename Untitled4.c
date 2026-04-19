//Find the average of elements in an array.
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i = 0;i<n;i++){
    scanf("%d",&array[i]);
}
int ava=0;
for (int i = 0;i<n;i++){
  ava = ava + array[i];
}

printf("%d",ava/n);







return 0;
}

