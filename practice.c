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






//Count how many even and odd numbers are in an array.

#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i = 0;i<n;i++){
    scanf("%d",&array[i]);
}
int even=0,odd=0;
for (int i = 0;i<n;i++){
  if(array[i]%2==0){
    even++;
  }
   else{
    odd++;
  }
}

printf("%d %d",odd,even);







return 0;
}





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








//Count how many times a specific number appears in an array.

#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i = 0;i<n;i++){
    scanf("%d",&array[i]);
}
int x,count=0;
scanf("%d",&x);
for (int i = 0;i<n;i++){
  if(x==array[i]){
    count++;
  }

}

printf("%d",count);







return 0;
}





