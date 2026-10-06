#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80273450(void *,void *);
void fn_80273934(void *,void *);
void fn_802742EC(void *,void *,int);
void fn_80275F78(void *);
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
}
#pragma pop
