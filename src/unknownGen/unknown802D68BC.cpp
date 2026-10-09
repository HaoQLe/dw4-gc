#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGroupKeep_getMeta();
void beGroupKeep_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_802B1AC8();
void fn_802D6B20();
void igGroup_register();
extern char lbl_8041FF70[];
extern char lbl_80535254[];
extern void *lbl_80535258;
extern void *lbl_805621F4;
void beGroupKeep_register();
void *beGroupKeep_getMetaCall();
}
extern "C" {
void fn_802D68BC(){
 fn_80066188((int)beGroupKeep_register);
}
void beGroupKeep_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535254,(int)igGroup_register,(int)fn_8011148C,(int)beGroupKeep_getMetaCall,(int)lbl_8041FF70,32,(int)beGroupKeep_vtableRead,0,0,0);
}
void *beGroupKeep_getMetaCall(){return beGroupKeep_getMeta();}
void *fn_802D6970(void *object){
 fn_802D6B20();
 return fn_8006546C(lbl_80535258,object);
}
void *fn_802D69B0(){
 if(!lbl_80535258) lbl_80535258=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535258;
}
void *beGeneraterInfoWork_getMeta(){
 if(!lbl_80535258 || !(reinterpret_cast<unsigned int *>(lbl_80535258)[0x24/4]&4)) fn_802D6B20();
 return lbl_80535258;
}
}
#pragma pop
