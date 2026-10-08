#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80287D1C(void *,void *,void *,void *);
extern char lbl_80417854[];
extern char lbl_804178F4[];
void *strcmp(void *,void *);
}
extern "C" {
void *fn_80287EFC(int p0,int p1,int p2,int p3){
 void *value0;
 void *value1;
 void *value2;
 void *local0;
 value0=fn_80287D1C((void *)p0,(void *)p1,(void *)p2,&local0);
 if(!(unsigned char)(int)value0){
  return (void *)0;
 } else {
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p3)+0)=0;
  value1=strcmp(local0,lbl_804178F4);
  if((int)(int)value1==0){
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p3)+0)=1;
  } else {
   value2=strcmp(local0,lbl_80417854);
   if((int)(int)value2==0){
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p3)+0)=1;
   }
  }
  return (void *)1;
 }
}
}
#pragma pop
