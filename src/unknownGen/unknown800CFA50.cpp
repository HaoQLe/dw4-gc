#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800CF934();
void fn_800CF970();
void fn_800CFB0C();
extern char lbl_80488844[];
extern char lbl_8055EAB0[8];
extern void *lbl_80562DC0;
void fn_800CFA78();
void *fn_800CFAEC();
}
extern "C" {
void fn_800CFA50(){
 fn_80066188((int)fn_800CFA78);
}
void fn_800CFA78(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562DC0,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800CFAEC,(int)lbl_80488844,36,(int)fn_800CF970,(int)fn_800CFB0C,0,(int)lbl_8055EAB0);
}
void *fn_800CFAEC(){return fn_800CF934();}
}
#pragma pop
