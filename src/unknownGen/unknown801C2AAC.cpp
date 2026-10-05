#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801C2908();
void fn_801C2944();
void fn_801C2B70();
void fn_801C2DAC();
extern char lbl_804AFF00[];
extern char lbl_805606DC[8];
extern void *lbl_80565020;
extern void *lbl_80565030;
void fn_801C2AD4();
void *fn_801C2B48();
void *fn_801C2B68();
}
extern "C" {
void fn_801C2AAC(){
 fn_80066188((int)fn_801C2AD4);
}
void fn_801C2AD4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565020,(int)fn_801C2DAC,(int)fn_801C2B68,(int)fn_801C2B48,(int)lbl_804AFF00,80,(int)fn_801C2944,(int)fn_801C2B70,0,(int)lbl_805606DC);
}
void *fn_801C2B48(){return fn_801C2908();}
void *fn_801C2B68(){return lbl_80565030;}
}
#pragma pop
