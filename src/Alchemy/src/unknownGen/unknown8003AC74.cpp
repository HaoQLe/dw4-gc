#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80027BE4();
void *fn_80027D08();
void fn_8003AB24();
void fn_8003AD18();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_804685A0[];
extern char lbl_8055D700[8];
extern void *lbl_805616A8;
extern void *lbl_80562048;
void fn_8003AC9C();
void *fn_8003AD10();
}
extern "C" {
void fn_8003AC74(){
 fn_80066188((int)fn_8003AC9C);
}
void fn_8003AC9C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80562048,(int)fn_80027BE4,(int)fn_8003AD10,(int)fn_80027D08,(int)lbl_804685A0,44,(int)fn_8003AB24,(int)fn_8003AD18,0,(int)lbl_8055D700);
}
void *fn_8003AD10(){return lbl_805616A8;}
}
#pragma pop
