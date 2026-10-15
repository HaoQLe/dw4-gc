#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023CF4();
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80071694(void *,void *);
void *fn_8011EDB4();
void fn_801AA6DC();
void *fn_801AB2B4();
void *fn_801ABB34();
void igAnimationModifier_fieldInit();
void igInfo_register();
void igNamedObject_register();
void igObjectList_register();
void igObject_register();
void igTransformSource_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_804AAFB8[];
extern char igAnimationSequence_className[];
extern char igAnimationInfo_className[];
extern char igAnimationTokenList_className[];
extern char igAnimationToken_className[];
extern char igAnimationHierarchy_className[];
extern char igAnimationModifierList_className[];
extern char igAnimationModifier_className[];
extern char igAnimationInfo_vtable[];
extern char igAnimationModifier_vtable[];
extern char igAnimationModifierList_vtable[];
extern char lbl_804B650C[];
extern char igAnimationToken_vtable[];
extern char igAnimationTokenList_vtable[];
extern char lbl_804B6630[];
extern char lbl_80560924[8];
extern char lbl_8056092C[4];
extern char lbl_80560930[4];
extern char lbl_80560934[4];
extern char lbl_80560938[4];
extern char lbl_8056093C[8];
extern char lbl_80560944[8];
extern char lbl_8056094C[8];
extern char lbl_80560954[8];
extern char lbl_8056095C[8];
extern char lbl_80560964[8];
extern char lbl_8056096C[4];
extern char lbl_80560970[4];
extern char lbl_80560974[4];
extern char lbl_80560978[4];
extern char lbl_8056097C[8];
extern char lbl_80560994[8];
extern void *lbl_805621F4;
extern void *igAnimationSequence_meta;
extern void *igAnimationInfo_meta;
extern void *igAnimationTokenList_meta;
extern void *igAnimationToken_meta;
extern void *igAnimationHierarchy_meta;
extern void *igAnimationModifierList_meta;
extern void *lbl_80565450;
extern void *igAnimationModifier_meta;
void *igAnimationSequence_getMeta();
void igAnimationSequence_registerNow();
void igAnimationSequence_register();
void *igAnimationSequence_getMetaCall();
void *igAnimationInfo_getMeta();
void *igAnimationInfo_vtableRead();
void igAnimationInfo_registerNow();
void igAnimationInfo_register();
void *igAnimationInfo_getMetaCall();
void igAnimationInfo_fieldInit();
void *fn_801CA050();
void *igAnimationTokenList_getMeta();
void *igAnimationTokenList_vtableRead();
void igAnimationTokenList_registerNow();
void igAnimationTokenList_register();
void *igAnimationTokenList_getMetaCall();
void *igAnimationToken_getMeta();
void *igAnimationToken_vtableRead();
void igAnimationToken_registerNow();
void igAnimationToken_register();
void *igAnimationToken_getMetaCall();
void igAnimationToken_fieldInit();
void *igAnimationHierarchy_getMeta();
void igAnimationHierarchy_registerNow();
void igAnimationHierarchy_register();
void *igAnimationHierarchy_getMetaCall();
void igAnimationHierarchy_fieldInit();
void *igAnimationModifierList_getMeta();
void *igAnimationModifierList_vtableRead();
void igAnimationModifierList_registerNow();
void igAnimationModifierList_register();
void *igAnimationModifierList_getMetaCall();
void *igAnimationModifier_getMeta();
void *igAnimationModifier_vtableRead();
void igAnimationModifier_registerNow();
void igAnimationModifier_register();
void *igAnimationModifier_getMetaCall();
}
struct UnknownGenRoot801C9E14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C9E14(){igObject_construct(this);}
};
struct UnknownGenObject801C9E14_0 : UnknownGenRoot801C9E14 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C9E14_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801C9E14_1 : UnknownGenObject801C9E14_0 {
 inline ~UnknownGenObject801C9E14_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject801C9E14 : UnknownGenObject801C9E14_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject801C9E14(){unknown00=igAnimationInfo_vtable;}
};
struct UnknownGenObject801CA0C8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CA260 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CA260(){igObject_construct(this);}
};
struct UnknownGenObject801CA260 : UnknownGenRoot801CA260 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801CA260(){unknown00=igAnimationToken_vtable;}
};
struct UnknownGenObject801CA6AC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CA858 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CA858(){igObject_construct(this);}
};
struct UnknownGenObject801CA858 : UnknownGenRoot801CA858 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject801CA858(){unknown00=igAnimationModifier_vtable;}
};
extern "C" {
void *igAnimationSequence_getMeta(){
 if(!igAnimationSequence_meta || !(reinterpret_cast<unsigned int *>(igAnimationSequence_meta)[0x24/4]&4)) igAnimationSequence_registerNow();
 return igAnimationSequence_meta;
}
void igAnimationSequence_registerNow(){
 meta_registerNow((int)igAnimationSequence_register);
}
void igAnimationSequence_register(){
 fn_801AA6DC();
 meta_registerClass(1,(int)&igAnimationSequence_meta,(int)igTransformSource_register,(int)fn_801ABB34,(int)igAnimationSequence_getMetaCall,(int)igAnimationSequence_className,8,0,0,0,0);
}
void *igAnimationSequence_getMetaCall(){return igAnimationSequence_getMeta();}
void *igAnimationInfo_getMeta(){
 if(!igAnimationInfo_meta || !(reinterpret_cast<unsigned int *>(igAnimationInfo_meta)[0x24/4]&4)) igAnimationInfo_registerNow();
 return igAnimationInfo_meta;
}
void *igAnimationInfo_vtableRead(){
 UnknownGenObject801C9E14 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=igAnimationInfo_vtable;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationInfo_registerNow(){
 meta_registerNow((int)igAnimationInfo_register);
}
void igAnimationInfo_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)igAnimationInfo_getMetaCall,(int)igAnimationInfo_className,24,(int)igAnimationInfo_vtableRead,(int)igAnimationInfo_fieldInit,0,(int)lbl_80560924);
}
void *igAnimationInfo_getMetaCall(){return igAnimationInfo_getMeta();}
void igAnimationInfo_fieldInit(){
 void *value0=igAnimationInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8056092C,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801CA050();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_80560930,lbl_80560934,lbl_80560938,value1);
}
void *fn_801CA050(){
 if(!igAnimationTokenList_meta) igAnimationTokenList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationTokenList_meta;
}
void *igAnimationTokenList_getMeta(){
 if(!igAnimationTokenList_meta || !(reinterpret_cast<unsigned int *>(igAnimationTokenList_meta)[0x24/4]&4)) igAnimationTokenList_registerNow();
 return igAnimationTokenList_meta;
}
void *igAnimationTokenList_vtableRead(){
 UnknownGenObject801CA0C8_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B6630;
 object.unknown00=igAnimationTokenList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationTokenList_registerNow(){
 meta_registerNow((int)igAnimationTokenList_register);
}
void igAnimationTokenList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationTokenList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationTokenList_getMetaCall,(int)igAnimationTokenList_className,20,(int)igAnimationTokenList_vtableRead,0,0,(int)lbl_8056093C);
}
void *igAnimationTokenList_getMetaCall(){return igAnimationTokenList_getMeta();}
void *igAnimationToken_create(void *object){
 igAnimationToken_registerNow();
 return meta_createInstance(igAnimationToken_meta,object);
}
void *igAnimationToken_getMeta(){
 if(!igAnimationToken_meta || !(reinterpret_cast<unsigned int *>(igAnimationToken_meta)[0x24/4]&4)) igAnimationToken_registerNow();
 return igAnimationToken_meta;
}
void *igAnimationToken_vtableRead(){
 UnknownGenObject801CA260 object;
 object.unknown00=igAnimationToken_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationToken_registerNow(){
 meta_registerNow((int)igAnimationToken_register);
}
void igAnimationToken_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationToken_meta,(int)igObject_register,(int)fn_800237D0,(int)igAnimationToken_getMetaCall,(int)igAnimationToken_className,16,(int)igAnimationToken_vtableRead,(int)igAnimationToken_fieldInit,0,(int)lbl_80560944);
}
void *igAnimationToken_getMetaCall(){return igAnimationToken_getMeta();}
void igAnimationToken_fieldInit(){
 void *value0=igAnimationToken_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8056094C,2);
 void *value2=meta_field(value0,value1);
 fn_80071694(value2,(void *)0);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_801AB2B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 meta_setupFields(value0,lbl_80560954,lbl_8056095C,lbl_80560964,value1);
}
void *fn_801CA478(){
 if(!igAnimationHierarchy_meta) igAnimationHierarchy_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationHierarchy_meta;
}
void *igAnimationHierarchy_getMeta(){
 if(!igAnimationHierarchy_meta || !(reinterpret_cast<unsigned int *>(igAnimationHierarchy_meta)[0x24/4]&4)) igAnimationHierarchy_registerNow();
 return igAnimationHierarchy_meta;
}
void igAnimationHierarchy_registerNow(){
 meta_registerNow((int)igAnimationHierarchy_register);
}
void igAnimationHierarchy_register(){
 fn_801AA6DC();
 meta_registerClass(1,(int)&igAnimationHierarchy_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igAnimationHierarchy_getMetaCall,(int)igAnimationHierarchy_className,16,0,(int)igAnimationHierarchy_fieldInit,0,0);
}
void *igAnimationHierarchy_getMetaCall(){return igAnimationHierarchy_getMeta();}
void igAnimationHierarchy_fieldInit(){
 void *value0=igAnimationHierarchy_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8056096C,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8011EDB4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+53)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+64)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+65)=1;
 meta_setupFields(value0,lbl_80560970,lbl_80560974,lbl_80560978,value1);
}
void *fn_801CA634(){
 if(!igAnimationModifierList_meta) igAnimationModifierList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationModifierList_meta;
}
void *igAnimationModifierList_getMeta(){
 if(!igAnimationModifierList_meta || !(reinterpret_cast<unsigned int *>(igAnimationModifierList_meta)[0x24/4]&4)) igAnimationModifierList_registerNow();
 return igAnimationModifierList_meta;
}
void *igAnimationModifierList_vtableRead(){
 UnknownGenObject801CA6AC_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B650C;
 object.unknown00=igAnimationModifierList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationModifierList_registerNow(){
 meta_registerNow((int)igAnimationModifierList_register);
}
void igAnimationModifierList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationModifierList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationModifierList_getMetaCall,(int)igAnimationModifierList_className,20,(int)igAnimationModifierList_vtableRead,0,0,(int)lbl_8056097C);
}
void *igAnimationModifierList_getMetaCall(){return igAnimationModifierList_getMeta();}
void *fn_801CA7D0(){
 char *data=lbl_804AAFB8;
 if(!lbl_80565450) lbl_80565450=fn_800635C8(data+0x70AC,data+0x708C,data+0x709C,0x4);
 return lbl_80565450;
}
void *igAnimationModifier_getMeta(){
 if(!igAnimationModifier_meta || !(reinterpret_cast<unsigned int *>(igAnimationModifier_meta)[0x24/4]&4)) igAnimationModifier_registerNow();
 return igAnimationModifier_meta;
}
void *igAnimationModifier_vtableRead(){
 UnknownGenObject801CA858 object;
 object.unknown00=igAnimationModifier_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationModifier_registerNow(){
 meta_registerNow((int)igAnimationModifier_register);
}
void igAnimationModifier_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationModifier_meta,(int)igObject_register,(int)fn_800237D0,(int)igAnimationModifier_getMetaCall,(int)igAnimationModifier_className,20,(int)igAnimationModifier_vtableRead,(int)igAnimationModifier_fieldInit,0,(int)lbl_80560994);
}
void *igAnimationModifier_getMetaCall(){return igAnimationModifier_getMeta();}
}
#pragma pop
