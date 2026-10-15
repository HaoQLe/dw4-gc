#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beCri_fieldInit();
void *beCri_getMeta();
void beCri_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char beCri_className[];
extern char lbl_804D2850[];
extern char beCri_meta[];
void beCri_register();
void *beCri_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802DFFA8(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void beCri_registerNow(){
 meta_registerNow((int)beCri_register);
}
void beCri_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCri_meta,(int)igInfoManager_register,(int)fn_80284550,(int)beCri_getMetaCall,(int)beCri_className,72,(int)beCri_vtableRead,(int)beCri_fieldInit,0,(int)lbl_804D2850);
}
void *beCri_getMetaCall(){return beCri_getMeta();}
}
#pragma pop
