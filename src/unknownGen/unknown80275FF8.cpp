#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80273450(void *,void *);
void fn_80273934(void *,void *);
void fn_802742EC(void *,void *,int);
void fn_80275F78(void *);
void fn_802799FC(void *,void *,void *);
extern char lbl_80416528[];
extern char lbl_804C9F3C[];
extern char lbl_804C9F48[];
}
extern "C" {
void fn_80275FF8(int p0){
 fn_802742EC((void *)p0,lbl_80416528,33);
 fn_80273450((void *)p0,lbl_804C9F3C);
 fn_80273934((void *)p0,lbl_804C9F48);
 fn_80275F78((void *)p0);
}
void fn_80276058(int p0,int p1){
 fn_802799FC((void *)p0,(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
}
}
#pragma pop
