#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void igEnumMetaField_arkRegister();
void fn_80046FD8(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igDriverDatabase_fieldInit();
void *igEnumMetaField_getMeta();
void igEnumMetaField_register();
void igObject_register();
extern char igEnumArrayMetaField_className[];
extern char lbl_80466CA8[];
extern char igDriverDatabase_dependencies[];
extern char igDriverDatabase_className[];
extern char lbl_80471914[];
extern char igEnumArrayMetaField_vtable[];
extern char igDriverDatabase_vtable[];
extern char lbl_804758E4[];
extern char igEnumMetaField_fieldTypes[4];
extern char igEnumMetaField_fieldNames[4];
extern char igEnumMetaField_fieldStorage[4];
extern char igEnumMetaField_fieldOffsets[4];
extern char igEnumArrayMetaField_dependencies[8];
extern char igEnumArrayMetaField_fieldTypes[4];
extern char igEnumArrayMetaField_fieldNames[4];
extern char igEnumArrayMetaField_fieldStorage[4];
extern char igEnumArrayMetaField_fieldOffsets[4];
extern char lbl_8055D540[8];
extern char lbl_8055D548[8];
extern void *igEnumMetaField_meta;
extern void *lbl_80561C34;
extern void *igEnumArrayMetaField_meta;
extern void *lbl_80561C40;
extern void *lbl_80561C48;
extern void *igDriverDatabase_meta;
extern void *lbl_805621F4;
void *igEnumArrayMetaField_getMeta();
void *igEnumArrayMetaField_vtableRead();
void igEnumArrayMetaField_arkRegister();
void igEnumArrayMetaField_register();
void *igEnumArrayMetaField_getMetaCall();
void *igEnumArrayMetaField_parentMeta();
void igEnumArrayMetaField_fieldInit();
void *igDriverDatabase_getMeta();
void *igDriverDatabase_vtableRead();
void igDriverDatabase_arkRegister();
void igDriverDatabase_register();
void *igDriverDatabase_getMetaCall();
}
struct UnknownGenRoot800317CC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800317CC(){fn_80046FD8(this);}
};
struct UnknownGenObject800317CC_0 : UnknownGenRoot800317CC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800317CC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800317CC_1 : UnknownGenObject800317CC_0 {
 inline ~UnknownGenObject800317CC_1(){unknown00=lbl_804758E4;}
};
struct UnknownGenObject800317CC : UnknownGenObject800317CC_1 {
 char unknown10[48];
 inline ~UnknownGenObject800317CC(){unknown00=igEnumArrayMetaField_vtable;}
};
struct UnknownGenRoot80031AF8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80031AF8(){igObject_construct(this);}
};
struct UnknownGenObject80031AF8 : UnknownGenRoot80031AF8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject80031AF8(){unknown00=igDriverDatabase_vtable;}
};
extern "C" {
void fn_800319A4(){
 if(!lbl_80561C40){
  void *object=(lbl_80561C40=meta_createInstance(igEnumArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561C40));
   reinterpret_cast<short *>(lbl_80561C40)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561C40);
  }
 }
}
void *fn_80031A3C(){
 void *value0;
 if(!lbl_80561C48){
  value0=fn_800635C8(lbl_80466CA8,lbl_8055D540,lbl_8055D548,2);
  lbl_80561C48=value0;
 }
 return lbl_80561C48;
}
void *igDriverDatabase_create(void *object){
 igDriverDatabase_arkRegister();
 return meta_createInstance(igDriverDatabase_meta,object);
}
void *igDriverDatabase_getMeta(){
 if(!igDriverDatabase_meta || !(reinterpret_cast<unsigned int *>(igDriverDatabase_meta)[0x24/4]&4)) igDriverDatabase_arkRegister();
 return igDriverDatabase_meta;
}
void *igDriverDatabase_vtableRead(){
 UnknownGenObject80031AF8 object;
 object.unknown00=igDriverDatabase_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDriverDatabase_arkRegister(){
 meta_registerNow((int)igDriverDatabase_register);
}
void igDriverDatabase_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igDriverDatabase_meta,(int)igObject_register,(int)fn_800237D0,(int)igDriverDatabase_getMetaCall,(int)igDriverDatabase_className,56,(int)igDriverDatabase_vtableRead,(int)igDriverDatabase_fieldInit,0,(int)igDriverDatabase_dependencies);
}
void *igDriverDatabase_getMetaCall(){return igDriverDatabase_getMeta();}
}
#pragma pop
