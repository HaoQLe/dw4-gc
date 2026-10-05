#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8010CBD4();
void *fn_8010F760();
void fn_8010F79C();
void fn_8010F8E0();
extern char lbl_80494B04[];
extern char lbl_8055F02C[8];
extern void *lbl_8056365C;
void fn_8010F84C();
void *fn_8010F8C0();
}
extern "C" {
void fn_8010F824(){
 fn_80066188((int)fn_8010F84C);
}
void fn_8010F84C(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056365C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8010F8C0,(int)lbl_80494B04,20,(int)fn_8010F79C,(int)fn_8010F8E0,0,(int)lbl_8055F02C);
}
void *fn_8010F8C0(){return fn_8010F760();}
}
#pragma pop
