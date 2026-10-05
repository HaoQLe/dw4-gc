#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801376D0();
void *fn_80137710();
void fn_8013774C();
void fn_80137BB8();
void fn_80137D08();
extern char lbl_8049CD94[];
extern void *lbl_80563D34;
extern void *lbl_80563D38;
void fn_80137918();
void *fn_80137980();
}
extern "C" {
void fn_801378F0(){
 fn_80066188((int)fn_80137918);
}
void fn_80137918(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D34,(int)fn_80137D08,(int)fn_801376D0,(int)fn_80137980,(int)lbl_8049CD94,80,(int)fn_8013774C,0,0,0);
}
void *fn_80137980(){return fn_80137710();}
void *fn_801379A0(void *object){
 fn_80137BB8();
 return fn_8006546C(lbl_80563D38,object);
}
void *fn_801379D8(){
 if(!lbl_80563D38 || !(reinterpret_cast<unsigned int *>(lbl_80563D38)[0x24/4]&4)) fn_80137BB8();
 return lbl_80563D38;
}
}
#pragma pop
