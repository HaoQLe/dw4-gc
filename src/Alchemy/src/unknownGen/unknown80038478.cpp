#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80038374();
void fn_800383B0();
void fn_80038538();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_804677DC[];
extern char lbl_804677E8[];
extern void *lbl_80561E34;
void fn_800384A0();
void *fn_80038518();
}
extern "C" {
void fn_80038478(){
 fn_80066188((int)fn_800384A0);
}
void fn_800384A0(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561E34,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80038518,(int)lbl_804677E8,24,(int)fn_800383B0,(int)fn_80038538,0,(int)lbl_804677DC);
}
void *fn_80038518(){return fn_80038374();}
}
#pragma pop
