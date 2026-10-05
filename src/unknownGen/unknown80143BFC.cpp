#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8012FC48();
void fn_80143F0C();
extern char lbl_8049E454[];
extern void *lbl_805640D8;
extern void *lbl_805640DC;
void *fn_80143BFC();
void fn_80143C38();
void fn_80143C60();
void *fn_80143CC4();
}
extern "C" {
void *fn_80143BFC(){
 if(!lbl_805640D8 || !(reinterpret_cast<unsigned int *>(lbl_805640D8)[0x24/4]&4)) fn_80143C38();
 return lbl_805640D8;
}
void fn_80143C38(){
 fn_80066188((int)fn_80143C60);
}
void fn_80143C60(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805640D8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80143CC4,(int)lbl_8049E454,8,0,0,0,0);
}
void *fn_80143CC4(){return fn_80143BFC();}
void *fn_80143CE4(void *object){
 fn_80143F0C();
 return fn_8006546C(lbl_805640DC,object);
}
void *fn_80143D1C(){
 if(!lbl_805640DC || !(reinterpret_cast<unsigned int *>(lbl_805640DC)[0x24/4]&4)) fn_80143F0C();
 return lbl_805640DC;
}
}
#pragma pop
