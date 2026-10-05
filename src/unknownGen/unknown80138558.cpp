#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_8013830C();
void fn_80138348();
void fn_80138618();
void fn_8013B97C();
extern char lbl_8049D0D4[];
extern char lbl_8049D0E8[];
extern void *lbl_80563D94;
void fn_80138580();
void *fn_801385F8();
}
extern "C" {
void fn_80138558(){
 fn_80066188((int)fn_80138580);
}
void fn_80138580(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D94,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_801385F8,(int)lbl_8049D0E8,60,(int)fn_80138348,(int)fn_80138618,0,(int)lbl_8049D0D4);
}
void *fn_801385F8(){return fn_8013830C();}
}
#pragma pop
