#include<stdio.h>
int main(){
  int n;
  printf("Nhap n=");
  scanf("%d",&n);
  if(n > 0){
    float s=0 , i=1;
    while(i<n){
    	s+=1/i;
    	i++;
	}
	printf("Tong S(n) la: %f",s);
	}else{
	printf("Error!");
}
}
