#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_80111CD4();
void igBoxModel_register();
void igGuiComponentModel_register();
void igScrollListComponentModel_fieldInit();
extern char igSimpleChildHolderModel_className[];
extern char lbl_8049475C[];
extern char igScrollListComponentModel_className[];
extern char igModel_vtable[];
extern char igScrollListComponentModel_vtable[];
extern char igBoxModel_vtable[];
extern char igSimpleChildHolderModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char lbl_8055EEFC[8];
extern char lbl_8055EF04[8];
extern char lbl_8055EF14[8];
extern char lbl_8055EF1C[8];
extern char lbl_8055EF24[8];
extern void *igSimpleChildHolderModel_meta;
extern void *igScrollListComponentModel_meta;
extern void *igGuiComponentModel_meta;
extern void *igBoxModel_meta;
void *igSimpleChildHolderModel_getMeta();
void *igSimpleChildHolderModel_vtableRead();
void igSimpleChildHolderModel_registerNow();
void igSimpleChildHolderModel_register();
void *igSimpleChildHolderModel_getMetaCall();
void *fn_8010D6A0();
void igSimpleChildHolderModel_fieldInit();
void *igScrollListComponentModel_getMeta();
void *igScrollListComponentModel_vtableRead();
void igScrollListComponentModel_registerNow();
void igScrollListComponentModel_register();
void *igScrollListComponentModel_getMetaCall();
void *igScrollListComponentModel_parentMeta();
}
struct UnknownGenRoot8010D4EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D4EC(){fn_8006665C(this);}
};
struct UnknownGenObject8010D4EC_0 : UnknownGenRoot8010D4EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010D4EC_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010D4EC_1 : UnknownGenObject8010D4EC_0 {
 inline ~UnknownGenObject8010D4EC_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010D4EC : UnknownGenObject8010D4EC_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[24];
 inline ~UnknownGenObject8010D4EC(){unknown00=igSimpleChildHolderModel_vtable;}
};
struct UnknownGenRoot8010D764 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D764(){fn_8006665C(this);}
};
struct UnknownGenObject8010D764_0 : UnknownGenRoot8010D764 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010D764_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010D764_1 : UnknownGenObject8010D764_0 {
 inline ~UnknownGenObject8010D764_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010D764_2 : UnknownGenObject8010D764_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8010D764_2(){unknown00=igBoxModel_vtable;}
};
struct UnknownGenObject8010D764 : UnknownGenObject8010D764_2 {
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8010D764(){unknown00=igScrollListComponentModel_vtable;}
};
extern "C" {
void *igSimpleChildHolderModel_getMeta(){
 if(!igSimpleChildHolderModel_meta || !(reinterpret_cast<unsigned int *>(igSimpleChildHolderModel_meta)[0x24/4]&4)) igSimpleChildHolderModel_registerNow();
 return igSimpleChildHolderModel_meta;
}
void *igSimpleChildHolderModel_vtableRead(){
 UnknownGenObject8010D4EC object;
 object.unknown00=igModel_vtable;
 object.unknown08.value=0;
 object.unknown00=igGuiComponentModel_vtable;
 object.unknown00=igSimpleChildHolderModel_vtable;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSimpleChildHolderModel_registerNow(){
 meta_registerNow((int)igSimpleChildHolderModel_register);
}
void igSimpleChildHolderModel_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igSimpleChildHolderModel_meta,(int)igGuiComponentModel_register,(int)fn_8010D6A0,(int)igSimpleChildHolderModel_getMetaCall,(int)igSimpleChildHolderModel_className,52,(int)igSimpleChildHolderModel_vtableRead,(int)igSimpleChildHolderModel_fieldInit,0,(int)lbl_8055EEFC);
}
void *igSimpleChildHolderModel_getMetaCall(){return igSimpleChildHolderModel_getMeta();}
void *fn_8010D6A0(){return igGuiComponentModel_meta;}
void igSimpleChildHolderModel_fieldInit(){
 void *value0=igSimpleChildHolderModel_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EF04,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80111CD4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055EF14,lbl_8055EF1C,lbl_8055EF24,value1);
}
void *igScrollListComponentModel_getMeta(){
 if(!igScrollListComponentModel_meta || !(reinterpret_cast<unsigned int *>(igScrollListComponentModel_meta)[0x24/4]&4)) igScrollListComponentModel_registerNow();
 return igScrollListComponentModel_meta;
}
void *igScrollListComponentModel_vtableRead(){
 UnknownGenObject8010D764 object;
 object.unknown00=igModel_vtable;
 object.unknown08.value=0;
 object.unknown00=igGuiComponentModel_vtable;
 object.unknown00=igBoxModel_vtable;
 object.unknown24.value=0;
 object.unknown00=igScrollListComponentModel_vtable;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igScrollListComponentModel_registerNow(){
 meta_registerNow((int)igScrollListComponentModel_register);
}
void igScrollListComponentModel_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igScrollListComponentModel_meta,(int)igBoxModel_register,(int)igScrollListComponentModel_parentMeta,(int)igScrollListComponentModel_getMetaCall,(int)igScrollListComponentModel_className,60,(int)igScrollListComponentModel_vtableRead,(int)igScrollListComponentModel_fieldInit,0,(int)lbl_8049475C);
}
void *igScrollListComponentModel_getMetaCall(){return igScrollListComponentModel_getMeta();}
void *igScrollListComponentModel_parentMeta(){return igBoxModel_meta;}
}
#pragma pop
