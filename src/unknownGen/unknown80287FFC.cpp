#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8021E03C(void *,void *,void *);
void *fn_8021E0A4(void *,void *,void *);
void *fn_80287D1C(void *,void *,void *,void *);
extern char lbl_804178F8[];
extern char lbl_8041790C[];
}
extern "C" {
void *fn_80287FFC(int p0,int p1,int p2,int p3){
 void *value0;
 void *value1;
 void *local0;
 value0=fn_80287D1C((void *)p0,(void *)p1,(void *)p2,&local0);
 if((unsigned char)(int)value0){
  value1=fn_8021E03C(local0,(void *)p3,lbl_804178F8);
  return value1;
 } else {
  return (void *)0;
 }
}
void *fn_80288050(int p0,int p1,int p2,int p3){
 void *value0;
 void *value1;
 void *local0;
 value0=fn_80287D1C((void *)p0,(void *)p1,(void *)p2,&local0);
 if((unsigned char)(int)value0){
  value1=fn_8021E0A4(local0,(void *)p3,lbl_8041790C);
  return value1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
