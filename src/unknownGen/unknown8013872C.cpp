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
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_8012FEB0();
void igOptVisitObject_register();
void igPhotoshopScript_fieldInit();
extern char lbl_8049D19C[];
extern char igPromoteAllAttrs_className[];
extern char lbl_8049D1D0[];
extern char igPhotoshopScript_className[];
extern char igPromoteAllAttrs_vtable[];
extern char igPhotoshopScript_vtable[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igPromoteAllAttrs_fieldTypes[8];
extern char igPromoteAllAttrs_fieldNames[8];
extern char igPromoteAllAttrs_fieldStorage[8];
extern char igPromoteAllAttrs_fieldOffsets[8];
extern void *igPromoteAllAttrs_meta;
extern void *igPhotoshopScript_meta;
void *igPromoteAllAttrs_getMeta();
void *igPromoteAllAttrs_vtableRead();
void igPromoteAllAttrs_arkRegister();
void igPromoteAllAttrs_register();
void *igPromoteAllAttrs_getMetaCall();
void igPromoteAllAttrs_fieldInit();
void *igPhotoshopScript_getMeta();
void *igPhotoshopScript_vtableRead();
void igPhotoshopScript_arkRegister();
void igPhotoshopScript_register();
void *igPhotoshopScript_getMetaCall();
}
struct UnknownGenRoot80138768 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80138768(){igObject_construct(this);}
};
struct UnknownGenObject80138768_0 : UnknownGenRoot80138768 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80138768_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80138768_1 : UnknownGenObject80138768_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80138768_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80138768 : UnknownGenObject80138768_1 {
 UnknownGenString unknown2C;
 UnknownGenString unknown30;
 char unknown34[12];
 inline ~UnknownGenObject80138768(){unknown00=igPromoteAllAttrs_vtable;}
};
struct UnknownGenRoot80138AAC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80138AAC(){igObject_construct(this);}
};
struct UnknownGenObject80138AAC_0 : UnknownGenRoot80138AAC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80138AAC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80138AAC_1 : UnknownGenObject80138AAC_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80138AAC_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80138AAC : UnknownGenObject80138AAC_1 {
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80138AAC(){unknown00=igPhotoshopScript_vtable;}
};
extern "C" {
void *igPromoteAllAttrs_getMeta(){
 if(!igPromoteAllAttrs_meta || !(reinterpret_cast<unsigned int *>(igPromoteAllAttrs_meta)[0x24/4]&4)) igPromoteAllAttrs_arkRegister();
 return igPromoteAllAttrs_meta;
}
void *igPromoteAllAttrs_vtableRead(){
 UnknownGenObject80138768 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igPromoteAllAttrs_vtable;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPromoteAllAttrs_arkRegister(){
 meta_registerNow((int)igPromoteAllAttrs_register);
}
void igPromoteAllAttrs_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igPromoteAllAttrs_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igPromoteAllAttrs_getMetaCall,(int)igPromoteAllAttrs_className,52,(int)igPromoteAllAttrs_vtableRead,(int)igPromoteAllAttrs_fieldInit,0,0);
}
void *igPromoteAllAttrs_getMetaCall(){return igPromoteAllAttrs_getMeta();}
void igPromoteAllAttrs_fieldInit(){
 void *value0=igPromoteAllAttrs_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igPromoteAllAttrs_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 fn_80071694(value2,lbl_8049D19C);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80071694(value3,lbl_8049D1D0);
 meta_setupFields(value0,igPromoteAllAttrs_fieldNames,igPromoteAllAttrs_fieldStorage,igPromoteAllAttrs_fieldOffsets,value1);
}
void *igPhotoshopScript_getMeta(){
 if(!igPhotoshopScript_meta || !(reinterpret_cast<unsigned int *>(igPhotoshopScript_meta)[0x24/4]&4)) igPhotoshopScript_arkRegister();
 return igPhotoshopScript_meta;
}
void *igPhotoshopScript_vtableRead(){
 UnknownGenObject80138AAC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igPhotoshopScript_vtable;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPhotoshopScript_arkRegister(){
 meta_registerNow((int)igPhotoshopScript_register);
}
void igPhotoshopScript_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igPhotoshopScript_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igPhotoshopScript_getMetaCall,(int)igPhotoshopScript_className,56,(int)igPhotoshopScript_vtableRead,(int)igPhotoshopScript_fieldInit,0,0);
}
void *igPhotoshopScript_getMetaCall(){return igPhotoshopScript_getMeta();}
}
#pragma pop
