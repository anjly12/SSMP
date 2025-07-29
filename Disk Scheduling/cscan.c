#include<stdio.h>
int head,a[20],i,distance,seektime,n,size;
void bubbleSort(int arr[],int n){
int temp;
for(int i=0;i<n-1;i++){
for(int j=0;j<n-i-1;j++){
if (arr[j]>arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}}}}
int main(){
printf("\nEnter the head position:");
scanf("%d",&head);
printf("\nEnter the number of disk requests:");
scanf("%d",&n);
printf("\nEnter the disk size:");
scanf("%d",&size);
printf("\nEnter the disk requests:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}a[n]=head;
n++;
bubbleSort(a,n);
int pos;
for(i=0;i<n;i++){
if(a[i]==head){
pos=i;
break;
}}
printf("\n\tCSCAN DISK SCHEDULING\n\n");
for(i=0;pos=i<n-1;i++){
distance=a[i+1]-a[i];
printf("Head movement from %d to %d : %d\n",a[i],a[i+1],distance);
seektime+=distance;
}distance=size-1;
printf("Head movement from %d to 0 : %d\n",size-1,distance);
seektime+=distance;
for(i=0;i<pos;i++){
if(i==0){
distance=a[i];
}else{
distance=a[i]-a[i-1];
}printf("Head movement from %d to %d : %d\n",i==0?size-1:a[i-1],a[i],distance);
seektime+=distance;
}printf("\nTotal seek time is : %d\n",seektime);
return 0;
}
