#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80272F60(void *,void *);
float fn_802730B4(void *,void *);
void fn_80273F98(void *,void *,int);
extern char lbl_805671A0[8];
}
extern "C" {
float fn_80274214(int p0,int p1){
 float value0;
 void *value1;
 value0=fn_802730B4((void *)p0,(void *)p1);
 if((*reinterpret_cast<double *>((lbl_805671A0+0))==value0)){
  value1=fn_80272F60((void *)p0,(void *)p1);
  if((int)(int)value1==0){
   fn_80273F98((void *)p0,(void *)p1,2);
  }
 }
 return value0;
}
}
#pragma pop
