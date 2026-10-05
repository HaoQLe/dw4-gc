#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80138F98();
void *fn_80139794();
void *fn_80139AE8();
void fn_80139B24();
void fn_80139D30();
extern char lbl_8049D49C[];
extern char lbl_8055F770[8];
extern void *lbl_80563E08;
void fn_80139C9C();
void *fn_80139D10();
}
extern "C" {
void fn_80139C74(){
 fn_80066188((int)fn_80139C9C);
}
void fn_80139C9C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E08,(int)fn_80138F98,(int)fn_80139794,(int)fn_80139D10,(int)lbl_8049D49C,24,(int)fn_80139B24,(int)fn_80139D30,0,(int)lbl_8055F770);
}
void *fn_80139D10(){return fn_80139AE8();}
}
#pragma pop
