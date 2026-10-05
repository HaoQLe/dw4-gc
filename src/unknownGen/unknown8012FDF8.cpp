#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FC7C();
void fn_8012FCB8();
void fn_8012FEB8();
void fn_8013A878();
extern char lbl_8049BC80[];
extern void *lbl_80563A9C;
extern void *lbl_80563E54;
void fn_8012FE20();
void *fn_8012FE90();
void *fn_8012FEB0();
}
extern "C" {
void fn_8012FDF8(){
 fn_80066188((int)fn_8012FE20);
}
void fn_8012FE20(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563A9C,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8012FE90,(int)lbl_8049BC80,48,(int)fn_8012FCB8,(int)fn_8012FEB8,0,0);
}
void *fn_8012FE90(){return fn_8012FC7C();}
void *fn_8012FEB0(){return lbl_80563E54;}
}
#pragma pop
