#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80216620();
void *fn_80219048();
void fn_80219084();
void fn_80219238();
extern char lbl_804BA93C[];
extern char lbl_80560C78[8];
extern void *lbl_80565AF4;
void fn_802191A4();
void *fn_80219218();
}
extern "C" {
void fn_8021917C(){
 fn_80066188((int)fn_802191A4);
}
void fn_802191A4(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565AF4,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_80219218,(int)lbl_804BA93C,24,(int)fn_80219084,(int)fn_80219238,0,(int)lbl_80560C78);
}
void *fn_80219218(){return fn_80219048();}
}
#pragma pop
