#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void fn_8002A6D8();
void fn_800379CC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80467774[];
extern char lbl_80467780[];
extern void *lbl_80561E10;
void *fn_800378D4();
void fn_80037910();
void fn_80037938();
void *fn_800379AC();
}
extern "C" {
void *fn_800378D4(){
 if(!lbl_80561E10 || !(reinterpret_cast<unsigned int *>(lbl_80561E10)[0x24/4]&4)) fn_80037910();
 return lbl_80561E10;
}
void fn_80037910(){
 fn_80066188((int)fn_80037938);
}
void fn_80037938(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_80561E10,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_800379AC,(int)lbl_80467780,56,0,(int)fn_800379CC,0,(int)lbl_80467774);
}
void *fn_800379AC(){return fn_800378D4();}
}
#pragma pop
