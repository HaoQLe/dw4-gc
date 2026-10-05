#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_801363B0();
void fn_801363EC();
void fn_80136610();
void fn_8013B97C();
extern char lbl_8049CA18[];
extern char lbl_8055F63C[8];
extern void *lbl_80563CC4;
void fn_8013657C();
void *fn_801365F0();
}
extern "C" {
void fn_80136554(){
 fn_80066188((int)fn_8013657C);
}
void fn_8013657C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563CC4,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_801365F0,(int)lbl_8049CA18,48,(int)fn_801363EC,(int)fn_80136610,0,(int)lbl_8055F63C);
}
void *fn_801365F0(){return fn_801363B0();}
}
#pragma pop
