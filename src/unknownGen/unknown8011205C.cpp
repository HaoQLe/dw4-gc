#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void igGeometryElement_fieldInit();
void igObject_register();
extern char lbl_80495200[];
extern char lbl_8049520C[];
extern void *lbl_805621F4;
extern void *lbl_80563770;
void *igGeometryElement_getMeta();
void fn_801120D4();
void igGeometryElement_register();
void *igGeometryElement_getMetaCall();
}
extern "C" {
void *fn_8011205C(){
 if(!lbl_80563770) lbl_80563770=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563770;
}
void *igGeometryElement_getMeta(){
 if(!lbl_80563770 || !(reinterpret_cast<unsigned int *>(lbl_80563770)[0x24/4]&4)) fn_801120D4();
 return lbl_80563770;
}
void fn_801120D4(){
 fn_80066188((int)igGeometryElement_register);
}
void igGeometryElement_register(){
 fn_8010CBD4();
 fn_80066204(1,(int)&lbl_80563770,(int)igObject_register,(int)fn_800237D0,(int)igGeometryElement_getMetaCall,(int)lbl_8049520C,44,0,(int)igGeometryElement_fieldInit,0,(int)lbl_80495200);
}
void *igGeometryElement_getMetaCall(){return igGeometryElement_getMeta();}
}
#pragma pop
