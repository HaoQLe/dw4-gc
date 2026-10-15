#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDataBaseList_getMeta();
void beDataBaseList_vtableRead();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beDataBase_arkRegister();
void igObjectList_register();
extern char beDataBaseList_className[];
extern char beDataBaseList_dependencies[];
extern char beDataBaseList_meta[];
extern void *beDataBase_meta;
extern void *lbl_805621F4;
void beDataBaseList_register();
void *beDataBaseList_getMetaCall();
}
extern "C" {
void beDataBaseList_arkRegister(){
 meta_registerNow((int)beDataBaseList_register);
}
void beDataBaseList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDataBaseList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beDataBaseList_getMetaCall,(int)beDataBaseList_className,20,(int)beDataBaseList_vtableRead,0,0,(int)beDataBaseList_dependencies);
}
void *beDataBaseList_getMetaCall(){return beDataBaseList_getMeta();}
void *beDataBase_metaObject(){
 if(!beDataBase_meta) beDataBase_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beDataBase_meta;
}
void *beDataBase_getMeta(){
 if(!beDataBase_meta || !(reinterpret_cast<unsigned int *>(beDataBase_meta)[0x24/4]&4)) beDataBase_arkRegister();
 return beDataBase_meta;
}
}
#pragma pop
