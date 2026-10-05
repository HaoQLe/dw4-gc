#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013E7A4();
void fn_8013E7E0();
void fn_8013E968();
void fn_80140664();
extern char lbl_8049DD54[];
extern char lbl_8055F890[8];
extern void *lbl_80563F74;
void fn_8013E8D4();
void *fn_8013E948();
}
extern "C" {
void fn_8013E8AC(){
 fn_80066188((int)fn_8013E8D4);
}
void fn_8013E8D4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F74,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013E948,(int)lbl_8049DD54,44,(int)fn_8013E7E0,(int)fn_8013E968,0,(int)lbl_8055F890);
}
void *fn_8013E948(){return fn_8013E7A4();}
}
#pragma pop
