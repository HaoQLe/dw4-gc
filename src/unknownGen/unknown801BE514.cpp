#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801B073C();
void *fn_801BE3C4();
void fn_801BE400();
void fn_801BE5D8();
extern char lbl_804AF354[];
extern char lbl_80560594[8];
extern void *lbl_805648BC;
extern void *lbl_80564E7C;
void fn_801BE53C();
void *fn_801BE5B0();
void *fn_801BE5D0();
}
extern "C" {
void fn_801BE514(){
 fn_80066188((int)fn_801BE53C);
}
void fn_801BE53C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564E7C,(int)fn_801B073C,(int)fn_801BE5D0,(int)fn_801BE5B0,(int)lbl_804AF354,52,(int)fn_801BE400,(int)fn_801BE5D8,0,(int)lbl_80560594);
}
void *fn_801BE5B0(){return fn_801BE3C4();}
void *fn_801BE5D0(){return lbl_805648BC;}
}
#pragma pop
