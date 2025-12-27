#include<stdio.h>

struct time{
  int hours;
  int min;
  int sec;
};
int total_sec(struct time *t1);


int main(){

  struct time t1;
  printf("Enter time: e.g.(H, M, S): ");
  scanf("%d",&t1.hours);
  scanf("%d",&t1.min);
  scanf("%d",&t1.sec);

  printf("Current Time: H:%d M:%d S:%d\n",&t1.hours,&t1.min, &t1.sec);
  int ts = total_sec(&t1);
  printf("Total Sec: %d",ts);
  return 0;
}
// write code here cal total sec from struct time pointer 
int total_sec(struct time *t1){
  return t1->hours * 3600 + t1->min * 60 + t1->sec;
}