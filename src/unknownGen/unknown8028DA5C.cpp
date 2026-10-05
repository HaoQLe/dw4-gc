#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8028C93C();
void *fn_8028D7D0();
void fn_8028D80C();
void fn_8028DB1C();
extern char lbl_804CC904[];
extern char lbl_804CC914[];
extern void *lbl_80566118;
void fn_8028DA84();
void *fn_8028DAFC();
}
extern "C" {
void fn_8028DA5C(){
 fn_80066188((int)fn_8028DA84);
}
void fn_8028DA84(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_80566118,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8028DAFC,(int)lbl_804CC914,76,(int)fn_8028D80C,(int)fn_8028DB1C,0,(int)lbl_804CC904);
}
void *fn_8028DAFC(){return fn_8028D7D0();}
}
#pragma pop
