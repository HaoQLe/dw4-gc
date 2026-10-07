#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8027998C(void *,void *,void *);
extern char lbl_804CA390[];
extern char lbl_8056114C[7];
void sprintf(void *,...);
}
extern "C" {
void fn_80279AC0(int p0,int p1){
 void *local0;
 sprintf(&local0,lbl_8056114C,(void *)p1);
 fn_8027998C((void *)p0,lbl_804CA390,&local0);
}
}
#pragma pop
