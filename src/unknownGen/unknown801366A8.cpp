#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029F84();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_801308D0();
void igOptBase_register();
void igOptVisitObject_register();
void igRemoveAnimationTrackChannel_fieldInit();
extern char igNodeTraversal_className[];
extern char igRemoveJoints_className[];
extern char igRemoveDynamic_className[];
extern char igRemoveCenterOfRotation_className[];
extern char igRemoveAttrs_className[];
extern char igRemoveAnimationTrackChannel_className[];
extern char igRemoveJoints_vtable[];
extern char igRemoveDynamic_vtable[];
extern char igRemoveCenterOfRotation_vtable[];
extern char igRemoveAttrs_vtable[];
extern char igRemoveAnimationTrackChannel_vtable[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igRemoveDynamic_fieldTypes[8];
extern char igRemoveDynamic_fieldNames[8];
extern char igRemoveDynamic_fieldStorage[8];
extern char igRemoveDynamic_fieldOffsets[8];
extern char igRemoveAttrs_dependencies[8];
extern char igRemoveAttrs_fieldTypes[8];
extern char igRemoveAttrs_fieldNames[8];
extern char igRemoveAttrs_fieldStorage[8];
extern char igRemoveAttrs_fieldOffsets[8];
extern char igRemoveAnimationTrackChannel_dependencies[8];
extern void *igRemoveJoints_meta;
extern void *igRemoveDynamic_meta;
extern void *igRemoveCenterOfRotation_meta;
extern void *igRemoveAttrs_meta;
extern void *igRemoveAnimationTrackChannel_meta;
void *igRemoveJoints_getMeta();
void *igRemoveJoints_vtableRead();
void igRemoveJoints_arkRegister();
void igRemoveJoints_register();
void *igRemoveJoints_getMetaCall();
void *igRemoveDynamic_getMeta();
void *igRemoveDynamic_vtableRead();
void igRemoveDynamic_arkRegister();
void igRemoveDynamic_register();
void *igRemoveDynamic_getMetaCall();
void igRemoveDynamic_fieldInit();
void *igRemoveCenterOfRotation_getMeta();
void *igRemoveCenterOfRotation_vtableRead();
void igRemoveCenterOfRotation_arkRegister();
void igRemoveCenterOfRotation_register();
void *igRemoveCenterOfRotation_getMetaCall();
void *igRemoveAttrs_getMeta();
void *igRemoveAttrs_vtableRead();
void igRemoveAttrs_arkRegister();
void igRemoveAttrs_register();
void *igRemoveAttrs_getMetaCall();
void igRemoveAttrs_fieldInit();
void *igRemoveAnimationTrackChannel_getMeta();
void *igRemoveAnimationTrackChannel_vtableRead();
void igRemoveAnimationTrackChannel_arkRegister();
void igRemoveAnimationTrackChannel_register();
void *igRemoveAnimationTrackChannel_getMetaCall();
}
struct UnknownGenRoot80135D58 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80135D58(){igObject_construct(this);}
};
struct UnknownGenObject80135D58_0 : UnknownGenRoot80135D58 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80135D58_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80135D58 : UnknownGenObject80135D58_0 {
 char unknown28[8];
 inline ~UnknownGenObject80135D58(){unknown00=igRemoveJoints_vtable;}
};
struct UnknownGenRoot80135F34 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80135F34(){igObject_construct(this);}
};
struct UnknownGenObject80135F34_0 : UnknownGenRoot80135F34 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80135F34_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80135F34_1 : UnknownGenObject80135F34_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80135F34_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80135F34 : UnknownGenObject80135F34_1 {
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80135F34(){unknown00=igRemoveDynamic_vtable;}
};
struct UnknownGenRoot80136210 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80136210(){igObject_construct(this);}
};
struct UnknownGenObject80136210_0 : UnknownGenRoot80136210 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80136210_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80136210 : UnknownGenObject80136210_0 {
 char unknown28[8];
 inline ~UnknownGenObject80136210(){unknown00=igRemoveCenterOfRotation_vtable;}
};
struct UnknownGenRoot801363EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801363EC(){igObject_construct(this);}
};
struct UnknownGenObject801363EC_0 : UnknownGenRoot801363EC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801363EC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801363EC : UnknownGenObject801363EC_0 {
 UnknownGenString unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject801363EC(){unknown00=igRemoveAttrs_vtable;}
};
struct UnknownGenRoot801366E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801366E4(){igObject_construct(this);}
};
struct UnknownGenObject801366E4_0 : UnknownGenRoot801366E4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801366E4_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801366E4_1 : UnknownGenObject801366E4_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801366E4_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801366E4 : UnknownGenObject801366E4_1 {
 char unknown2C[4];
 UnknownGenString unknown30;
 UnknownGenString unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 char unknown40[8];
 inline ~UnknownGenObject801366E4(){unknown00=igRemoveAnimationTrackChannel_vtable;}
};
extern "C" {
void *igRemoveAnimationTrackChannel_getMeta(){
 if(!igRemoveAnimationTrackChannel_meta || !(reinterpret_cast<unsigned int *>(igRemoveAnimationTrackChannel_meta)[0x24/4]&4)) igRemoveAnimationTrackChannel_arkRegister();
 return igRemoveAnimationTrackChannel_meta;
}
void *igRemoveAnimationTrackChannel_vtableRead(){
 UnknownGenObject801366E4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igRemoveAnimationTrackChannel_vtable;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRemoveAnimationTrackChannel_arkRegister(){
 meta_registerNow((int)igRemoveAnimationTrackChannel_register);
}
void igRemoveAnimationTrackChannel_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igRemoveAnimationTrackChannel_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igRemoveAnimationTrackChannel_getMetaCall,(int)igRemoveAnimationTrackChannel_className,64,(int)igRemoveAnimationTrackChannel_vtableRead,(int)igRemoveAnimationTrackChannel_fieldInit,0,(int)igRemoveAnimationTrackChannel_dependencies);
}
void *igRemoveAnimationTrackChannel_getMetaCall(){return igRemoveAnimationTrackChannel_getMeta();}
}
#pragma pop
