//Find the largest element in an array.
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i = 0;i<n;i++){
    scanf("%d",&array[i]);
}
int large;
large = array[0];
for (int i = 0;i<n;i++){
  if(array[i]>large){
    large = array[i];
  }
}

printf("%d",large);







return 0;
}

