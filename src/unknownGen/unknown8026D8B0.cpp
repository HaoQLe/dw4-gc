#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8026D8A4();
void fn_802727D0(void *,void *);
void *fn_802727DC(void *);
void fn_80272D8C(void *,int);
void fn_80272E9C(void *,int);
void *fn_80272F04(void *,int);
void fn_80273450(void *,void *);
void fn_8027367C(void *,int);
void fn_80273980(void *,int);
void fn_802739F0(void *,int);
extern char lbl_80560F40[5];
extern char lbl_80566048[1];
}
extern "C" {
void *fn_8026D8B0(int p0){
 void *value0;
 void *value1;
 void *local0;
 fn_80272E9C((void *)p0,2);
 fn_8027367C((void *)p0,1);
 value0=fn_80272F04((void *)p0,-1);
 if(((int)(int)value0==1&&(fn_80272D8C((void *)p0,-2),fn_80273450((void *)p0,lbl_80560F40),fn_8027367C((void *)p0,1),value1=fn_802727DC(&local0),fn_802727D0((void *)fn_8026D8A4,(void *)p0),*reinterpret_cast<unsigned char *>((lbl_80566048+0))=0,fn_80272E9C((void *)p0,2),fn_80272E9C((void *)p0,3),fn_80273980((void *)p0,-3),fn_802727D0(value1,local0),!(void *)(int)*reinterpret_cast<unsigned char *>((lbl_80566048+0))))){
  return (void *)0;
 } else {
  fn_80272E9C((void *)p0,2);
  fn_80272E9C((void *)p0,3);
  fn_802739F0((void *)p0,1);
  return (void *)0;
 }
}
}
#pragma pop
