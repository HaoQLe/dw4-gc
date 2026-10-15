#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_8013496C();
void *fn_80135250();
void fn_801AB9F0();
void igChangeInterpolationMethod_fieldInit();
void igItemBase_register();
void igOptVisitObject_register();
extern char igChildEdit_className[];
extern char igChildContainer_className[];
extern char igChangePlayMode_className[];
extern char igChangeInterpolationMethod_className[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char igChangePlayMode_vtable[];
extern char igChangeInterpolationMethod_vtable[];
extern char lbl_804AAF48[];
extern char igChildEdit_dependencies[8];
extern char igChildEdit_fieldTypes[8];
extern char igChildEdit_fieldNames[8];
extern char igChildEdit_fieldStorage[8];
extern char igChildEdit_fieldOffsets[8];
extern char igChangePlayMode_fieldTypes[4];
extern char igChangePlayMode_fieldNames[4];
extern char igChangePlayMode_fieldStorage[4];
extern char igChangePlayMode_fieldOffsets[4];
extern char lbl_8055FD44[4];
extern void *igObject_meta;
extern void *igChildEdit_meta;
extern void *igChildContainer_meta;
extern void *igChangePlayMode_meta;
extern void *igChangeInterpolationMethod_meta;
void *igChildEdit_getMeta();
void igChildEdit_arkRegister();
void igChildEdit_register();
void *igChildEdit_getMetaCall();
void igChildEdit_fieldInit();
void *igChildContainer_getMeta();
void igChildContainer_arkRegister();
void igChildContainer_register();
void *igChildContainer_getMetaCall();
void *igChangePlayMode_getMeta();
void *igChangePlayMode_vtableRead();
void igChangePlayMode_arkRegister();
void igChangePlayMode_register();
void *igChangePlayMode_getMetaCall();
void igChangePlayMode_fieldInit();
void *igChangeInterpolationMethod_getMeta();
void *igChangeInterpolationMethod_vtableRead();
void igChangeInterpolationMethod_arkRegister();
void igChangeInterpolationMethod_register();
void *igChangeInterpolationMethod_getMetaCall();
}
struct UnknownGenRoot8015213C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8015213C(){igObject_construct(this);}
};
struct UnknownGenObject8015213C_0 : UnknownGenRoot8015213C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8015213C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8015213C_1 : UnknownGenObject8015213C_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8015213C_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8015213C : UnknownGenObject8015213C_1 {
 char unknown2C[12];
 inline ~UnknownGenObject8015213C(){unknown00=igChangePlayMode_vtable;}
};
struct UnknownGenRoot801523FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801523FC(){igObject_construct(this);}
};
struct UnknownGenObject801523FC_0 : UnknownGenRoot801523FC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801523FC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801523FC_1 : UnknownGenObject801523FC_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801523FC_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801523FC : UnknownGenObject801523FC_1 {
 char unknown2C[12];
 inline ~UnknownGenObject801523FC(){unknown00=igChangeInterpolationMethod_vtable;}
};
extern "C" {
void *igChangeInterpolationMethod_getMeta(){
 if(!igChangeInterpolationMethod_meta || !(reinterpret_cast<unsigned int *>(igChangeInterpolationMethod_meta)[0x24/4]&4)) igChangeInterpolationMethod_arkRegister();
 return igChangeInterpolationMethod_meta;
}
void *igChangeInterpolationMethod_vtableRead(){
 UnknownGenObject801523FC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igChangeInterpolationMethod_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igChangeInterpolationMethod_arkRegister(){
 meta_registerNow((int)igChangeInterpolationMethod_register);
}
void igChangeInterpolationMethod_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igChangeInterpolationMethod_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igChangeInterpolationMethod_getMetaCall,(int)igChangeInterpolationMethod_className,56,(int)igChangeInterpolationMethod_vtableRead,(int)igChangeInterpolationMethod_fieldInit,0,0);
}
void *igChangeInterpolationMethod_getMetaCall(){return igChangeInterpolationMethod_getMeta();}
}
#pragma pop
