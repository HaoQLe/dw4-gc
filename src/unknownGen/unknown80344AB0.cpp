#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2B2C();
void fn_802E3284();
void fn_803250AC();
void *fn_803449C8();
void fn_80344A14();
void fn_80344D40();
extern char lbl_8045563C[];
extern char lbl_80536820[];
extern void *lbl_80536824;
void fn_80344AD8();
void *fn_80344B44();
}
extern "C" {
void fn_80344AB0(){
 fn_80066188((int)fn_80344AD8);
}
void fn_80344AD8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536820,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_80344B44,(int)lbl_8045563C,44,(int)fn_80344A14,0,0,0);
}
void *fn_80344B44(){return fn_803449C8();}
void *fn_80344B64(void *object){
 fn_80344D40();
 return fn_8006546C(lbl_80536824,object);
}
void *fn_80344BA4(){
 if(!lbl_80536824 || !(reinterpret_cast<unsigned int *>(lbl_80536824)[0x24/4]&4)) fn_80344D40();
 return lbl_80536824;
}
}
#pragma pop
