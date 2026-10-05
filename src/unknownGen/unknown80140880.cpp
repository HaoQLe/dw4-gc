#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013496C();
void fn_80140974();
void fn_80145C0C();
extern char lbl_8049DFC4[];
extern char lbl_8055F8F8[8];
extern void *lbl_80563FF8;
void *fn_80140880();
void fn_801408BC();
void fn_801408E4();
void *fn_80140954();
}
extern "C" {
void *fn_80140880(){
 if(!lbl_80563FF8 || !(reinterpret_cast<unsigned int *>(lbl_80563FF8)[0x24/4]&4)) fn_801408BC();
 return lbl_80563FF8;
}
void fn_801408BC(){
 fn_80066188((int)fn_801408E4);
}
void fn_801408E4(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563FF8,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_80140954,(int)lbl_8049DFC4,36,0,(int)fn_80140974,0,(int)lbl_8055F8F8);
}
void *fn_80140954(){return fn_80140880();}
}
#pragma pop
