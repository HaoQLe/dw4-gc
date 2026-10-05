#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80130118();
void fn_80142EA8();
extern char lbl_8049BCAC[];
extern void *lbl_80563AA4;
extern void *lbl_80563AA8;
extern void *lbl_805640A4;
void *fn_8012FF34();
void fn_8012FF70();
void fn_8012FF98();
void *fn_8012FFFC();
void *fn_8013001C();
}
extern "C" {
void *fn_8012FF34(){
 if(!lbl_80563AA4 || !(reinterpret_cast<unsigned int *>(lbl_80563AA4)[0x24/4]&4)) fn_8012FF70();
 return lbl_80563AA4;
}
void fn_8012FF70(){
 fn_80066188((int)fn_8012FF98);
}
void fn_8012FF98(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563AA4,(int)fn_80142EA8,(int)fn_8013001C,(int)fn_8012FFFC,(int)lbl_8049BCAC,32,0,0,0,0);
}
void *fn_8012FFFC(){return fn_8012FF34();}
void *fn_8013001C(){return lbl_805640A4;}
void *fn_80130024(){
 if(!lbl_80563AA8 || !(reinterpret_cast<unsigned int *>(lbl_80563AA8)[0x24/4]&4)) fn_80130118();
 return lbl_80563AA8;
}
}
#pragma pop
