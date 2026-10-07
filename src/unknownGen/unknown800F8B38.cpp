#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800F6DC0(void *);
void *fn_800F7DDC(void *);
void *fn_800F84EC(void *);
void *fn_800F8EA8(void *);
void *fn_800F8FB0(void *);
void *fn_800F9134(void *);
void *fn_800F93F0(void *);
void *fn_800F94AC(void *);
void *fn_800F9604(void *);
void *fn_800FC984(void *);
void *fn_800FCA9C(void *);
void *fn_800FCEA8(void *);
}
extern "C" {
void *fn_800F8B38(int p0){
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value9;
 void *value10;
 void *value11;
 void *value12;
 void *value0;
 void *value13;
 void *value14;
 void *value15;
 void *value16;
 void *value17;
 void *value18;
 void *value19;
 void *value20;
 void *value21;
 void *value22;
 void *value23;
 void *value24;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312);
 if(((unsigned int)(int)value0&0x400)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)value0|0x40);
 }
 value1=value0;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0x1)){
  value13=fn_800F94AC((void *)p0);
  value1=value13;
 }
 value2=value1;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0x2)){
  value14=fn_800F8EA8((void *)p0);
  value2=value14;
 }
 value3=value2;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0x4)){
  value15=fn_800F8FB0((void *)p0);
  value3=value15;
 }
 value4=value3;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0x8)){
  value16=fn_800F9604((void *)p0);
  value4=value16;
 }
 value5=value4;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0x10)){
  value17=fn_800F9134((void *)p0);
  value5=value17;
 }
 value6=value5;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0x20)){
  value18=fn_800F93F0((void *)p0);
  value6=value18;
 }
 value7=value6;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0x400)){
  value19=fn_800F84EC((void *)p0);
  value7=value19;
 }
 value8=value7;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0x200)){
  value20=fn_800F7DDC((void *)p0);
  value8=value20;
 }
 value9=value8;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0x100)){
  value21=fn_800F6DC0((void *)p0);
  value9=value21;
 }
 value10=value9;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0x800)){
  value22=fn_800FCA9C((void *)p0);
  value10=value22;
 }
 value11=value10;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0x40)){
  value23=fn_800FCEA8((void *)p0);
  value11=value23;
 }
 value12=value11;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0x80)){
  value24=fn_800FC984((void *)p0);
  value12=value24;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)0;
 return value12;
}
}
#pragma pop
