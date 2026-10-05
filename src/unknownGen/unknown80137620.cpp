#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80137440();
void fn_8013747C();
void fn_801378F0();
void fn_80137D08();
extern char lbl_8049CD7C[];
extern void *lbl_80563D30;
extern void *lbl_80563D34;
extern void *lbl_80563D3C;
void fn_80137648();
void *fn_801376B0();
void *fn_801376D0();
}
extern "C" {
void fn_80137620(){
 fn_80066188((int)fn_80137648);
}
void fn_80137648(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D30,(int)fn_80137D08,(int)fn_801376D0,(int)fn_801376B0,(int)lbl_8049CD7C,80,(int)fn_8013747C,0,0,0);
}
void *fn_801376B0(){return fn_80137440();}
void *fn_801376D0(){return lbl_80563D3C;}
void *fn_801376D8(void *object){
 fn_801378F0();
 return fn_8006546C(lbl_80563D34,object);
}
void *fn_80137710(){
 if(!lbl_80563D34 || !(reinterpret_cast<unsigned int *>(lbl_80563D34)[0x24/4]&4)) fn_801378F0();
 return lbl_80563D34;
}
}
#pragma pop
