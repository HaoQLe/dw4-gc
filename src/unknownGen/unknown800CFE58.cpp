#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *fn_800E2BEC();
void *igGamecubeVertexArray1_1_getMeta();
void igObjectList_register();
void igObject_register();
void *igVertexArray_fieldInit();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVertexArrayList_className[];
extern char igVertexArray_className[];
extern char igVertexArrayList_vtable[];
extern char lbl_80493FC8[];
extern char igVertexArrayList_dependencies[8];
extern void *lbl_805621F4;
extern void *igVertexArrayList_meta;
extern void *igVertexArray_meta;
void *igVertexArrayList_getMeta();
void *igVertexArrayList_vtableRead();
void igVertexArrayList_arkRegister();
void igVertexArrayList_register();
void *igVertexArrayList_getMetaCall();
void *igVertexArray_getMeta();
void igVertexArray_arkRegister();
void igVertexArray_register();
void *igVertexArray_getMetaCall();
}
struct UnknownGenObject800CFF0C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igGamecubeVertexArray1_1_getMetaCall(){return igGamecubeVertexArray1_1_getMeta();}
void *fn_800CFE78(){return fn_800E2BEC();}
void *igVertexArrayList_create(void *object){
 igVertexArrayList_arkRegister();
 return meta_createInstance(igVertexArrayList_meta,object);
}
void *igVertexArrayList_getMeta(){
 if(!igVertexArrayList_meta || !(reinterpret_cast<unsigned int *>(igVertexArrayList_meta)[0x24/4]&4)) igVertexArrayList_arkRegister();
 return igVertexArrayList_meta;
}
void *igVertexArrayList_vtableRead(){
 UnknownGenObject800CFF0C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80493FC8;
 object.unknown00=igVertexArrayList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVertexArrayList_arkRegister(){
 meta_registerNow((int)igVertexArrayList_register);
}
void igVertexArrayList_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igVertexArrayList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igVertexArrayList_getMetaCall,(int)igVertexArrayList_className,20,(int)igVertexArrayList_vtableRead,0,0,(int)igVertexArrayList_dependencies);
}
void *igVertexArrayList_getMetaCall(){return igVertexArrayList_getMeta();}
void *igVertexArray_create(void *object){
 igVertexArray_arkRegister();
 return meta_createInstance(igVertexArray_meta,object);
}
void *fn_800D0068(){
 if(!igVertexArray_meta) igVertexArray_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVertexArray_meta;
}
void *igVertexArray_getMeta(){
 if(!igVertexArray_meta || !(reinterpret_cast<unsigned int *>(igVertexArray_meta)[0x24/4]&4)) igVertexArray_arkRegister();
 return igVertexArray_meta;
}
void igVertexArray_arkRegister(){
 meta_registerNow((int)igVertexArray_register);
}
void igVertexArray_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igVertexArray_meta,(int)igObject_register,(int)fn_800237D0,(int)igVertexArray_getMetaCall,(int)igVertexArray_className,24,0,(int)igVertexArray_fieldInit,0,0);
}
void *igVertexArray_getMetaCall(){return igVertexArray_getMeta();}
}
#pragma pop
