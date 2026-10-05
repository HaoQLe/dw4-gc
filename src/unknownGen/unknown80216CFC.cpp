#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_80216620();
void *fn_80216C38();
void fn_80216C74();
void fn_80216DB8();
extern char lbl_804BA348[];
extern char lbl_80560B98[8];
extern void *lbl_805659EC;
void fn_80216D24();
void *fn_80216D98();
}
extern "C" {
void fn_80216CFC(){
 fn_80066188((int)fn_80216D24);
}
void fn_80216D24(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_805659EC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80216D98,(int)lbl_804BA348,16,(int)fn_80216C74,(int)fn_80216DB8,0,(int)lbl_80560B98);
}
void *fn_80216D98(){return fn_80216C38();}
}
#pragma pop
