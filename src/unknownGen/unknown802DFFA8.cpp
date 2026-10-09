#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCri_fieldInit();
void *beCri_getMeta();
void beCri_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char lbl_804209A8[];
extern char lbl_804D2850[];
extern char lbl_80535584[];
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
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
void fn_802E001C(){
 fn_80066188((int)beCri_register);
}
void beCri_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535584,(int)igInfoManager_register,(int)fn_80284550,(int)beCri_getMetaCall,(int)lbl_804209A8,72,(int)beCri_vtableRead,(int)beCri_fieldInit,0,(int)lbl_804D2850);
}
void *beCri_getMetaCall(){return beCri_getMeta();}
}
#pragma pop
