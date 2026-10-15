#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2FADESET_getMeta();
void beAction2FADESET_vtableRead();
void *fn_80023CF4();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beAction2JOINTSET_arkRegister();
void igNamedObject_register();
extern char beAction2FADESET_className[];
extern char beAction2FADESET_fieldTypes[];
extern char beAction2FADESET_fieldNames[];
extern char beAction2FADESET_fieldStorage[];
extern char beAction2FADESET_fieldOffsets[];
extern void *beAction2FADESET_meta;
extern void *beAction2JOINTSET_meta;
void beAction2FADESET_register();
void *beAction2FADESET_getMetaCall();
void beAction2FADESET_fieldInit();
}
extern "C" {
void beAction2FADESET_arkRegister(){
 meta_registerNow((int)beAction2FADESET_register);
}
void beAction2FADESET_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beAction2FADESET_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beAction2FADESET_getMetaCall,(int)beAction2FADESET_className,20,(int)beAction2FADESET_vtableRead,(int)beAction2FADESET_fieldInit,0,0);
}
void *beAction2FADESET_getMetaCall(){return beAction2FADESET_getMeta();}
void beAction2FADESET_fieldInit(){
 void *meta=beAction2FADESET_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beAction2FADESET_fieldTypes,0x2);
 meta_setupFields(meta,beAction2FADESET_fieldNames,beAction2FADESET_fieldStorage,beAction2FADESET_fieldOffsets,field);
}
void *beAction2JOINTSET_getMeta(){
 if(!beAction2JOINTSET_meta || !(reinterpret_cast<unsigned int *>(beAction2JOINTSET_meta)[0x24/4]&4)) beAction2JOINTSET_arkRegister();
 return beAction2JOINTSET_meta;
}
}
#pragma pop
