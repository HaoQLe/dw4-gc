#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802DDA04();
void fn_802DDA50();
void fn_802DDE38();
extern char lbl_80420688[];
extern char lbl_804D24CC[];
extern char lbl_80535484[];
void fn_802DDD9C();
void *fn_802DDE18();
}
extern "C" {
void fn_802DDD74(){
 fn_80066188((int)fn_802DDD9C);
}
void fn_802DDD9C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535484,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802DDE18,(int)lbl_80420688,56,(int)fn_802DDA50,(int)fn_802DDE38,0,(int)lbl_804D24CC);
}
void *fn_802DDE18(){return fn_802DDA04();}
}
#pragma pop
