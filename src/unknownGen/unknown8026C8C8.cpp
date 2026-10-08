#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80065D60(void *);
void fn_802697BC(void *,void *,void *,void *);
void *fn_8026D09C(void *);
void fn_80272D8C(void *,int);
void fn_80272E28(void *,int);
void *fn_80273120(void *,int);
void fn_802734C8(void *,void *,int);
extern void *lbl_80560F04;
extern void *lbl_80566040;
}
extern "C" {
void *fn_8026C8C8(int p0){
 void *value0;
 void *value1;
 void *value2;
 value0=fn_80273120((void *)p0,1);
 if(lbl_80566040){
  fn_80272E28((void *)p0,1);
  fn_802734C8((void *)p0,lbl_80566040,0);
  value1=fn_8026D09C((void *)p0);
 } else {
  value2=fn_80065D60(value0);
  if((int)(int)value2!=0){
   fn_802697BC((void *)p0,value0,value2,lbl_80560F04);
   fn_80272D8C((void *)p0,0);
   fn_802734C8((void *)p0,value2,(int)(int)(lbl_80560F04));
   return (void *)1;
  } else {
   return (void *)0;
  }
 }
 return value1;
}
}
#pragma pop
