//Calculate the sum of all even numbers and the sum of all odd numbers in an array.

#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i = 0;i<n;i++){
    scanf("%d",&array[i]);
}
int evensum=0,oddsum=0;
for (int i = 0;i<n;i++){
  if(array[i]%2==0){
    evensum = evensum + array[i];
  }
   else{
    oddsum = oddsum + array[i];
  }
}

printf("%d %d",evensum,oddsum);







return 0;
}




