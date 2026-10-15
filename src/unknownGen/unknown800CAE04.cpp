#include <unknownGen.h>
#include <meta/igGamecubeAudioSourceList.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void fn_8004155C(void *,void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igEventProducer_register();
void *igGamecubeWindow_getMeta();
void *igInterfaceManager_fieldInit();
void igObject_register();
extern char lbl_8047EC18[];
extern char igWindow_className[];
extern char igInterfaceManager_className[];
extern char lbl_8055E948[8];
extern void *lbl_805621F4;
extern void *igAudioContext_meta;
extern void *lbl_80562B2C;
extern void *igGamecubeAudioContext_meta;
extern void *igGamecubeAudioSourceList_meta;
extern char lbl_80562B70[1];
extern char lbl_80562B71[1];
extern void *igWindow_meta;
extern void *lbl_80562B9C;
extern void *igInterfaceManager_meta;
extern void *igEventProducer_meta;
void fn_800CAEE0();
void *igWindow_getMeta();
void igWindow_registerNow();
void igWindow_register();
void *igWindow_getMetaCall();
void *fn_800CB078();
void *fn_800CB080();
void *igGamecubeWindow_getMetaCall();
void *igInterfaceManager_getMeta();
void igInterfaceManager_registerNow();
void igInterfaceManager_register();
void *igInterfaceManager_getMetaCall();
}
extern "C" {
void *igGamecubeAudioContext_virtual58(){return igGamecubeAudioContext_meta;}
void igGamecubeAudioContext_virtual68(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC)=value;
}
int igGamecubeAudioContext_virtual6C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
int igGamecubeAudioContext_virtual84(){return 32;}
void *fn_800CAE8C(){return igAudioContext_meta;}
void *igGamecubeAudioSourceList_virtual58(){return igGamecubeAudioSourceList_meta;}
void *fn_800CAE9C(){return lbl_80562B2C;}
int igGamecubeAudioSourceList_virtual5C(){return 60;}
void igGamecubeAudioSourceList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igGamecubeAudioSourceList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igGamecubeAudioSourceList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igGamecubeAudioSourceList *>((void *)p0)->_count,60);
  return;
 } else {
  return;
 }
}
void fn_800CAEE0(){
 if((int)*reinterpret_cast<signed char *>((lbl_80562B71+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80562B70+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80562B71+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562B70+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_80562B70+0))=1;
}
void *igWindow_create(void *object){
 igWindow_registerNow();
 return meta_createInstance(igWindow_meta,object);
}
void *fn_800CAF4C(){
 if(!igWindow_meta) igWindow_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igWindow_meta;
}
void *igWindow_getMeta(){
 if(!igWindow_meta || !(reinterpret_cast<unsigned int *>(igWindow_meta)[0x24/4]&4)) igWindow_registerNow();
 return igWindow_meta;
}
void igWindow_registerNow(){
 meta_registerNow((int)igWindow_register);
}
void igWindow_register(){
 fn_800CAEE0();
 meta_registerClass(1,(int)&igWindow_meta,(int)igEventProducer_register,(int)fn_800CB078,(int)igWindow_getMetaCall,(int)igWindow_className,8,0,(int)fn_800CB080,0,0);
}
void *igWindow_getMetaCall(){return igWindow_getMeta();}
void *fn_800CB078(){return igEventProducer_meta;}
void *fn_800CB080(){
 void *value0=igWindow_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igGamecubeWindow_getMetaCall;
 return value0;
}
void *igGamecubeWindow_getMetaCall(){return igGamecubeWindow_getMeta();}
void *fn_800CB0B4(){
 char *data=lbl_8047EC18;
 if(!lbl_80562B9C) lbl_80562B9C=fn_800635C8(data+0x72C,data+0x3E4,data+0x588,0x69);
 return lbl_80562B9C;
}
void *igInterfaceManager_getMeta(){
 if(!igInterfaceManager_meta || !(reinterpret_cast<unsigned int *>(igInterfaceManager_meta)[0x24/4]&4)) igInterfaceManager_registerNow();
 return igInterfaceManager_meta;
}
void igInterfaceManager_registerNow(){
 meta_registerNow((int)igInterfaceManager_register);
}
void igInterfaceManager_register(){
 fn_800CAEE0();
 meta_registerClass(1,(int)&igInterfaceManager_meta,(int)igObject_register,(int)fn_800237D0,(int)igInterfaceManager_getMetaCall,(int)igInterfaceManager_className,12,0,(int)igInterfaceManager_fieldInit,0,(int)lbl_8055E948);
}
void *igInterfaceManager_getMetaCall(){return igInterfaceManager_getMeta();}
}
#pragma pop
