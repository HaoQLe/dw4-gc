#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8012FC48();
void *fn_80131CD8();
void fn_80131D14();
void fn_80131E9C();
extern char lbl_8049BFA8[];
extern char lbl_8049BFB4[];
extern void *lbl_80563B2C;
void fn_80131E04();
void *fn_80131E7C();
}
extern "C" {
void fn_80131DDC(){
 fn_80066188((int)fn_80131E04);
}
void fn_80131E04(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B2C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80131E7C,(int)lbl_8049BFB4,24,(int)fn_80131D14,(int)fn_80131E9C,0,(int)lbl_8049BFA8);
}
void *fn_80131E7C(){return fn_80131CD8();}
}
#pragma pop
