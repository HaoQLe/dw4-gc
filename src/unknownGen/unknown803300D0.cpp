#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_8032FE84();
void fn_8032FED0();
void fn_80330580();
void fn_80333F14();
extern char lbl_80453A40[];
extern char lbl_80535EBC[];
extern void *lbl_80535EC0;
void fn_803300F8();
void *fn_80330164();
}
extern "C" {
void fn_803300D0(){
 fn_80066188((int)fn_803300F8);
}
void fn_803300F8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535EBC,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80330164,(int)lbl_80453A40,84,(int)fn_8032FED0,0,0,0);
}
void *fn_80330164(){return fn_8032FE84();}
void *fn_80330184(void *object){
 fn_80330580();
 return fn_8006546C(lbl_80535EC0,object);
}
void *fn_803301C4(){
 if(!lbl_80535EC0 || !(reinterpret_cast<unsigned int *>(lbl_80535EC0)[0x24/4]&4)) fn_80330580();
 return lbl_80535EC0;
}
}
#pragma pop
