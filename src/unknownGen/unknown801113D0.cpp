#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010EE6C();
void *fn_80111CD4();
void igGroup_register();
void igGuiComponentModel_fieldInit();
void *igGuiComponentNode_getMeta();
void igGuiComponentNode_vtableRead();
void igModel_register();
extern char igGuiComponentNode_className[];
extern char igGuiComponentModel_className[];
extern char igModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char lbl_8055F0B4[8];
extern char lbl_8055F0BC[4];
extern char lbl_8055F0C0[4];
extern char lbl_8055F0C4[4];
extern char lbl_8055F0C8[4];
extern char lbl_8055F0CC[8];
extern void *lbl_805621F4;
extern void *igGuiComponentNode_meta;
extern void *igGuiComponentModel_meta;
extern void *igGroup_meta;
void igGuiComponentNode_register();
void *igGuiComponentNode_getMetaCall();
void *fn_8011148C();
void igGuiComponentNode_fieldInit();
void *igGuiComponentModel_getMeta();
void *igGuiComponentModel_vtableRead();
void igGuiComponentModel_registerNow();
void igGuiComponentModel_register();
void *igGuiComponentModel_getMetaCall();
}
struct UnknownGenRoot80111594 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111594(){igObject_construct(this);}
};
struct UnknownGenObject80111594_0 : UnknownGenRoot80111594 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80111594_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject80111594 : UnknownGenObject80111594_0 {
 char unknown0C[36];
 inline ~UnknownGenObject80111594(){unknown00=igGuiComponentModel_vtable;}
};
extern "C" {
void igGuiComponentNode_registerNow(){
 meta_registerNow((int)igGuiComponentNode_register);
}
void igGuiComponentNode_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igGuiComponentNode_meta,(int)igGroup_register,(int)fn_8011148C,(int)igGuiComponentNode_getMetaCall,(int)igGuiComponentNode_className,36,(int)igGuiComponentNode_vtableRead,(int)igGuiComponentNode_fieldInit,0,(int)lbl_8055F0B4);
}
void *igGuiComponentNode_getMetaCall(){return igGuiComponentNode_getMeta();}
void *fn_8011148C(){return igGroup_meta;}
void igGuiComponentNode_fieldInit(){
 void *value0=igGuiComponentNode_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055F0BC,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80111CD4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 meta_setupFields(value0,lbl_8055F0C0,lbl_8055F0C4,lbl_8055F0C8,value1);
}
void *fn_8011151C(){
 if(!igGuiComponentModel_meta) igGuiComponentModel_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGuiComponentModel_meta;
}
void *igGuiComponentModel_getMeta(){
 if(!igGuiComponentModel_meta || !(reinterpret_cast<unsigned int *>(igGuiComponentModel_meta)[0x24/4]&4)) igGuiComponentModel_registerNow();
 return igGuiComponentModel_meta;
}
void *igGuiComponentModel_vtableRead(){
 UnknownGenObject80111594 object;
 object.unknown00=igModel_vtable;
 object.unknown08.value=0;
 object.unknown00=igGuiComponentModel_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGuiComponentModel_registerNow(){
 meta_registerNow((int)igGuiComponentModel_register);
}
void igGuiComponentModel_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igGuiComponentModel_meta,(int)igModel_register,(int)fn_8010EE6C,(int)igGuiComponentModel_getMetaCall,(int)igGuiComponentModel_className,36,(int)igGuiComponentModel_vtableRead,(int)igGuiComponentModel_fieldInit,0,(int)lbl_8055F0CC);
}
void *igGuiComponentModel_getMetaCall(){return igGuiComponentModel_getMeta();}
}
#pragma pop
