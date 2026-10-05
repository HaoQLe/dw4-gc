#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_80147C64();
void fn_80147CA0();
void fn_80147ED8();
extern char lbl_8049ED68[];
extern void *lbl_8056423C;
void fn_80147E48();
void *fn_80147EB8();
}
extern "C" {
void fn_80147E20(){
 fn_80066188((int)fn_80147E48);
}
void fn_80147E48(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056423C,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80147EB8,(int)lbl_8049ED68,48,(int)fn_80147CA0,(int)fn_80147ED8,0,0);
}
void *fn_80147EB8(){return fn_80147C64();}
}
#pragma pop
