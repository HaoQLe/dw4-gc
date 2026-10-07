#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801B41E8();
void fn_802B1AC8();
void *fn_802E8324();
void fn_802E8370();
void *fn_802E86B4();
void fn_802E86C4();
extern char lbl_804213E8[];
extern char lbl_804D3358[];
extern char lbl_80535888[];
void fn_802E8618();
void *fn_802E8694();
}
extern "C" {
void fn_802E85F0(){
 fn_80066188((int)fn_802E8618);
}
void fn_802E8618(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535888,(int)fn_801B41E8,(int)fn_802E86B4,(int)fn_802E8694,(int)lbl_804213E8,1024,(int)fn_802E8370,(int)fn_802E86C4,0,(int)lbl_804D3358);
}
void *fn_802E8694(){return fn_802E8324();}
}
#pragma pop
