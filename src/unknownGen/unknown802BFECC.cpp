#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802BFE80();
void fn_802BFF84();
extern char lbl_8041E278[];
extern char lbl_805349D8[];
void fn_802BFEF4();
void *fn_802BFF64();
}
extern "C" {
void fn_802BFECC(){
 fn_80066188((int)fn_802BFEF4);
}
void fn_802BFEF4(){
 fn_802B1AC8();
 fn_80066204(1,(int)lbl_805349D8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802BFF64,(int)lbl_8041E278,24,0,(int)fn_802BFF84,0,0);
}
void *fn_802BFF64(){return fn_802BFE80();}
}
#pragma pop
