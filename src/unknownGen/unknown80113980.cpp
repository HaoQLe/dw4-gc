#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void igBasicColorChanger_registerNow();
void igBasicColorChanger_register();
void *igOnOffColorChanger_getMeta();
void igOnOffColorChanger_vtableRead();
extern char igOnOffColorChanger_className[];
extern void *lbl_805621F4;
extern void *igOnOffColorChanger_meta;
extern void *igBasicColorChanger_meta;
void igOnOffColorChanger_register();
void *igOnOffColorChanger_getMetaCall();
void *igOnOffColorChanger_parentMeta();
}
extern "C" {
void fn_80113980(){}
void igOnOffColorChanger_registerNow(){
 meta_registerNow((int)igOnOffColorChanger_register);
}
void igOnOffColorChanger_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igOnOffColorChanger_meta,(int)igBasicColorChanger_register,(int)igOnOffColorChanger_parentMeta,(int)igOnOffColorChanger_getMetaCall,(int)igOnOffColorChanger_className,88,(int)igOnOffColorChanger_vtableRead,0,0,0);
}
void *igOnOffColorChanger_getMetaCall(){return igOnOffColorChanger_getMeta();}
void *igOnOffColorChanger_parentMeta(){return igBasicColorChanger_meta;}
void *fn_80113A3C(){
 if(!igBasicColorChanger_meta) igBasicColorChanger_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBasicColorChanger_meta;
}
void *igBasicColorChanger_getMeta(){
 if(!igBasicColorChanger_meta || !(reinterpret_cast<unsigned int *>(igBasicColorChanger_meta)[0x24/4]&4)) igBasicColorChanger_registerNow();
 return igBasicColorChanger_meta;
}
}
#pragma pop
