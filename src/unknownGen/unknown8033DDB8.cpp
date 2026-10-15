#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beMessenger_metaObject();
void *beNDMWLoadCtrl2CommonIntf_metaObject();
void *beNDMWLoadIntf2ComMdlCtrl_metaObject();
void *beNDMWLoadIntf2TextOrder_metaObject();
extern char lbl_804E32D4[];
extern char lbl_804E3314[];
extern char lbl_804E3354[];
extern char lbl_804E3394[];
extern void *beNDMWLoadIntf2DegiState_meta;
}
extern "C" {
void beNDMWLoadIntf2DegiState_fieldInit(){
 void *value0=beNDMWLoadIntf2DegiState_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E32D4,16);
 void *value2=meta_field(value0,value1);
 void *value3=beNDMWLoadIntf2ComMdlCtrl_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beNDMWLoadIntf2TextOrder_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beNDMWLoadCtrl2CommonIntf_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+60)=0;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=beMessenger_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+60)=0;
 meta_setupFields(value0,lbl_804E3314,lbl_804E3354,lbl_804E3394,value1);
}
}
#pragma pop
