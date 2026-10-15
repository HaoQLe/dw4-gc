#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_801308D0();
void *fn_8013496C();
void igItemBase_register();
void igListenerBase_register();
void igMessageBase_register();
void igNormalizeTextureCoord_fieldInit();
void igOptBase_register();
extern char igObjectProperty_className[];
extern char igObjectChangedListener_className[];
extern char igObjectChangedEvent_className[];
extern char igNormalizeTextureCoord_className[];
extern char lbl_804A4A04[];
extern char igNormalizeTextureCoord_vtable[];
extern char lbl_804A6460[];
extern char igObjectChangedListener_vtable[];
extern char igListenerBase_vtable[];
extern char lbl_804AAF48[];
extern char igObjectProperty_dependencies[8];
extern char igObjectProperty_fieldTypes[4];
extern char igObjectProperty_fieldNames[4];
extern char igObjectProperty_fieldStorage[4];
extern char igObjectProperty_fieldOffsets[4];
extern char igObjectChangedEvent_dependencies[8];
extern char igObjectChangedEvent_fieldTypes[4];
extern char igObjectChangedEvent_fieldNames[4];
extern char igObjectChangedEvent_fieldStorage[4];
extern char igObjectChangedEvent_fieldOffsets[4];
extern void *igObject_meta;
extern void *igObjectProperty_meta;
extern void *igObjectChangedListener_meta;
extern void *igObjectChangedEvent_meta;
extern void *igNormalizeTextureCoord_meta;
extern void *igMessageBase_meta;
extern void *igListenerBase_meta;
void *igObjectProperty_getMeta();
void igObjectProperty_arkRegister();
void igObjectProperty_register();
void *igObjectProperty_getMetaCall();
void igObjectProperty_fieldInit();
void *igObjectChangedListener_getMeta();
void *igObjectChangedListener_vtableRead();
void igObjectChangedListener_arkRegister();
void igObjectChangedListener_register();
void *igObjectChangedListener_getMetaCall();
void *igObjectChangedListener_parentMeta();
void *igObjectChangedEvent_getMeta();
void igObjectChangedEvent_arkRegister();
void igObjectChangedEvent_register();
void *igObjectChangedEvent_getMetaCall();
void *fn_80140C3C();
void igObjectChangedEvent_fieldInit();
void *igNormalizeTextureCoord_getMeta();
void *igNormalizeTextureCoord_vtableRead();
void igNormalizeTextureCoord_arkRegister();
void igNormalizeTextureCoord_register();
void *igNormalizeTextureCoord_getMetaCall();
}
struct UnknownGenObject80140A2C_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot80140CFC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80140CFC(){igObject_construct(this);}
};
struct UnknownGenObject80140CFC_0 : UnknownGenRoot80140CFC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80140CFC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80140CFC : UnknownGenObject80140CFC_0 {
 char unknown28[24];
 inline ~UnknownGenObject80140CFC(){unknown00=igNormalizeTextureCoord_vtable;}
};
extern "C" {
void *igObjectProperty_getMeta(){
 if(!igObjectProperty_meta || !(reinterpret_cast<unsigned int *>(igObjectProperty_meta)[0x24/4]&4)) igObjectProperty_arkRegister();
 return igObjectProperty_meta;
}
void igObjectProperty_arkRegister(){
 meta_registerNow((int)igObjectProperty_register);
}
void igObjectProperty_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igObjectProperty_meta,(int)igItemBase_register,(int)fn_8013496C,(int)igObjectProperty_getMetaCall,(int)igObjectProperty_className,36,0,(int)igObjectProperty_fieldInit,0,(int)igObjectProperty_dependencies);
}
void *igObjectProperty_getMetaCall(){return igObjectProperty_getMeta();}
void igObjectProperty_fieldInit(){
 void *value0=igObjectProperty_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igObjectProperty_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=igObject_meta;
 meta_setupFields(value0,igObjectProperty_fieldNames,igObjectProperty_fieldStorage,igObjectProperty_fieldOffsets,value1);
}
void *igObjectChangedListener_getMeta(){
 if(!igObjectChangedListener_meta || !(reinterpret_cast<unsigned int *>(igObjectChangedListener_meta)[0x24/4]&4)) igObjectChangedListener_arkRegister();
 return igObjectChangedListener_meta;
}
void *igObjectChangedListener_vtableRead(){
 UnknownGenObject80140A2C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=igListenerBase_vtable;
 object.unknown00=igObjectChangedListener_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectChangedListener_arkRegister(){
 meta_registerNow((int)igObjectChangedListener_register);
}
void igObjectChangedListener_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectChangedListener_meta,(int)igListenerBase_register,(int)igObjectChangedListener_parentMeta,(int)igObjectChangedListener_getMetaCall,(int)igObjectChangedListener_className,32,(int)igObjectChangedListener_vtableRead,0,0,0);
}
void *igObjectChangedListener_getMetaCall(){return igObjectChangedListener_getMeta();}
void *igObjectChangedListener_parentMeta(){return igListenerBase_meta;}
void *igObjectChangedEvent_getMeta(){
 if(!igObjectChangedEvent_meta || !(reinterpret_cast<unsigned int *>(igObjectChangedEvent_meta)[0x24/4]&4)) igObjectChangedEvent_arkRegister();
 return igObjectChangedEvent_meta;
}
void igObjectChangedEvent_arkRegister(){
 meta_registerNow((int)igObjectChangedEvent_register);
}
void igObjectChangedEvent_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igObjectChangedEvent_meta,(int)igMessageBase_register,(int)fn_80140C3C,(int)igObjectChangedEvent_getMetaCall,(int)igObjectChangedEvent_className,36,0,(int)igObjectChangedEvent_fieldInit,0,(int)igObjectChangedEvent_dependencies);
}
void *igObjectChangedEvent_getMetaCall(){return igObjectChangedEvent_getMeta();}
void *fn_80140C3C(){return igMessageBase_meta;}
void igObjectChangedEvent_fieldInit(){
 void *value0=igObjectChangedEvent_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igObjectChangedEvent_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=igObject_meta;
 meta_setupFields(value0,igObjectChangedEvent_fieldNames,igObjectChangedEvent_fieldStorage,igObjectChangedEvent_fieldOffsets,value1);
}
void *igNormalizeTextureCoord_getMeta(){
 if(!igNormalizeTextureCoord_meta || !(reinterpret_cast<unsigned int *>(igNormalizeTextureCoord_meta)[0x24/4]&4)) igNormalizeTextureCoord_arkRegister();
 return igNormalizeTextureCoord_meta;
}
void *igNormalizeTextureCoord_vtableRead(){
 UnknownGenObject80140CFC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igNormalizeTextureCoord_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNormalizeTextureCoord_arkRegister(){
 meta_registerNow((int)igNormalizeTextureCoord_register);
}
void igNormalizeTextureCoord_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igNormalizeTextureCoord_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igNormalizeTextureCoord_getMetaCall,(int)igNormalizeTextureCoord_className,56,(int)igNormalizeTextureCoord_vtableRead,(int)igNormalizeTextureCoord_fieldInit,0,0);
}
void *igNormalizeTextureCoord_getMetaCall(){return igNormalizeTextureCoord_getMeta();}
}
#pragma pop
