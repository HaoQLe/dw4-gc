#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80135304();
void fn_80135340();
void fn_801356FC();
void fn_8013AF60();
extern char lbl_8049C8B8[];
extern void *lbl_80563C84;
extern void *lbl_80563C88;
extern void *lbl_80563E88;
void fn_801354F0();
void *fn_80135558();
void *fn_80135578();
}
extern "C" {
void fn_801354C8(){
 fn_80066188((int)fn_801354F0);
}
void fn_801354F0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C84,(int)fn_8013AF60,(int)fn_80135578,(int)fn_80135558,(int)lbl_8049C8B8,52,(int)fn_80135340,0,0,0);
}
void *fn_80135558(){return fn_80135304();}
void *fn_80135578(){return lbl_80563E88;}
void *fn_80135580(){
 if(!lbl_80563C88 || !(reinterpret_cast<unsigned int *>(lbl_80563C88)[0x24/4]&4)) fn_801356FC();
 return lbl_80563C88;
}
}
#pragma pop
