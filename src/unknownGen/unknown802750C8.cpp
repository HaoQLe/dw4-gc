#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80272D74(void *);
void fn_80272D8C(void *,int);
void *fn_80273330(void *);
void fn_80273450(void *,void *);
void fn_802734C8(void *,int,int);
void *fn_80273D30(void *,int);
void fn_80274078(void *,int,int);
extern char lbl_804164F0[];
}
extern "C" {
void *fn_802750C8(int p0){
 void *value0;
 fn_80274078((void *)p0,1,4);
 fn_80272D8C((void *)p0,2);
 value0=fn_80273D30((void *)p0,1);
 if((int)(int)value0!=0){
  return (void *)2;
 } else {
  fn_80273330((void *)p0);
  return (void *)1;
 }
}
void *fn_80275130(int p0,int p1,int p2){
 void *value0;
 if((int)p1==0){
  value0=fn_80272D74((void *)p0);
  if((int)((int)value0-p2)>0){
   return (void *)(int)((int)value0-p2);
  } else {
   fn_802734C8((void *)p0,0,0);
   return (void *)1;
  }
 } else {
  fn_80273330((void *)p0);
  fn_80273450((void *)p0,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804164F0)+(p1<<2)));
 }
 return (void *)2;
}
}
#pragma pop
