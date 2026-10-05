#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8012FC48();
void *fn_801314A8();
void fn_801314E4();
void fn_80131628();
extern char lbl_8049BEBC[];
extern char lbl_8055F504[8];
extern void *lbl_80563B08;
void fn_80131594();
void *fn_80131608();
}
extern "C" {
void fn_8013156C(){
 fn_80066188((int)fn_80131594);
}
void fn_80131594(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B08,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80131608,(int)lbl_8049BEBC,12,(int)fn_801314E4,(int)fn_80131628,0,(int)lbl_8055F504);
}
void *fn_80131608(){return fn_801314A8();}
}
#pragma pop
