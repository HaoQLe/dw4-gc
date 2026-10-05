#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_801361D4();
void fn_80136210();
void fn_80136554();
void fn_8013B97C();
extern char lbl_8049C9FC[];
extern void *lbl_80563CC0;
extern void *lbl_80563CC4;
void fn_80136328();
void *fn_80136390();
}
extern "C" {
void fn_80136300(){
 fn_80066188((int)fn_80136328);
}
void fn_80136328(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563CC0,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80136390,(int)lbl_8049C9FC,40,(int)fn_80136210,0,0,0);
}
void *fn_80136390(){return fn_801361D4();}
void *fn_801363B0(){
 if(!lbl_80563CC4 || !(reinterpret_cast<unsigned int *>(lbl_80563CC4)[0x24/4]&4)) fn_80136554();
 return lbl_80563CC4;
}
}
#pragma pop
