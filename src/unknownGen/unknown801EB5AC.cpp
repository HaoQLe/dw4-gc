#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658F8(void *,void *);
void fn_800667B0();
void fn_800691E8(void *,int);
extern char lbl_804B2E24[];
extern void *lbl_805617BC;
extern void *lbl_805657D8;
extern char lbl_805657DC[1];
}
extern "C" {
void igHeap_virtual24(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 fn_800667B0();
 if(!(unsigned char)p1){
  fn_800691E8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),1);
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+16);
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+0);
  if(value2){
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
    fn_80066E1C(value2);
   }
  }
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8)!=0){
   if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8)>0){
    value4=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+16);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+0)=(void *)0;
    return;
   } else {
    return;
   }
  }
  return;
 } else {
  return;
 }
}
void *fn_801EB644(int p0,int p1){
 void *value0;
 void *value1;
 if((int)*reinterpret_cast<signed char *>((lbl_805657DC+0))==0){
  value0=fn_800658F8(lbl_805617BC,lbl_804B2E24);
  lbl_805657D8=value0;
  *reinterpret_cast<unsigned char *>((lbl_805657DC+0))=1;
 }
 if((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p0)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_805657D8)+8))){
  value1=reinterpret_cast<void * (*)(void *)>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p0)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_805657D8)+8)))((void *)p1);
  return value1;
 } else {
  return lbl_805657D8;
 }
}
}
#pragma pop
