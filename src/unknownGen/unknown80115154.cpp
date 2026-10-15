#include <unknownGen.h>
#include <meta/igCharMetricsMetaField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_80033638();
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
void *meta_field(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800AF168();
void fn_8010CBD4();
void *fn_8010D6A0();
void *fn_80111B38();
void fn_80115248(void *);
void igCompoundMetaField_register();
void igDataList_register();
void igFont_register();
void igGuiComponentModel_register();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char lbl_80474018[];
extern char igNamedObject_vtable[];
extern char igBoxModel_className[];
extern char igBitmapFont_dependencies[];
extern char igBitmapFont_className[];
extern char igCharMetricsList_className[];
extern char igCharMetricsMetaField_className[];
extern char igModel_vtable[];
extern char igBitmapFont_vtable[];
extern char igCharMetricsMetaField_vtable[];
extern char igCharMetricsList_vtable[];
extern char lbl_80496EC8[];
extern char lbl_80496F28[];
extern char igBoxModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igBoxModel_dependencies[8];
extern char igBoxModel_fieldTypes[4];
extern char igBoxModel_fieldNames[4];
extern char igBoxModel_fieldStorage[4];
extern char igBoxModel_fieldOffsets[4];
extern char igBitmapFont_fieldTypes[8];
extern char igBitmapFont_fieldNames[8];
extern char igBitmapFont_fieldStorage[8];
extern char igBitmapFont_fieldOffsets[8];
extern char lbl_8055F25C[6];
extern char igCharMetricsMetaField_dependencies[8];
extern void *lbl_805621F4;
extern void *igFont_meta;
extern void *igBoxModel_meta;
extern void *igBitmapFont_meta;
extern void *igCharMetricsList_meta;
extern char lbl_80563848[4];
extern void *igCharMetricsMetaField_meta;
extern void *lbl_80563850;
void *igBoxModel_getMeta();
void *igBoxModel_vtableRead();
void igBoxModel_arkRegister();
void igBoxModel_register();
void *igBoxModel_getMetaCall();
void igBoxModel_fieldInit();
void *igBitmapFont_getMeta();
void *igBitmapFont_vtableRead();
void igBitmapFont_arkRegister();
void igBitmapFont_register();
void *igBitmapFont_getMetaCall();
void *igBitmapFont_parentMeta();
void igBitmapFont_fieldInit();
void *fn_80114D4C();
void *igCharMetricsList_getMeta();
void *igCharMetricsList_vtableRead();
void igCharMetricsList_arkRegister();
void igCharMetricsList_register();
void *igCharMetricsList_getMetaCall();
void fn_80114ED4();
void *igCharMetricsMetaField_getMeta();
void *igCharMetricsMetaField_vtableRead();
void igCharMetricsMetaField_arkRegister();
void igCharMetricsMetaField_register();
void *igCharMetricsMetaField_getMetaCall();
void *fn_801151EC();
}
struct UnknownGenRoot8011474C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011474C(){igObject_construct(this);}
};
struct UnknownGenObject8011474C_0 : UnknownGenRoot8011474C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8011474C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8011474C_1 : UnknownGenObject8011474C_0 {
 inline ~UnknownGenObject8011474C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8011474C : UnknownGenObject8011474C_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8011474C(){unknown00=igBoxModel_vtable;}
};
struct UnknownGenRoot80114A00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114A00(){igObject_construct(this);}
};
struct UnknownGenObject80114A00_0 : UnknownGenRoot80114A00 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80114A00_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80114A00_1 : UnknownGenObject80114A00_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80114A00_1(){unknown00=lbl_80496F28;}
};
struct UnknownGenObject80114A00 : UnknownGenObject80114A00_1 {
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject80114A00(){unknown00=igBitmapFont_vtable;}
};
struct UnknownGenObject80114DC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80114FCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114FCC(){fn_800638E0(this);}
};
struct UnknownGenObject80114FCC_0 : UnknownGenRoot80114FCC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80114FCC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80114FCC_1 : UnknownGenObject80114FCC_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject80114FCC_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject80114FCC : UnknownGenObject80114FCC_1 {
 char unknown38[8];
 inline ~UnknownGenObject80114FCC(){unknown00=igCharMetricsMetaField_vtable;}
};
extern "C" {
void fn_80115154(){
 if(!lbl_80563850){
  void *object=(lbl_80563850=meta_createInstance(igCharMetricsMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563850));
   reinterpret_cast<short *>(lbl_80563850)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563850);
  }
 }
}
void *fn_801151EC(){
 if(!lbl_80563850){
  igCharMetricsMetaField_arkRegister();
 }
 return lbl_80563850;
}
int igCharMetricsMetaField_virtual64(){return 40;}
void igCharMetricsMetaField_virtual2C(int p0){
 fn_80115248(reinterpret_cast<Meta::igCharMetricsMetaField *>((void *)p0)->_fieldList);
}
}
#pragma pop
