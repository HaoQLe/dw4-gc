#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013496C();
void *fn_8013BAB0();
void fn_8013BAEC();
void fn_8013BCD0();
void fn_80145C0C();
extern char lbl_8049C7D4[];
extern char lbl_8049DAA8[];
extern void *lbl_80563EDC;
void fn_8013BC38();
void *fn_8013BCB0();
}
extern "C" {
void fn_8013BC10(){
 fn_80066188((int)fn_8013BC38);
}
void fn_8013BC38(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563EDC,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_8013BCB0,(int)lbl_8049C7D4,44,(int)fn_8013BAEC,(int)fn_8013BCD0,0,(int)lbl_8049DAA8);
}
void *fn_8013BCB0(){return fn_8013BAB0();}
}
#pragma pop
