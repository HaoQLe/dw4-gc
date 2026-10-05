#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void *fn_80148B28();
void fn_80148B64();
void fn_80148D4C();
extern char lbl_8049EE1C[];
extern void *lbl_80564260;
void fn_80148CBC();
void *fn_80148D2C();
}
extern "C" {
void fn_80148C94(){
 fn_80066188((int)fn_80148CBC);
}
void fn_80148CBC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564260,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80148D2C,(int)lbl_8049EE1C,48,(int)fn_80148B64,(int)fn_80148D4C,0,0);
}
void *fn_80148D2C(){return fn_80148B28();}
}
#pragma pop
