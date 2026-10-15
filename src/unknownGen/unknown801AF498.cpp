#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80122790();
void fn_801AA6DC();
void *fn_801B74F0();
void igAnimationHierarchy_register();
void igNamedObject_register();
void igObjectList_register();
void igSkeleton_fieldInit();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igSkinList_className[];
extern char lbl_804AC81C[];
extern char igSkeletonList_className[];
extern char igSkeleton_className[];
extern char igSkeleton_vtable[];
extern char lbl_804B9324[];
extern char igSkeletonList_vtable[];
extern char lbl_804B9408[];
extern char igSkin_vtable[];
extern char igSkinList_vtable[];
extern char lbl_804B952C[];
extern char lbl_80560214[8];
extern char lbl_8056021C[7];
extern char lbl_80560224[8];
extern char lbl_80560234[8];
extern char lbl_8056023C[8];
extern char lbl_80560244[8];
extern char lbl_8056024C[8];
extern char lbl_80560254[8];
extern void *lbl_805621F4;
extern void *igSkinList_meta;
extern void *igSkin_meta;
extern void *igSkeletonList_meta;
extern void *igSkeleton_meta;
extern void *igAnimationHierarchy_meta;
void *igSkinList_getMeta();
void *igSkinList_vtableRead();
void igSkinList_registerNow();
void igSkinList_register();
void *igSkinList_getMetaCall();
void *igSkin_getMeta();
void *igSkin_vtableRead();
void igSkin_registerNow();
void igSkin_register();
void *igSkin_getMetaCall();
void igSkin_fieldInit();
void *igSkeletonList_getMeta();
void *igSkeletonList_vtableRead();
void igSkeletonList_registerNow();
void igSkeletonList_register();
void *igSkeletonList_getMetaCall();
void *igSkeleton_getMeta();
void *igSkeleton_vtableRead();
void igSkeleton_registerNow();
void igSkeleton_register();
void *igSkeleton_getMetaCall();
void *igSkeleton_parentMeta();
}
struct UnknownGenObject801AF510_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801AF6AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AF6AC(){igObject_construct(this);}
};
struct UnknownGenObject801AF6AC_0 : UnknownGenRoot801AF6AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AF6AC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801AF6AC : UnknownGenObject801AF6AC_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801AF6AC(){unknown00=igSkin_vtable;}
};
struct UnknownGenObject801AF990_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801AFAF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AFAF0(){igObject_construct(this);}
};
struct UnknownGenObject801AFAF0_0 : UnknownGenRoot801AFAF0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AFAF0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801AFAF0_1 : UnknownGenObject801AFAF0_0 {
 inline ~UnknownGenObject801AFAF0_1(){unknown00=lbl_804B9324;}
};
struct UnknownGenObject801AFAF0 : UnknownGenObject801AFAF0_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801AFAF0(){unknown00=igSkeleton_vtable;}
};
extern "C" {
void *fn_801AF498(){
 if(!igSkinList_meta) igSkinList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSkinList_meta;
}
void *igSkinList_getMeta(){
 if(!igSkinList_meta || !(reinterpret_cast<unsigned int *>(igSkinList_meta)[0x24/4]&4)) igSkinList_registerNow();
 return igSkinList_meta;
}
void *igSkinList_vtableRead(){
 UnknownGenObject801AF510_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B952C;
 object.unknown00=igSkinList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSkinList_registerNow(){
 meta_registerNow((int)igSkinList_register);
}
void igSkinList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igSkinList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igSkinList_getMetaCall,(int)igSkinList_className,20,(int)igSkinList_vtableRead,0,0,(int)lbl_80560214);
}
void *igSkinList_getMetaCall(){return igSkinList_getMeta();}
void *fn_801AF634(){
 if(!igSkin_meta) igSkin_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSkin_meta;
}
void *igSkin_getMeta(){
 if(!igSkin_meta || !(reinterpret_cast<unsigned int *>(igSkin_meta)[0x24/4]&4)) igSkin_registerNow();
 return igSkin_meta;
}
void *igSkin_vtableRead(){
 UnknownGenObject801AF6AC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igSkin_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSkin_registerNow(){
 meta_registerNow((int)igSkin_register);
}
void igSkin_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igSkin_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igSkin_getMetaCall,(int)lbl_8056021C,20,(int)igSkin_vtableRead,(int)igSkin_fieldInit,0,(int)lbl_804AC81C);
}
void *igSkin_getMetaCall(){return igSkin_getMeta();}
void igSkin_fieldInit(){
 void *value0=igSkin_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_80560224,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801B74F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80122790();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 meta_setupFields(value0,lbl_80560234,lbl_8056023C,lbl_80560244,value1);
}
void *fn_801AF918(){
 if(!igSkeletonList_meta) igSkeletonList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSkeletonList_meta;
}
void *igSkeletonList_getMeta(){
 if(!igSkeletonList_meta || !(reinterpret_cast<unsigned int *>(igSkeletonList_meta)[0x24/4]&4)) igSkeletonList_registerNow();
 return igSkeletonList_meta;
}
void *igSkeletonList_vtableRead(){
 UnknownGenObject801AF990_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B9408;
 object.unknown00=igSkeletonList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSkeletonList_registerNow(){
 meta_registerNow((int)igSkeletonList_register);
}
void igSkeletonList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igSkeletonList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igSkeletonList_getMetaCall,(int)igSkeletonList_className,20,(int)igSkeletonList_vtableRead,0,0,(int)lbl_8056024C);
}
void *igSkeletonList_getMetaCall(){return igSkeletonList_getMeta();}
void *igSkeleton_getMeta(){
 if(!igSkeleton_meta || !(reinterpret_cast<unsigned int *>(igSkeleton_meta)[0x24/4]&4)) igSkeleton_registerNow();
 return igSkeleton_meta;
}
void *igSkeleton_vtableRead(){
 UnknownGenObject801AFAF0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804B9324;
 object.unknown00=igSkeleton_vtable;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSkeleton_registerNow(){
 meta_registerNow((int)igSkeleton_register);
}
void igSkeleton_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igSkeleton_meta,(int)igAnimationHierarchy_register,(int)igSkeleton_parentMeta,(int)igSkeleton_getMetaCall,(int)igSkeleton_className,28,(int)igSkeleton_vtableRead,(int)igSkeleton_fieldInit,0,(int)lbl_80560254);
}
void *igSkeleton_getMetaCall(){return igSkeleton_getMeta();}
void *igSkeleton_parentMeta(){return igAnimationHierarchy_meta;}
}
#pragma pop
