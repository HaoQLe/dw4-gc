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
extern char igInterfaceManager_dependencies[8];
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
void igWindow_arkRegister();
void igWindow_register();
void *igWindow_getMetaCall();
void *fn_800CB078();
void *fn_800CB080();
void *igGamecubeWindow_getMetaCall();
void *igInterfaceManager_getMeta();
void igInterfaceManager_arkRegister();
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
}
#pragma pop
