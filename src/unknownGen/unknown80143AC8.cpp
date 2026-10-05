#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_8014394C();
void fn_80143988();
void fn_80143B80();
extern char lbl_8049E438[];
extern void *lbl_805640D0;
void fn_80143AF0();
void *fn_80143B60();
}
extern "C" {
void fn_80143AC8(){
 fn_80066188((int)fn_80143AF0);
}
void fn_80143AF0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805640D0,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80143B60,(int)lbl_8049E438,48,(int)fn_80143988,(int)fn_80143B80,0,0);
}
void *fn_80143B60(){return fn_8014394C();}
}
#pragma pop
