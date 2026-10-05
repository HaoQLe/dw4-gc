#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_800260C0();
void *fn_80026160();
void fn_8003B274();
void fn_8003B3BC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_804687A8[];
extern void *lbl_805615EC;
extern void *lbl_805620A0;
void fn_8003B344();
void *fn_8003B3B4();
}
extern "C" {
void fn_8003B31C(){
 fn_80066188((int)fn_8003B344);
}
void fn_8003B344(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805620A0,(int)fn_800260C0,(int)fn_8003B3B4,(int)fn_80026160,(int)lbl_804687A8,36,(int)fn_8003B274,(int)fn_8003B3BC,0,0);
}
void *fn_8003B3B4(){return lbl_805615EC;}
}
#pragma pop
