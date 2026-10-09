#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void fn_80305344(void *,void *,int,void *);
void fn_80305A28(void *,void *);
void fn_80305E80(int,int,int,int,int,int);
void fn_80305EA8(int,int);
}
extern "C" {
UnknownGenHolder *dtor_80305E0C(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void fn_80305E80(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80305344((void *)p0,(void *)p1,0,(void *)p2);
}
void fn_80305EA8(int p0,int p1){
 fn_80305344((void *)p0,(void *)p1,0,(void *)-1);
}
void fn_80305ED0(int p0,int p1,int p2,int p3,int p4){
 fn_80305344((void *)p0,(void *)p1,(int)(int)((void *)p2),(void *)p3);
 fn_80305A28((void *)p0,(void *)p4);
}
void fn_80305F14(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80305E80((int)(int)((void *)p0),(int)(int)((void *)p1),(int)(int)((void *)p2),(int)(int)((void *)p3),(int)(int)((void *)p4),(int)(int)((void *)p5));
 fn_80305A28((void *)p0,(void *)p3);
}
void fn_80305F58(int p0,int p1,int p2){
 fn_80305EA8((int)(int)((void *)p0),(int)(int)((void *)p1));
 fn_80305A28((void *)p0,(void *)p2);
}
}
#pragma pop
