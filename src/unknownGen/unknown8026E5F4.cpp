#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8026E590(void *,void *,void *,void *,void *);
extern char lbl_804C9690[];
extern char lbl_804C969C[];
}
extern "C" {
void fn_8026E5F4(int p0,int p1,int p2,int p3,int p4){
 fn_8026E590((void *)p0,(void *)p1,(void *)p2,(void *)p3,lbl_804C9690);
 fn_8026E590((void *)p0,(void *)p1,(void *)p2,(void *)p4,lbl_804C969C);
}
}
#pragma pop
