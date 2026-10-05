#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B86E0();
void fn_802DEA84();
void *fn_802DFB34();
void fn_802DFB80();
extern char lbl_80420998[];
extern char lbl_80535580[];
void fn_802DFC64();
void *fn_802DFCD0();
}
extern "C" {
void fn_802DFC3C(){
 fn_80066188((int)fn_802DFC64);
}
void fn_802DFC64(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535580,(int)fn_802B86E0,(int)fn_802DEA84,(int)fn_802DFCD0,(int)lbl_80420998,24,(int)fn_802DFB80,0,0,0);
}
void *fn_802DFCD0(){return fn_802DFB34();}
}
#pragma pop
