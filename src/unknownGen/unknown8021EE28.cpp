#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004155C(void *,void *,int);
void *fn_80041660(void *,int,int);
extern void *lbl_805659AC;
extern void *lbl_805659B0;
extern void *lbl_805659B4;
extern void *lbl_805659B8;
extern void *lbl_805659BC;
extern void *lbl_805659C0;
extern void *lbl_805659C4;
extern void *lbl_805659CC;
extern void *lbl_805659D0;
extern void *lbl_805659D4;
extern void *lbl_805659D8;
extern void *lbl_80565A08;
extern void *lbl_80565A60;
extern void *lbl_80565A70;
extern void *lbl_80565A90;
extern void *lbl_80565B08;
extern void *lbl_80565B2C;
}
extern "C" {
void *igHistogramBase_virtualB4(){return lbl_805659D8;}
void *igHistogramBase_virtual174(){return lbl_805659D4;}
void *igHistogramBase_virtual234(){return lbl_805659D0;}
void *igHistogramBase_virtual2F4(){return lbl_805659CC;}
void *igLongStack_virtual58(){return lbl_805659C4;}
void *fn_8021EE50(){return lbl_805659C0;}
void *fn_8021EE58(){return lbl_805659BC;}
void *fn_8021EE60(){return lbl_805659B8;}
void *fn_8021EE68(){return lbl_805659B4;}
void *fn_8021EE70(){return lbl_805659B0;}
void *fn_8021EE78(){return lbl_805659AC;}
void *igFloatHistogram_virtual2C(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12)>=2){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+8)=(void *)2;
  return value0;
 } else {
  value1=fn_80041660(value0,2,4);
  return value1;
 }
}
void *igIntHistogram_virtual2C(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12)>=2){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+8)=(void *)2;
  return value0;
 } else {
  value1=fn_80041660(value0,2,4);
  return value1;
 }
}
void *igBoolObject_virtual184(){return lbl_80565B2C;}
void *igFloatObject_virtual184(){return lbl_80565A90;}
void *igIntObject_virtual184(){return lbl_80565A70;}
void *igNonRefCountedMatrixObjectList_virtual60(){return lbl_80565A60;}
void *fn_8021EF28(){return lbl_805659C0;}
void *fn_8021EF30(){return lbl_805659B4;}
void *igBoolObject_virtual120(){return lbl_80565B2C;}
void *igDataPumpList_virtual60(){return lbl_80565B08;}
void *igFloatObject_virtual120(){return lbl_80565A90;}
void *igIntObject_virtual120(){return lbl_80565A70;}
void *igMatrixObjectList_virtual60(){return lbl_80565A60;}
void *igUnresolvedSymbolList_virtual60(){return lbl_80565A08;}
void *fn_8021EF68(){return lbl_805659C0;}
void *fn_8021EF70(){return lbl_805659B4;}
void igHistogramBase_virtual104(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  fn_8004155C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),4);
  return;
 } else {
  return;
 }
}
void igHistogramBase_virtual164(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  fn_8004155C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),1);
  return;
 } else {
  return;
 }
}
void igHistogramBase_virtual224(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  fn_8004155C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),8);
  return;
 } else {
  return;
 }
}
void igHistogramBase_virtual2E4(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  fn_8004155C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),8);
  return;
 } else {
  return;
 }
}
void igLongStack_virtual48(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  fn_8004155C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),8);
  return;
 } else {
  return;
 }
}
void igMatrixStack_virtual48(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  fn_8004155C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),64);
  return;
 } else {
  return;
 }
}
}
#pragma pop
