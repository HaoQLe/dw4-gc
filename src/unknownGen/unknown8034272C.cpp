#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWItemBase_register();
void *beNDMWItemImportant_getMeta();
void beNDMWItemImportant_vtableRead();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void fn_803428C0();
extern char lbl_80455120[];
extern char lbl_80536730[];
extern void *lbl_80536734;
void beNDMWItemImportant_register();
void *beNDMWItemImportant_getMetaCall();
}
extern "C" {
void fn_8034272C(){
 fn_80066188((int)beNDMWItemImportant_register);
}
void beNDMWItemImportant_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536730,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemImportant_getMetaCall,(int)lbl_80455120,20,(int)beNDMWItemImportant_vtableRead,0,0,0);
}
void *beNDMWItemImportant_getMetaCall(){return beNDMWItemImportant_getMeta();}
void *fn_803427E0(void *object){
 fn_803428C0();
 return fn_8006546C(lbl_80536734,object);
}
void *beNDMWItemInstant_getMeta(){
 if(!lbl_80536734 || !(reinterpret_cast<unsigned int *>(lbl_80536734)[0x24/4]&4)) fn_803428C0();
 return lbl_80536734;
}
}
#pragma pop
