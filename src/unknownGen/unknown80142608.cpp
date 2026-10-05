#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void *fn_80142464();
void fn_801424A0();
void fn_801426C4();
extern char lbl_8049E264[];
extern char lbl_8055F968[8];
extern void *lbl_8056407C;
void fn_80142630();
void *fn_801426A4();
}
extern "C" {
void fn_80142608(){
 fn_80066188((int)fn_80142630);
}
void fn_80142630(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056407C,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_801426A4,(int)lbl_8049E264,48,(int)fn_801424A0,(int)fn_801426C4,0,(int)lbl_8055F968);
}
void *fn_801426A4(){return fn_80142464();}
}
#pragma pop
