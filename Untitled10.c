//Find the second largest element in an array.

#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i = 0;i<n;i++){
    scanf("%d",&array[i]);
}
int max,max2;

for (int i = 0;i<n;i++){
  if(array[i]>max){
    max = array[i];
    max2 = array[i-1];
  }

}

printf("%d",max2);







return 0;
}






