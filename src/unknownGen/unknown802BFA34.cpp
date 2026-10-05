#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BF994();
void fn_802BF9E0();
void *fn_802BFAE8();
void fn_802BFEF4();
extern char lbl_8041E22C[];
extern char lbl_805349BC[];
void fn_802BFA5C();
void *fn_802BFAC8();
}
extern "C" {
void fn_802BFA34(){
 fn_80066188((int)fn_802BFA5C);
}
void fn_802BFA5C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349BC,(int)fn_802BFEF4,(int)fn_802BFAE8,(int)fn_802BFAC8,(int)lbl_8041E22C,24,(int)fn_802BF9E0,0,0,0);
}
void *fn_802BFAC8(){return fn_802BF994();}
}
#pragma pop
