#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beMatCtrl_arkRegister();
extern char lbl_8041CD10[];
extern char lbl_804D174C[];
extern char lbl_804D1764[];
extern void *lbl_805350CC;
extern void *beMatCtrl_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D1124(){
 if(!lbl_805350CC) lbl_805350CC=fn_800635C8(lbl_8041CD10,lbl_804D174C,lbl_804D1764,0x6);
 return lbl_805350CC;
}
}
#pragma pop
