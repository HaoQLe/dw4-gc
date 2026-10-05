#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B0AA4();
void fn_801B0AE0();
void fn_801B0C98();
void *fn_801B0D2C();
extern char lbl_804AC9DC[];
extern char lbl_80560274[8];
extern void *lbl_805648D4;
void fn_801B0C00();
void *fn_801B0C78();
}
extern "C" {
void fn_801B0BD8(){
 fn_80066188((int)fn_801B0C00);
}
void fn_801B0C00(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648D4,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_801B0C78,(int)lbl_804AC9DC,24,(int)fn_801B0AE0,(int)fn_801B0C98,(int)fn_801B0D2C,(int)lbl_80560274);
}
void *fn_801B0C78(){return fn_801B0AA4();}
}
#pragma pop
