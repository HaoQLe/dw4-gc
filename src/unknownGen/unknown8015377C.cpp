#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013496C();
void fn_80145C0C();
extern char lbl_804A02B0[];
extern void *lbl_805645A0;
void *fn_8015377C();
void fn_801537B8();
void fn_801537E0();
void *fn_80153844();
}
extern "C" {
void *fn_8015377C(){
 if(!lbl_805645A0 || !(reinterpret_cast<unsigned int *>(lbl_805645A0)[0x24/4]&4)) fn_801537B8();
 return lbl_805645A0;
}
void fn_801537B8(){
 fn_80066188((int)fn_801537E0);
}
void fn_801537E0(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805645A0,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_80153844,(int)lbl_804A02B0,32,0,0,0,0);
}
void *fn_80153844(){return fn_8015377C();}
void fn_80153864(){}
}
#pragma pop
