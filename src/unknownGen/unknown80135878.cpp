#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80135978();
void fn_801537E0();
extern char lbl_8049C8E4[];
extern char lbl_8049C8F0[];
extern void *lbl_80563C90;
extern void *lbl_805645A0;
void *fn_80135878();
void fn_801358B4();
void fn_801358DC();
void *fn_80135950();
void *fn_80135970();
}
extern "C" {
void *fn_80135878(){
 if(!lbl_80563C90 || !(reinterpret_cast<unsigned int *>(lbl_80563C90)[0x24/4]&4)) fn_801358B4();
 return lbl_80563C90;
}
void fn_801358B4(){
 fn_80066188((int)fn_801358DC);
}
void fn_801358DC(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563C90,(int)fn_801537E0,(int)fn_80135970,(int)fn_80135950,(int)lbl_8049C8F0,44,0,(int)fn_80135978,0,(int)lbl_8049C8E4);
}
void *fn_80135950(){return fn_80135878();}
void *fn_80135970(){return lbl_805645A0;}
}
#pragma pop
