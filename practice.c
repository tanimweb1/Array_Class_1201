//Read 5 integers into an array and print them.
#include<stdio.h>
int main(){

int array[5];
for(int i = 0;i<5;i++){
    scanf("%d",&array[i]);
}

for (int i = 0;i<5;i++){
    printf("%d ",array[i]);
}





return 0;
}




//Find the sum of all elements in an array.
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i = 0;i<n;i++){
    scanf("%d",&array[i]);
}
int sum = 0;
for (int i = 0;i<n;i++){
    sum= sum + array[i];
}

printf("%d\n",sum);





return 0;
}






//Print elements of an array in reverse order.
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i = 0;i<n;i++){
    scanf("%d",&array[i]);
}

for (int i = n-1;i>=0;i--){
  printf("%d ",array[i]);
}







return 0;
}




