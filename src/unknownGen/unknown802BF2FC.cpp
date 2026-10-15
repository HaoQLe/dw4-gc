#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beSvPlatBaseData_registerNow();
void *beSaveMemoryObj_metaObject();
void igObject_register();
extern char beSaveApi_className[];
extern char lbl_804CFCAC[];
extern char lbl_804CFCB4[];
extern char lbl_804CFCE8[];
extern char lbl_804CFD1C[];
extern char lbl_804CFD50[];
extern void *beSaveApi_meta;
extern void *beSvPlatBaseData_meta;
extern void *lbl_805621F4;
void *beSaveApi_getMeta();
void beSaveApi_registerNow();
void beSaveApi_register();
void *beSaveApi_getMetaCall();
void beSaveApi_fieldInit();
}
extern "C" {
void *beSaveApi_metaObject(){
 if(!beSaveApi_meta) beSaveApi_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSaveApi_meta;
}
void *beSaveApi_getMeta(){
 if(!beSaveApi_meta || !(reinterpret_cast<unsigned int *>(beSaveApi_meta)[0x24/4]&4)) beSaveApi_registerNow();
 return beSaveApi_meta;
}
void beSaveApi_registerNow(){
 meta_registerNow((int)beSaveApi_register);
}
void beSaveApi_register(){
 fn_802B1AC8();
 meta_registerClass(1,(int)&beSaveApi_meta,(int)igObject_register,(int)fn_800237D0,(int)beSaveApi_getMetaCall,(int)beSaveApi_className,212,0,(int)beSaveApi_fieldInit,0,(int)lbl_804CFCAC);
}
void *beSaveApi_getMetaCall(){return beSaveApi_getMeta();}
void beSaveApi_fieldInit(){
 void *value0=beSaveApi_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CFCB4,13);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+10));
 void *value3=beSaveMemoryObj_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+11));
 void *value5=beSaveMemoryObj_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+12));
 void *value7=beSaveMemoryObj_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 meta_setupFields(value0,lbl_804CFCE8,lbl_804CFD1C,lbl_804CFD50,value1);
}
void *beSvPlatBaseData_metaObject(){
 if(!beSvPlatBaseData_meta) beSvPlatBaseData_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSvPlatBaseData_meta;
}
void *beSvPlatBaseData_getMeta(){
 if(!beSvPlatBaseData_meta || !(reinterpret_cast<unsigned int *>(beSvPlatBaseData_meta)[0x24/4]&4)) beSvPlatBaseData_registerNow();
 return beSvPlatBaseData_meta;
}
}
#pragma pop
