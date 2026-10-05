#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801B9330();
void fn_801B936C();
void fn_801B94F4();
extern char lbl_804AE734[];
extern char lbl_804AE740[];
extern void *lbl_80564CBC;
void fn_801B945C();
void *fn_801B94D4();
}
extern "C" {
void fn_801B9434(){
 fn_80066188((int)fn_801B945C);
}
void fn_801B945C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564CBC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801B94D4,(int)lbl_804AE740,64,(int)fn_801B936C,(int)fn_801B94F4,0,(int)lbl_804AE734);
}
void *fn_801B94D4(){return fn_801B9330();}
}
#pragma pop
