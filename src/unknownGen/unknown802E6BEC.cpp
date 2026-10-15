#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2MOTIONSET_getMeta();
void beAction2MOTIONSET_vtableRead();
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beAction2DataList_arkRegister();
void igNamedObject_register();
extern char beAction2MOTIONSET_className[];
extern char beAction2MOTIONSET_fieldTypes[];
extern char beAction2MOTIONSET_fieldNames[];
extern char beAction2MOTIONSET_fieldStorage[];
extern char beAction2MOTIONSET_fieldOffsets[];
extern void *beAction2MOTIONSET_meta;
extern void *beAction2DataList_meta;
extern void *lbl_805621F4;
void beAction2MOTIONSET_register();
void *beAction2MOTIONSET_getMetaCall();
void beAction2MOTIONSET_fieldInit();
}
extern "C" {
void beAction2MOTIONSET_arkRegister(){
 meta_registerNow((int)beAction2MOTIONSET_register);
}
void beAction2MOTIONSET_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beAction2MOTIONSET_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beAction2MOTIONSET_getMetaCall,(int)beAction2MOTIONSET_className,24,(int)beAction2MOTIONSET_vtableRead,(int)beAction2MOTIONSET_fieldInit,0,0);
}
void *beAction2MOTIONSET_getMetaCall(){return beAction2MOTIONSET_getMeta();}
void beAction2MOTIONSET_fieldInit(){
 void *meta=beAction2MOTIONSET_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beAction2MOTIONSET_fieldTypes,0x3);
 meta_setupFields(meta,beAction2MOTIONSET_fieldNames,beAction2MOTIONSET_fieldStorage,beAction2MOTIONSET_fieldOffsets,field);
}
void *beAction2DataList_metaObject(){
 if(!beAction2DataList_meta) beAction2DataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beAction2DataList_meta;
}
void *beAction2DataList_getMeta(){
 if(!beAction2DataList_meta || !(reinterpret_cast<unsigned int *>(beAction2DataList_meta)[0x24/4]&4)) beAction2DataList_arkRegister();
 return beAction2DataList_meta;
}
}
#pragma pop
