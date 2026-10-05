#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013C514();
void fn_8013C550();
void fn_8013C6D8();
void fn_80140664();
extern char lbl_8049DB5C[];
extern char lbl_8055F820[8];
extern void *lbl_80563F04;
void fn_8013C644();
void *fn_8013C6B8();
}
extern "C" {
void fn_8013C61C(){
 fn_80066188((int)fn_8013C644);
}
void fn_8013C644(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F04,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013C6B8,(int)lbl_8049DB5C,44,(int)fn_8013C550,(int)fn_8013C6D8,0,(int)lbl_8055F820);
}
void *fn_8013C6B8(){return fn_8013C514();}
}
#pragma pop
