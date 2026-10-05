#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80286F0C();
void fn_802B1AC8();
void *fn_802DFD84();
void fn_802DFDD0();
void fn_802E00E0();
extern char lbl_804209A8[];
extern char lbl_804D2850[];
extern char lbl_80535584[];
void fn_802E0044();
void *fn_802E00C0();
}
extern "C" {
void fn_802E001C(){
 fn_80066188((int)fn_802E0044);
}
void fn_802E0044(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535584,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802E00C0,(int)lbl_804209A8,72,(int)fn_802DFDD0,(int)fn_802E00E0,0,(int)lbl_804D2850);
}
void *fn_802E00C0(){return fn_802DFD84();}
}
#pragma pop
