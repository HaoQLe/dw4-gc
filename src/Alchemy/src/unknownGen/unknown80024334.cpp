#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_800241C0();
void fn_800241FC();
void fn_800243F4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_804633D4[];
extern char lbl_804633E4[];
extern void *lbl_80561538;
void fn_8002435C();
void *fn_800243D4();
}
extern "C" {
void fn_80024334(){
 fn_80066188((int)fn_8002435C);
}
void fn_8002435C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561538,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800243D4,(int)lbl_804633E4,44,(int)fn_800241FC,(int)fn_800243F4,0,(int)lbl_804633D4);
}
void *fn_800243D4(){return fn_800241C0();}
}
#pragma pop
