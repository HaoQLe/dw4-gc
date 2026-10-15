#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void igHierarchyChangedEvent_register();
void igItemBase_register();
void igReplaceObject_fieldInit();
extern char igReplacedObjectEvent_className[];
extern char lbl_8049C76C[];
extern char igReplaceObject_className[];
extern char igReplaceObject_vtable[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igReplacedObjectEvent_vtable[];
extern char igHierarchyChangedEvent_vtable[];
extern char igMessageBase_vtable[];
extern char lbl_804AAF48[];
extern char lbl_8055F5CC[8];
extern char lbl_8055F5D4[8];
extern char lbl_8055F5DC[8];
extern char lbl_8055F5E4[8];
extern char lbl_8055F5EC[8];
extern void *igObject_meta;
extern void *igReplacedObjectEvent_meta;
extern void *igReplaceObject_meta;
extern void *igItemBase_meta;
extern void *igHierarchyChangedEvent_meta;
void *igReplacedObjectEvent_getMeta();
void *igReplacedObjectEvent_vtableRead();
void igReplacedObjectEvent_registerNow();
void igReplacedObjectEvent_register();
void *igReplacedObjectEvent_getMetaCall();
void *fn_8013467C();
void igReplacedObjectEvent_fieldInit();
void *igReplaceObject_getMeta();
void *igReplaceObject_vtableRead();
void igReplaceObject_registerNow();
void igReplaceObject_register();
void *igReplaceObject_getMetaCall();
void *fn_8013496C();
}
struct UnknownGenRoot801344C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801344C8(){fn_8006665C(this);}
};
struct UnknownGenObject801344C8 : UnknownGenRoot801344C8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801344C8(){unknown00=igReplacedObjectEvent_vtable;}
};
struct UnknownGenRoot80134750 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80134750(){fn_8006665C(this);}
};
struct UnknownGenObject80134750 : UnknownGenRoot80134750 {
 char unknown04[28];
 UnknownGenString unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80134750(){unknown00=igReplaceObject_vtable;}
};
extern "C" {
void *igReplacedObjectEvent_create(void *object){
 igReplacedObjectEvent_registerNow();
 return meta_createInstance(igReplacedObjectEvent_meta,object);
}
void *igReplacedObjectEvent_getMeta(){
 if(!igReplacedObjectEvent_meta || !(reinterpret_cast<unsigned int *>(igReplacedObjectEvent_meta)[0x24/4]&4)) igReplacedObjectEvent_registerNow();
 return igReplacedObjectEvent_meta;
}
void *igReplacedObjectEvent_vtableRead(){
 UnknownGenObject801344C8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=igMessageBase_vtable;
 object.unknown00=igHierarchyChangedEvent_vtable;
 object.unknown00=igReplacedObjectEvent_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igReplacedObjectEvent_registerNow(){
 meta_registerNow((int)igReplacedObjectEvent_register);
}
void igReplacedObjectEvent_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igReplacedObjectEvent_meta,(int)igHierarchyChangedEvent_register,(int)fn_8013467C,(int)igReplacedObjectEvent_getMetaCall,(int)igReplacedObjectEvent_className,40,(int)igReplacedObjectEvent_vtableRead,(int)igReplacedObjectEvent_fieldInit,0,(int)lbl_8055F5CC);
}
void *igReplacedObjectEvent_getMetaCall(){return igReplacedObjectEvent_getMeta();}
void *fn_8013467C(){return igHierarchyChangedEvent_meta;}
void igReplacedObjectEvent_fieldInit(){
 void *value0=igReplacedObjectEvent_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F5D4,2);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=igObject_meta;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=igObject_meta;
 fn_800659C0(value0,lbl_8055F5DC,lbl_8055F5E4,lbl_8055F5EC,value1);
}
void *igReplaceObject_getMeta(){
 if(!igReplaceObject_meta || !(reinterpret_cast<unsigned int *>(igReplaceObject_meta)[0x24/4]&4)) igReplaceObject_registerNow();
 return igReplaceObject_meta;
}
void *igReplaceObject_vtableRead(){
 UnknownGenObject80134750 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=igReplaceObject_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igReplaceObject_registerNow(){
 meta_registerNow((int)igReplaceObject_register);
}
void igReplaceObject_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igReplaceObject_meta,(int)igItemBase_register,(int)fn_8013496C,(int)igReplaceObject_getMetaCall,(int)igReplaceObject_className,48,(int)igReplaceObject_vtableRead,(int)igReplaceObject_fieldInit,0,(int)lbl_8049C76C);
}
void *igReplaceObject_getMetaCall(){return igReplaceObject_getMeta();}
void *fn_8013496C(){return igItemBase_meta;}
}
#pragma pop
