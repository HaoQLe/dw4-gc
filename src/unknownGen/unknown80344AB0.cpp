#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2B2C();
void fn_802E3284();
void fn_803250AC();
void *fn_803449C8();
void fn_80344A14();
extern char lbl_8045563C[];
extern char lbl_80536820[];
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
}
#pragma pop
