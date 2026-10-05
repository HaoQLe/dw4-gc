#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002EC60();
void fn_8002EC9C();
void fn_8002F244();
void *fn_8002F724();
void fn_80032950();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80465478[];
extern char lbl_80465498[];
extern void *lbl_80561A04;
extern void *lbl_80561CAC;
void fn_8002F1A0();
void *fn_8002F21C();
void *fn_8002F23C();
}
extern "C" {
void fn_8002F178(){
 fn_80066188((int)fn_8002F1A0);
}
void fn_8002F1A0(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561A04,(int)fn_80032950,(int)fn_8002F23C,(int)fn_8002F21C,(int)lbl_80465498,308,(int)fn_8002EC9C,(int)fn_8002F244,(int)fn_8002F724,(int)lbl_80465478);
}
void *fn_8002F21C(){return fn_8002EC60();}
void *fn_8002F23C(){return lbl_80561CAC;}
}
#pragma pop
