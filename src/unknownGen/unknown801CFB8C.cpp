#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *_arkCore__Q23Gap4Core;
void *fn_800607F4(void *);
void fn_8006DC50(void *,int,void *,void *,int,int);
void *fn_801C94C0(void *);
void *fn_801CB050(void *);
void *fn_801CC560(void *);
extern char lbl_804B2CF8[];
extern void *lbl_805621F0;
extern void *lbl_805655F8;
extern void *lbl_805655FC;
extern void *lbl_80565600;
extern char lbl_80565604[1];
}
extern "C" {
void fn_801CFB8C(){
 void *value6;
 void *value1;
 void *value7;
 void *value8;
 void *value3;
 void *value9;
 void *value10;
 void *value5;
 void *value11;
 value6=fn_800607F4(lbl_805621F0);
 void *value0=lbl_805655F8;
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 value7=fn_801CB050(value6);
 lbl_805655F8=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value7)+28)=0;
 value8=fn_800607F4(lbl_805621F0);
 void *value2=lbl_805655FC;
 if(value2){
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
   fn_80066E1C(value2);
  }
 }
 value9=fn_801C94C0(value8);
 lbl_805655FC=value9;
 value10=fn_800607F4(lbl_805621F0);
 void *value4=lbl_80565600;
 if(value4){
  value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
   fn_80066E1C(value4);
  }
 }
 value11=fn_801CC560(value10);
 lbl_80565600=value11;
 fn_8006DC50(*reinterpret_cast<void **>(reinterpret_cast<char *>(_arkCore__Q23Gap4Core)+56),7,lbl_804B2CF8,lbl_80565604,0,0);
}
}
#pragma pop
