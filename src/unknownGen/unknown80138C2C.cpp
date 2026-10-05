#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_80138A70();
void fn_80138AAC();
void fn_80138CE4();
void fn_8013A878();
extern char lbl_8049D2AC[];
extern void *lbl_80563DB8;
void fn_80138C54();
void *fn_80138CC4();
}
extern "C" {
void fn_80138C2C(){
 fn_80066188((int)fn_80138C54);
}
void fn_80138C54(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DB8,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80138CC4,(int)lbl_8049D2AC,56,(int)fn_80138AAC,(int)fn_80138CE4,0,0);
}
void *fn_80138CC4(){return fn_80138A70();}
}
#pragma pop
