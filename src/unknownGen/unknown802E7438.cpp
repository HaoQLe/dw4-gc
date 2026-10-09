#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2_getMeta();
void beAction2_vtableRead();
void beBaseInfoManager_register();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void fn_802E76CC();
extern char lbl_80421114[];
extern char lbl_8053582C[];
extern void *lbl_80535830;
extern void *lbl_805621F4;
void beAction2_register();
void *beAction2_getMetaCall();
}
extern "C" {
void fn_802E7438(){
 fn_80066188((int)beAction2_register);
}
void beAction2_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053582C,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beAction2_getMetaCall,(int)lbl_80421114,32,(int)beAction2_vtableRead,0,0,0);
}
void *beAction2_getMetaCall(){return beAction2_getMeta();}
void *fn_802E74EC(void *object){
 fn_802E76CC();
 return fn_8006546C(lbl_80535830,object);
}
void *fn_802E752C(){
 if(!lbl_80535830) lbl_80535830=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535830;
}
void *be_getMeta(){
 if(!lbl_80535830 || !(reinterpret_cast<unsigned int *>(lbl_80535830)[0x24/4]&4)) fn_802E76CC();
 return lbl_80535830;
}
}
#pragma pop
