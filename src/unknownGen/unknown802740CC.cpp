#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80272F04(void *,void *);
void fn_80273F10(void *,void *,void *);
extern char lbl_804C9C20[];
}
extern "C" {
void fn_802740CC(int p0,int p1){
 void *value0;
 value0=fn_80272F04((void *)p0,(void *)p1);
 if((int)(int)value0==-1){
  fn_80273F10((void *)p0,(void *)p1,lbl_804C9C20);
  return;
 } else {
  return;
 }
}
}
#pragma pop
