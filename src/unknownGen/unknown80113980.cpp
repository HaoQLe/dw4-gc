#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void fn_80113B1C();
void igBasicColorChanger_register();
void *igOnOffColorChanger_getMeta();
void igOnOffColorChanger_vtableRead();
extern char lbl_80495528[];
extern void *lbl_805621F4;
extern void *lbl_805637F4;
extern void *lbl_805637F8;
void igOnOffColorChanger_register();
void *igOnOffColorChanger_getMetaCall();
void *igOnOffColorChanger_parentMeta();
}
extern "C" {
void fn_80113980(){}
void fn_80113984(){
 fn_80066188((int)igOnOffColorChanger_register);
}
void igOnOffColorChanger_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637F4,(int)igBasicColorChanger_register,(int)igOnOffColorChanger_parentMeta,(int)igOnOffColorChanger_getMetaCall,(int)lbl_80495528,88,(int)igOnOffColorChanger_vtableRead,0,0,0);
}
void *igOnOffColorChanger_getMetaCall(){return igOnOffColorChanger_getMeta();}
void *igOnOffColorChanger_parentMeta(){return lbl_805637F8;}
void *fn_80113A3C(){
 if(!lbl_805637F8) lbl_805637F8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805637F8;
}
void *igBasicColorChanger_getMeta(){
 if(!lbl_805637F8 || !(reinterpret_cast<unsigned int *>(lbl_805637F8)[0x24/4]&4)) fn_80113B1C();
 return lbl_805637F8;
}
}
#pragma pop
