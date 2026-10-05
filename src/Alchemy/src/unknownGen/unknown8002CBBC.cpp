#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_8002CAF8();
void fn_8002CB34();
void fn_8002CC78();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_8046513C[];
extern char lbl_8055D32C[8];
extern void *lbl_80561934;
void fn_8002CBE4();
void *fn_8002CC58();
}
extern "C" {
void fn_8002CBBC(){
 fn_80066188((int)fn_8002CBE4);
}
void fn_8002CBE4(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561934,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8002CC58,(int)lbl_8046513C,24,(int)fn_8002CB34,(int)fn_8002CC78,0,(int)lbl_8055D32C);
}
void *fn_8002CC58(){return fn_8002CAF8();}
}
#pragma pop
