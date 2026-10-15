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
void beNumberCtrlInfoList_registerNow();
void igObject_register();
extern char beNumVerInsideData_className[];
extern char lbl_804D0428[];
extern char lbl_804D0430[];
extern char lbl_804D0438[];
extern char lbl_804D0440[];
extern void *beNumVerInsideData_meta;
extern void *beNumberCtrlInfoList_meta;
void beNumVerInsideData_register();
void *beNumVerInsideData_getMetaCall();
void beNumVerInsideData_fieldInit();
}
extern "C" {
void beNumVerInsideData_registerNow(){
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
 meta_appendFields(meta,lbl_804D0428,0x2);
 meta_setupFields(meta,lbl_804D0430,lbl_804D0438,lbl_804D0440,field);
}
void *beNumberCtrlInfoList_getMeta(){
 if(!beNumberCtrlInfoList_meta || !(reinterpret_cast<unsigned int *>(beNumberCtrlInfoList_meta)[0x24/4]&4)) beNumberCtrlInfoList_registerNow();
 return beNumberCtrlInfoList_meta;
}
}
#pragma pop
