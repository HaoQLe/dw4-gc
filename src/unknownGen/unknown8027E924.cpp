#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802734A8(void *,void *,int);
void fn_802738C8(void *);
void fn_80273934(void *,void *);
void fn_80273B14(void *,int);
void fn_8027800C(void *,void *);
void fn_802798C4(void *);
void fn_8027E8CC();
void fn_8027EBCC(void *);
void *fn_8028111C(void *,int);
void fn_80281710(void *);
extern char lbl_804CA7DC[];
}
extern "C" {
void fn_8027E924(int p0,int p1){
 void *value0;
 void *value1;
 value0=(void *)1024;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0)!=0){
  value0=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0))+20);
 }
 value1=fn_8028111C((void *)p0,10);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+68)=value1;
 fn_8027800C((void *)p0,value0);
 fn_8027EBCC((void *)p0);
 fn_802798C4((void *)p0);
 fn_80281710((void *)p0);
 fn_802738C8((void *)p0);
 fn_80273B14((void *)p0,1);
 fn_802734A8((void *)p0,(void *)fn_8027E8CC,0);
 fn_80273934((void *)p0,lbl_804CA7DC);
}
}
#pragma pop
