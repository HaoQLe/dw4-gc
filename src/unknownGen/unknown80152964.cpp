#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80135970();
void *fn_80152830();
void fn_8015286C();
void fn_80152A24();
void fn_801537E0();
extern char lbl_804A0204[];
extern char lbl_804A0210[];
extern void *lbl_80564560;
void fn_8015298C();
void *fn_80152A04();
}
extern "C" {
void fn_80152964(){
 fn_80066188((int)fn_8015298C);
}
void fn_8015298C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564560,(int)fn_801537E0,(int)fn_80135970,(int)fn_80152A04,(int)lbl_804A0210,40,(int)fn_8015286C,(int)fn_80152A24,0,(int)lbl_804A0204);
}
void *fn_80152A04(){return fn_80152830();}
}
#pragma pop
