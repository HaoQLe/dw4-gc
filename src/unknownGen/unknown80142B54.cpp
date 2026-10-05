#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013B680();
void *fn_8014298C();
void fn_801429C8();
void fn_80142C14();
void fn_80146870();
extern char lbl_8049E29C[];
extern char lbl_8049E2AC[];
extern void *lbl_80564090;
void fn_80142B7C();
void *fn_80142BF4();
}
extern "C" {
void fn_80142B54(){
 fn_80066188((int)fn_80142B7C);
}
void fn_80142B7C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564090,(int)fn_80146870,(int)fn_8013B680,(int)fn_80142BF4,(int)lbl_8049E2AC,44,(int)fn_801429C8,(int)fn_80142C14,0,(int)lbl_8049E29C);
}
void *fn_80142BF4(){return fn_8014298C();}
}
#pragma pop
