#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010DB2C();
void fn_801119C4();
void *fn_801131AC();
void fn_801131E8();
void fn_80113344();
extern char lbl_804953D0[];
extern char lbl_8055F1A4[8];
extern void *lbl_805637C8;
void fn_801132B0();
void *fn_80113324();
}
extern "C" {
void fn_80113288(){
 fn_80066188((int)fn_801132B0);
}
void fn_801132B0(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637C8,(int)fn_801119C4,(int)fn_8010DB2C,(int)fn_80113324,(int)lbl_804953D0,44,(int)fn_801131E8,(int)fn_80113344,0,(int)lbl_8055F1A4);
}
void *fn_80113324(){return fn_801131AC();}
}
#pragma pop
