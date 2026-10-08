#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80188B84(void *,void *);
void fn_80188C0C(void *,int);
void fn_80188DA4(void *,void *);
}
extern "C" {
void fn_80188EC0(int p0,int p1){
 void *local0;
 fn_80188B84(&local0,(void *)p1);
 fn_80188DA4((void *)p0,&local0);
 fn_80188C0C(&local0,-1);
}
}
#pragma pop
