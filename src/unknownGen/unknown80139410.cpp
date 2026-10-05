#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8012FC48();
void *fn_8013929C();
void fn_801392D8();
void fn_801394D0();
extern char lbl_8049D394[];
extern char lbl_8049D3A4[];
extern void *lbl_80563DDC;
void fn_80139438();
void *fn_801394B0();
}
extern "C" {
void fn_80139410(){
 fn_80066188((int)fn_80139438);
}
void fn_80139438(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DDC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801394B0,(int)lbl_8049D3A4,28,(int)fn_801392D8,(int)fn_801394D0,0,(int)lbl_8049D394);
}
void *fn_801394B0(){return fn_8013929C();}
}
#pragma pop
