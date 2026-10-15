#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *igGamecubeVisualContext_getMeta();
void igNamedObject_register();
void *igVertexArray2_fieldInit();
extern char igNamedObject_vtable[];
extern char igVertexArray2Helper_className[];
extern char igVertexArray2_dependencies[];
extern char igVertexArray2_className[];
extern char igVertexArray2Helper_vtable[];
extern char igVertexArray2_vtable[];
extern char igVertexArray2Helper_dependencies[8];
extern char igVertexArray2Helper_fieldTypes[4];
extern char igVertexArray2Helper_fieldNames[4];
extern char igVertexArray2Helper_fieldStorage[4];
extern char igVertexArray2Helper_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igVertexArray2Helper_meta;
extern void *igVertexArray2_meta;
void *igVertexArray2Helper_getMeta();
void *igVertexArray2Helper_vtableRead();
void igVertexArray2Helper_arkRegister();
void igVertexArray2Helper_register();
void *igVertexArray2Helper_getMetaCall();
void igVertexArray2Helper_fieldInit();
void *fn_800CEEF4();
void *igVertexArray2_getMeta();
void *igVertexArray2_vtableRead();
void igVertexArray2_arkRegister();
void igVertexArray2_register();
void *igVertexArray2_getMetaCall();
}
struct UnknownGenRoot800CECA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CECA0(){igObject_construct(this);}
};
struct UnknownGenObject800CECA0_0 : UnknownGenRoot800CECA0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CECA0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800CECA0 : UnknownGenObject800CECA0_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800CECA0(){unknown00=igVertexArray2Helper_vtable;}
};
struct UnknownGenRoot800CEF6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CEF6C(){igObject_construct(this);}
};
struct UnknownGenObject800CEF6C_0 : UnknownGenRoot800CEF6C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CEF6C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800CEF6C : UnknownGenObject800CEF6C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject800CEF6C(){unknown00=igVertexArray2_vtable;}
};
extern "C" {
void *igGamecubeVisualContext_getMetaCall(){return igGamecubeVisualContext_getMeta();}
void *igVertexArray2Helper_create(void *object){
 igVertexArray2Helper_arkRegister();
 return meta_createInstance(igVertexArray2Helper_meta,object);
}
void *igVertexArray2Helper_getMeta(){
 if(!igVertexArray2Helper_meta || !(reinterpret_cast<unsigned int *>(igVertexArray2Helper_meta)[0x24/4]&4)) igVertexArray2Helper_arkRegister();
 return igVertexArray2Helper_meta;
}
void *igVertexArray2Helper_vtableRead(){
 UnknownGenObject800CECA0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igVertexArray2Helper_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVertexArray2Helper_arkRegister(){
 meta_registerNow((int)igVertexArray2Helper_register);
}
void igVertexArray2Helper_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igVertexArray2Helper_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igVertexArray2Helper_getMetaCall,(int)igVertexArray2Helper_className,16,(int)igVertexArray2Helper_vtableRead,(int)igVertexArray2Helper_fieldInit,0,(int)igVertexArray2Helper_dependencies);
}
void *igVertexArray2Helper_getMetaCall(){return igVertexArray2Helper_getMeta();}
void igVertexArray2Helper_fieldInit(){
 void *value0=igVertexArray2Helper_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igVertexArray2Helper_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800CEEF4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,igVertexArray2Helper_fieldNames,igVertexArray2Helper_fieldStorage,igVertexArray2Helper_fieldOffsets,value1);
}
void *igVertexArray2_create(void *object){
 igVertexArray2_arkRegister();
 return meta_createInstance(igVertexArray2_meta,object);
}
void *fn_800CEEF4(){
 if(!igVertexArray2_meta) igVertexArray2_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVertexArray2_meta;
}
void *igVertexArray2_getMeta(){
 if(!igVertexArray2_meta || !(reinterpret_cast<unsigned int *>(igVertexArray2_meta)[0x24/4]&4)) igVertexArray2_arkRegister();
 return igVertexArray2_meta;
}
void *igVertexArray2_vtableRead(){
 UnknownGenObject800CEF6C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igVertexArray2_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVertexArray2_arkRegister(){
 meta_registerNow((int)igVertexArray2_register);
}
void igVertexArray2_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igVertexArray2_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igVertexArray2_getMetaCall,(int)igVertexArray2_className,24,(int)igVertexArray2_vtableRead,(int)igVertexArray2_fieldInit,0,(int)igVertexArray2_dependencies);
}
void *igVertexArray2_getMetaCall(){return igVertexArray2_getMeta();}
}
#pragma pop
