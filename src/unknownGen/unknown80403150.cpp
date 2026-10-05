#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_80402E28();
void *fn_80402EB0();
void fn_80402EFC();
void fn_80403214();
extern char lbl_80461C20[];
extern char lbl_804EFE48[];
extern char lbl_8055C700[];
void fn_80403178();
void *fn_804031F4();
}
extern "C" {
void fn_80403150(){
 fn_80066188((int)fn_80403178);
}
void fn_80403178(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C700,(int)fn_80066B08,(int)fn_800237D0,(int)fn_804031F4,(int)lbl_80461C20,72,(int)fn_80402EFC,(int)fn_80403214,0,(int)lbl_804EFE48);
}
void *fn_804031F4(){return fn_80402EB0();}
}
#pragma pop
