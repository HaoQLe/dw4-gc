#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNumVerInsideData_getMeta();
void beNumVerInsideData_vtableRead();
void *fn_800237D0();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beNumberCtrlInfoList_arkRegister();
void igObject_register();
extern char beNumVerInsideData_className[];
extern char beNumVerInsideData_fieldTypes[];
extern char beNumVerInsideData_fieldNames[];
extern char beNumVerInsideData_fieldStorage[];
extern char beNumVerInsideData_fieldOffsets[];
extern void *beNumVerInsideData_meta;
extern void *beNumberCtrlInfoList_meta;
void beNumVerInsideData_register();
void *beNumVerInsideData_getMetaCall();
void beNumVerInsideData_fieldInit();
}
extern "C" {
void beNumVerInsideData_arkRegister(){
 meta_registerNow((int)beNumVerInsideData_register);
}
void beNumVerInsideData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beNumVerInsideData_meta,(int)igObject_register,(int)fn_800237D0,(int)beNumVerInsideData_getMetaCall,(int)beNumVerInsideData_className,16,(int)beNumVerInsideData_vtableRead,(int)beNumVerInsideData_fieldInit,0,0);
}
void *beNumVerInsideData_getMetaCall(){return beNumVerInsideData_getMeta();}
void beNumVerInsideData_fieldInit(){
 void *meta=beNumVerInsideData_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNumVerInsideData_fieldTypes,0x2);
 meta_setupFields(meta,beNumVerInsideData_fieldNames,beNumVerInsideData_fieldStorage,beNumVerInsideData_fieldOffsets,field);
}
void *beNumberCtrlInfoList_getMeta(){
 if(!beNumberCtrlInfoList_meta || !(reinterpret_cast<unsigned int *>(beNumberCtrlInfoList_meta)[0x24/4]&4)) beNumberCtrlInfoList_arkRegister();
 return beNumberCtrlInfoList_meta;
}
}
#pragma pop
