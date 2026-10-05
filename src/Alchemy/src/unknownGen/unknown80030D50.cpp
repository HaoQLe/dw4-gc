#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80030C8C();
void fn_80030CC8();
void fn_80030E10();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_8046677C[];
extern char lbl_8046679C[];
extern void *lbl_80561BA4;
void fn_80030D78();
void *fn_80030DF0();
}
extern "C" {
void fn_80030D50(){
 fn_80066188((int)fn_80030D78);
}
void fn_80030D78(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561BA4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80030DF0,(int)lbl_8046679C,9520,(int)fn_80030CC8,(int)fn_80030E10,0,(int)lbl_8046677C);
}
void *fn_80030DF0(){return fn_80030C8C();}
}
#pragma pop
