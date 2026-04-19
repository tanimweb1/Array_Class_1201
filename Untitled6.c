//Find the smallest element in an array.
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i = 0;i<n;i++){
    scanf("%d",&array[i]);
}
int small;
small = array[0];
for (int i = 0;i<n;i++){
  if(array[i]<small){
    small = array[i];
  }
}

printf("%d",small);







return 0;
}


