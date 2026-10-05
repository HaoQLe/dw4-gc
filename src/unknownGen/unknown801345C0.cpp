#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013448C();
void fn_801344C8();
void fn_80134684();
void fn_80147188();
extern char lbl_8049C73C[];
extern char lbl_8055F5CC[8];
extern void *lbl_80563C34;
extern void *lbl_805641F0;
void fn_801345E8();
void *fn_8013465C();
void *fn_8013467C();
}
extern "C" {
void fn_801345C0(){
 fn_80066188((int)fn_801345E8);
}
void fn_801345E8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C34,(int)fn_80147188,(int)fn_8013467C,(int)fn_8013465C,(int)lbl_8049C73C,40,(int)fn_801344C8,(int)fn_80134684,0,(int)lbl_8055F5CC);
}
void *fn_8013465C(){return fn_8013448C();}
void *fn_8013467C(){return lbl_805641F0;}
}
#pragma pop
