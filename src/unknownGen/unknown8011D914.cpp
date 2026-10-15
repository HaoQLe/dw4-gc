#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8011D8BC();
void *fn_8011F74C();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368(int);
void *fn_80127910();
void igMetaField_register();
void igObjectList_register();
void igObject_register();
void igSphere_fieldInit();
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igVolume_className[];
extern char igVolumeList_className[];
extern char igVectorMorphing_className[];
extern char igVectorBlending_className[];
extern char igVec4ucMetaField_className[];
extern char igVec4fMetaField_className[];
extern char igVec4fArrayMetaField_className[];
extern char igVec4dMetaField_className[];
extern char igVec3ucMetaField_className[];
extern char igVec3fMetaField_className[];
extern char igVec3dMetaField_className[];
extern char igVec2fMetaField_className[];
extern char igVec2dMetaField_className[];
extern char igSphere_className[];
extern char igVec4ucMetaField_vtable[];
extern char igVec4fMetaField_vtable[];
extern char igVec4fArrayMetaField_vtable[];
extern char igVec4dMetaField_vtable[];
extern char igVec3ucMetaField_vtable[];
extern char igVec3fMetaField_vtable[];
extern char igVec3dMetaField_vtable[];
extern char igVec2fMetaField_vtable[];
extern char igVec2dMetaField_vtable[];
extern char igSphere_vtable[];
extern char lbl_8049B9DC[];
extern char igVectorBlending_vtable[];
extern char igVectorMorphing_vtable[];
extern char igVolumeList_vtable[];
extern char lbl_8049BB54[];
extern char lbl_8055F2F8[8];
extern char lbl_8055F300[8];
extern char lbl_8055F310[8];
extern char lbl_8055F318[8];
extern char lbl_8055F320[4];
extern char lbl_8055F324[4];
extern char lbl_8055F328[4];
extern char lbl_8055F32C[4];
extern char lbl_8055F330[8];
extern char lbl_8055F338[8];
extern char lbl_8055F340[8];
extern char lbl_8055F348[8];
extern char lbl_8055F350[8];
extern char lbl_8055F358[8];
extern void *lbl_805621F4;
extern void *igVolume_meta;
extern void *igVolumeList_meta;
extern void *igVectorMorphing_meta;
extern void *igVectorBlending_meta;
extern void *igVec4ucMetaField_meta;
extern void *lbl_805638DC;
extern void *igVec4fMetaField_meta;
extern void *lbl_805638EC;
extern void *igVec4fArrayMetaField_meta;
extern void *lbl_805638F4;
extern void *igVec4dMetaField_meta;
extern void *lbl_80563900;
extern void *igVec3ucMetaField_meta;
extern void *lbl_80563910;
extern void *igVec3fMetaField_meta;
extern void *lbl_80563920;
extern void *igVec3dMetaField_meta;
extern void *lbl_80563930;
extern void *igVec2fMetaField_meta;
extern void *lbl_80563940;
extern void *igVec2dMetaField_meta;
extern void *lbl_80563950;
extern void *igSphere_meta;
void *igVolume_getMeta();
void igVolume_registerNow();
void igVolume_register();
void *igVolume_getMetaCall();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *igVolumeList_getMeta();
void *igVolumeList_vtableRead();
void igVolumeList_registerNow();
void igVolumeList_register();
void *igVolumeList_getMetaCall();
void *igVectorMorphing_getMeta();
void *igVectorMorphing_vtableRead();
void igVectorMorphing_registerNow();
void igVectorMorphing_register();
void *igVectorMorphing_getMetaCall();
void *fn_8011DDC4();
void *igVectorBlending_getMeta();
void *igVectorBlending_vtableRead();
void igVectorBlending_registerNow();
void igVectorBlending_register();
void *igVectorBlending_getMetaCall();
void *fn_8011DF18();
void *igVec4ucMetaField_getMeta();
void *igVec4ucMetaField_vtableRead();
void igVec4ucMetaField_registerNow();
void igVec4ucMetaField_register();
void *igVec4ucMetaField_getMetaCall();
void *igVec4fMetaField_getMeta();
void *igVec4fMetaField_vtableRead();
void igVec4fMetaField_registerNow();
void igVec4fMetaField_register();
void *igVec4fMetaField_getMetaCall();
void *igVec4fArrayMetaField_getMeta();
void *igVec4fArrayMetaField_vtableRead();
void igVec4fArrayMetaField_registerNow();
void igVec4fArrayMetaField_register();
void *igVec4fArrayMetaField_getMetaCall();
void *igVec4fArrayMetaField_parentMeta();
void igVec4fArrayMetaField_fieldInit();
void *igVec4dMetaField_getMeta();
void *igVec4dMetaField_vtableRead();
void igVec4dMetaField_registerNow();
void igVec4dMetaField_register();
void *igVec4dMetaField_getMetaCall();
void *igVec3ucMetaField_getMeta();
void *igVec3ucMetaField_vtableRead();
void igVec3ucMetaField_registerNow();
void igVec3ucMetaField_register();
void *igVec3ucMetaField_getMetaCall();
void *igVec3fMetaField_getMeta();
void *igVec3fMetaField_vtableRead();
void igVec3fMetaField_registerNow();
void igVec3fMetaField_register();
void *igVec3fMetaField_getMetaCall();
void *igVec3dMetaField_getMeta();
void *igVec3dMetaField_vtableRead();
void igVec3dMetaField_registerNow();
void igVec3dMetaField_register();
void *igVec3dMetaField_getMetaCall();
void *igVec2fMetaField_getMeta();
void *igVec2fMetaField_vtableRead();
void igVec2fMetaField_registerNow();
void igVec2fMetaField_register();
void *igVec2fMetaField_getMetaCall();
void *igVec2dMetaField_getMeta();
void *igVec2dMetaField_vtableRead();
void igVec2dMetaField_registerNow();
void igVec2dMetaField_register();
void *igVec2dMetaField_getMetaCall();
void *igSphere_getMeta();
void *igSphere_vtableRead();
void igSphere_registerNow();
void igSphere_register();
void *igSphere_getMetaCall();
void *fn_8011F6A4();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=igVec4ucMetaField_vtable;}
};
struct UnknownGenRoot8011E1F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E1F0(){fn_800638E0(this);}
};
struct UnknownGenObject8011E1F0_0 : UnknownGenRoot8011E1F0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E1F0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E1F0 : UnknownGenObject8011E1F0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenRoot8011E46C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E46C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E46C_0 : UnknownGenRoot8011E46C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E46C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E46C_1 : UnknownGenObject8011E46C_0 {
 inline ~UnknownGenObject8011E46C_1(){unknown00=igVec4fMetaField_vtable;}
};
struct UnknownGenObject8011E46C : UnknownGenObject8011E46C_1 {
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=igVec4fArrayMetaField_vtable;}
};
struct UnknownGenRoot8011E71C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E71C(){fn_800638E0(this);}
};
struct UnknownGenObject8011E71C_0 : UnknownGenRoot8011E71C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E71C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C : UnknownGenObject8011E71C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=igVec4dMetaField_vtable;}
};
struct UnknownGenRoot8011E960 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011E960(){fn_800638E0(this);}
};
struct UnknownGenObject8011E960_0 : UnknownGenRoot8011E960 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011E960_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E960 : UnknownGenObject8011E960_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=igVec3ucMetaField_vtable;}
};
struct UnknownGenRoot8011EBDC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EBDC(){fn_800638E0(this);}
};
struct UnknownGenObject8011EBDC_0 : UnknownGenRoot8011EBDC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EBDC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EBDC : UnknownGenObject8011EBDC_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=igVec3fMetaField_vtable;}
};
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=igVec3dMetaField_vtable;}
};
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=igVec2fMetaField_vtable;}
};
struct UnknownGenRoot8011F2E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F2E0(){fn_800638E0(this);}
};
struct UnknownGenObject8011F2E0_0 : UnknownGenRoot8011F2E0 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F2E0_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F2E0 : UnknownGenObject8011F2E0_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=igVec2dMetaField_vtable;}
};
struct UnknownGenObject8011F598_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8011D914(){
 if(!igVolume_meta) igVolume_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVolume_meta;
}
void *igVolume_getMeta(){
 if(!igVolume_meta || !(reinterpret_cast<unsigned int *>(igVolume_meta)[0x24/4]&4)) igVolume_registerNow();
 return igVolume_meta;
}
void igVolume_registerNow(){
 meta_registerNow((int)igVolume_register);
}
void igVolume_register(){
 fn_8011D8BC();
 meta_registerClass(1,(int)&igVolume_meta,(int)igObject_register,(int)fn_800237D0,(int)igVolume_getMetaCall,(int)igVolume_className,8,0,(int)fn_8011DA48,(int)fn_8011DA70,0);
}
void *igVolume_getMetaCall(){return igVolume_getMeta();}
void fn_8011DA48(){
 fn_80065D94((int)fn_8011DA9C);
}
void fn_8011DA70(){
 fn_8012728C();
 fn_80065DBC((int)fn_80127368);
}
void *fn_8011DA9C(){return fn_80127910();}
void *igVolumeList_create(void *object){
 igVolumeList_registerNow();
 return meta_createInstance(igVolumeList_meta,object);
}
void *fn_8011DAF4(){
 if(!igVolumeList_meta) igVolumeList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVolumeList_meta;
}
void *igVolumeList_getMeta(){
 if(!igVolumeList_meta || !(reinterpret_cast<unsigned int *>(igVolumeList_meta)[0x24/4]&4)) igVolumeList_registerNow();
 return igVolumeList_meta;
}
void *igVolumeList_vtableRead(){
 UnknownGenObject8011DB6C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8049BB54;
 object.unknown00=igVolumeList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVolumeList_registerNow(){
 meta_registerNow((int)igVolumeList_register);
}
void igVolumeList_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igVolumeList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igVolumeList_getMetaCall,(int)igVolumeList_className,20,(int)igVolumeList_vtableRead,0,0,(int)lbl_8055F2F8);
}
void *igVolumeList_getMetaCall(){return igVolumeList_getMeta();}
void *igVectorMorphing_getMeta(){
 if(!igVectorMorphing_meta || !(reinterpret_cast<unsigned int *>(igVectorMorphing_meta)[0x24/4]&4)) igVectorMorphing_registerNow();
 return igVectorMorphing_meta;
}
void *igVectorMorphing_vtableRead(){
 UnknownGenObject8011DCCC_0 object;
 igObject_construct(&object);
 object.unknown00=igVectorMorphing_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVectorMorphing_registerNow(){
 meta_registerNow((int)igVectorMorphing_register);
}
void igVectorMorphing_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igVectorMorphing_meta,(int)igObject_register,(int)fn_800237D0,(int)igVectorMorphing_getMetaCall,(int)igVectorMorphing_className,8,(int)igVectorMorphing_vtableRead,0,(int)fn_8011DDC4,0);
}
void *igVectorMorphing_getMetaCall(){return igVectorMorphing_getMeta();}
void *fn_8011DDC4(){return fn_80127270();}
void *igVectorBlending_getMeta(){
 if(!igVectorBlending_meta || !(reinterpret_cast<unsigned int *>(igVectorBlending_meta)[0x24/4]&4)) igVectorBlending_registerNow();
 return igVectorBlending_meta;
}
void *igVectorBlending_vtableRead(){
 UnknownGenObject8011DE20_0 object;
 igObject_construct(&object);
 object.unknown00=igVectorBlending_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVectorBlending_registerNow(){
 meta_registerNow((int)igVectorBlending_register);
}
void igVectorBlending_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igVectorBlending_meta,(int)igObject_register,(int)fn_800237D0,(int)igVectorBlending_getMetaCall,(int)igVectorBlending_className,8,(int)igVectorBlending_vtableRead,0,(int)fn_8011DF18,0);
}
void *igVectorBlending_getMetaCall(){return igVectorBlending_getMeta();}
void *fn_8011DF18(){return fn_8012705C();}
void *igVec4ucMetaField_getMeta(){
 if(!igVec4ucMetaField_meta || !(reinterpret_cast<unsigned int *>(igVec4ucMetaField_meta)[0x24/4]&4)) igVec4ucMetaField_registerNow();
 return igVec4ucMetaField_meta;
}
void *igVec4ucMetaField_vtableRead(){
 UnknownGenObject8011DF74 object;
 object.unknown00=igVec4ucMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVec4ucMetaField_registerNow(){
 meta_registerNow((int)igVec4ucMetaField_register);
}
void igVec4ucMetaField_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igVec4ucMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igVec4ucMetaField_getMetaCall,(int)igVec4ucMetaField_className,52,(int)igVec4ucMetaField_vtableRead,0,0,(int)lbl_8055F300);
}
void *igVec4ucMetaField_getMetaCall(){return igVec4ucMetaField_getMeta();}
void fn_8011E0B4(){
 if(!lbl_805638DC){
  void *object=(lbl_805638DC=meta_createInstance(igVec4ucMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805638DC));
   reinterpret_cast<short *>(lbl_805638DC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805638DC);
  }
 }
}
void *fn_8011E14C(){
 if(!lbl_805638DC){
  igVec4ucMetaField_registerNow();
 }
 return lbl_805638DC;
}
void *igVec4fMetaField_create(void *object){
 igVec4fMetaField_registerNow();
 return meta_createInstance(igVec4fMetaField_meta,object);
}
void *igVec4fMetaField_getMeta(){
 if(!igVec4fMetaField_meta || !(reinterpret_cast<unsigned int *>(igVec4fMetaField_meta)[0x24/4]&4)) igVec4fMetaField_registerNow();
 return igVec4fMetaField_meta;
}
void *igVec4fMetaField_vtableRead(){
 UnknownGenObject8011E1F0 object;
 object.unknown00=igVec4fMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVec4fMetaField_registerNow(){
 meta_registerNow((int)igVec4fMetaField_register);
}
void igVec4fMetaField_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igVec4fMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igVec4fMetaField_getMetaCall,(int)igVec4fMetaField_className,52,(int)igVec4fMetaField_vtableRead,0,0,(int)lbl_8055F310);
}
void *igVec4fMetaField_getMetaCall(){return igVec4fMetaField_getMeta();}
void fn_8011E330(){
 if(!lbl_805638EC){
  void *object=(lbl_805638EC=meta_createInstance(igVec4fMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805638EC));
   reinterpret_cast<short *>(lbl_805638EC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805638EC);
  }
 }
}
void *fn_8011E3C8(){
 if(!lbl_805638EC){
  igVec4fMetaField_registerNow();
 }
 return lbl_805638EC;
}
void *igVec4fArrayMetaField_create(void *object){
 igVec4fArrayMetaField_registerNow();
 return meta_createInstance(igVec4fArrayMetaField_meta,object);
}
void *igVec4fArrayMetaField_getMeta(){
 if(!igVec4fArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igVec4fArrayMetaField_meta)[0x24/4]&4)) igVec4fArrayMetaField_registerNow();
 return igVec4fArrayMetaField_meta;
}
void *igVec4fArrayMetaField_vtableRead(){
 UnknownGenObject8011E46C object;
 object.unknown00=igVec4fMetaField_vtable;
 object.unknown00=igVec4fArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVec4fArrayMetaField_registerNow(){
 meta_registerNow((int)igVec4fArrayMetaField_register);
}
void igVec4fArrayMetaField_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igVec4fArrayMetaField_meta,(int)igVec4fMetaField_register,(int)igVec4fArrayMetaField_parentMeta,(int)igVec4fArrayMetaField_getMetaCall,(int)igVec4fArrayMetaField_className,56,(int)igVec4fArrayMetaField_vtableRead,(int)igVec4fArrayMetaField_fieldInit,0,(int)lbl_8055F318);
}
void *igVec4fArrayMetaField_getMetaCall(){return igVec4fArrayMetaField_getMeta();}
void *igVec4fArrayMetaField_parentMeta(){return igVec4fMetaField_meta;}
void igVec4fArrayMetaField_fieldInit(){
 void *meta=igVec4fArrayMetaField_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_8055F320,1);
 fn_80053650(meta_field(meta,field),1);
 meta_setupFields(meta,lbl_8055F324,lbl_8055F328,lbl_8055F32C,field);
}
void fn_8011E648(){
 if(!lbl_805638F4){
  void *object=(lbl_805638F4=meta_createInstance(igVec4fArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805638F4));
   reinterpret_cast<short *>(lbl_805638F4)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805638F4);
  }
 }
}
void *igVec4dMetaField_getMeta(){
 if(!igVec4dMetaField_meta || !(reinterpret_cast<unsigned int *>(igVec4dMetaField_meta)[0x24/4]&4)) igVec4dMetaField_registerNow();
 return igVec4dMetaField_meta;
}
void *igVec4dMetaField_vtableRead(){
 UnknownGenObject8011E71C object;
 object.unknown00=igVec4dMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVec4dMetaField_registerNow(){
 meta_registerNow((int)igVec4dMetaField_register);
}
void igVec4dMetaField_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igVec4dMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igVec4dMetaField_getMetaCall,(int)igVec4dMetaField_className,52,(int)igVec4dMetaField_vtableRead,0,0,(int)lbl_8055F330);
}
void *igVec4dMetaField_getMetaCall(){return igVec4dMetaField_getMeta();}
void fn_8011E85C(){
 if(!lbl_80563900){
  void *object=(lbl_80563900=meta_createInstance(igVec4dMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563900));
   reinterpret_cast<short *>(lbl_80563900)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563900);
  }
 }
}
void *fn_8011E8F4(){
 if(!lbl_80563900){
  igVec4dMetaField_registerNow();
 }
 return lbl_80563900;
}
void *igVec3ucMetaField_getMeta(){
 if(!igVec3ucMetaField_meta || !(reinterpret_cast<unsigned int *>(igVec3ucMetaField_meta)[0x24/4]&4)) igVec3ucMetaField_registerNow();
 return igVec3ucMetaField_meta;
}
void *igVec3ucMetaField_vtableRead(){
 UnknownGenObject8011E960 object;
 object.unknown00=igVec3ucMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVec3ucMetaField_registerNow(){
 meta_registerNow((int)igVec3ucMetaField_register);
}
void igVec3ucMetaField_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igVec3ucMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igVec3ucMetaField_getMetaCall,(int)igVec3ucMetaField_className,52,(int)igVec3ucMetaField_vtableRead,0,0,(int)lbl_8055F338);
}
void *igVec3ucMetaField_getMetaCall(){return igVec3ucMetaField_getMeta();}
void fn_8011EAA0(){
 if(!lbl_80563910){
  void *object=(lbl_80563910=meta_createInstance(igVec3ucMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563910));
   reinterpret_cast<short *>(lbl_80563910)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563910);
  }
 }
}
void *fn_8011EB38(){
 if(!lbl_80563910){
  igVec3ucMetaField_registerNow();
 }
 return lbl_80563910;
}
void *igVec3fMetaField_create(void *object){
 igVec3fMetaField_registerNow();
 return meta_createInstance(igVec3fMetaField_meta,object);
}
void *igVec3fMetaField_getMeta(){
 if(!igVec3fMetaField_meta || !(reinterpret_cast<unsigned int *>(igVec3fMetaField_meta)[0x24/4]&4)) igVec3fMetaField_registerNow();
 return igVec3fMetaField_meta;
}
void *igVec3fMetaField_vtableRead(){
 UnknownGenObject8011EBDC object;
 object.unknown00=igVec3fMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVec3fMetaField_registerNow(){
 meta_registerNow((int)igVec3fMetaField_register);
}
void igVec3fMetaField_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igVec3fMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igVec3fMetaField_getMetaCall,(int)igVec3fMetaField_className,52,(int)igVec3fMetaField_vtableRead,0,0,(int)lbl_8055F340);
}
void *igVec3fMetaField_getMetaCall(){return igVec3fMetaField_getMeta();}
void fn_8011ED1C(){
 if(!lbl_80563920){
  void *object=(lbl_80563920=meta_createInstance(igVec3fMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563920));
   reinterpret_cast<short *>(lbl_80563920)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563920);
  }
 }
}
void *fn_8011EDB4(){
 if(!lbl_80563920){
  igVec3fMetaField_registerNow();
 }
 return lbl_80563920;
}
void *igVec3dMetaField_getMeta(){
 if(!igVec3dMetaField_meta || !(reinterpret_cast<unsigned int *>(igVec3dMetaField_meta)[0x24/4]&4)) igVec3dMetaField_registerNow();
 return igVec3dMetaField_meta;
}
void *igVec3dMetaField_vtableRead(){
 UnknownGenObject8011EE20 object;
 object.unknown00=igVec3dMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVec3dMetaField_registerNow(){
 meta_registerNow((int)igVec3dMetaField_register);
}
void igVec3dMetaField_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igVec3dMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igVec3dMetaField_getMetaCall,(int)igVec3dMetaField_className,52,(int)igVec3dMetaField_vtableRead,0,0,(int)lbl_8055F348);
}
void *igVec3dMetaField_getMetaCall(){return igVec3dMetaField_getMeta();}
void fn_8011EF60(){
 if(!lbl_80563930){
  void *object=(lbl_80563930=meta_createInstance(igVec3dMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563930));
   reinterpret_cast<short *>(lbl_80563930)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563930);
  }
 }
}
void *fn_8011EFF8(){
 if(!lbl_80563930){
  igVec3dMetaField_registerNow();
 }
 return lbl_80563930;
}
void *igVec2fMetaField_create(void *object){
 igVec2fMetaField_registerNow();
 return meta_createInstance(igVec2fMetaField_meta,object);
}
void *igVec2fMetaField_getMeta(){
 if(!igVec2fMetaField_meta || !(reinterpret_cast<unsigned int *>(igVec2fMetaField_meta)[0x24/4]&4)) igVec2fMetaField_registerNow();
 return igVec2fMetaField_meta;
}
void *igVec2fMetaField_vtableRead(){
 UnknownGenObject8011F09C object;
 object.unknown00=igVec2fMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVec2fMetaField_registerNow(){
 meta_registerNow((int)igVec2fMetaField_register);
}
void igVec2fMetaField_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igVec2fMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igVec2fMetaField_getMetaCall,(int)igVec2fMetaField_className,52,(int)igVec2fMetaField_vtableRead,0,0,(int)lbl_8055F350);
}
void *igVec2fMetaField_getMetaCall(){return igVec2fMetaField_getMeta();}
void fn_8011F1DC(){
 if(!lbl_80563940){
  void *object=(lbl_80563940=meta_createInstance(igVec2fMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563940));
   reinterpret_cast<short *>(lbl_80563940)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563940);
  }
 }
}
void *fn_8011F274(){
 if(!lbl_80563940){
  igVec2fMetaField_registerNow();
 }
 return lbl_80563940;
}
void *igVec2dMetaField_getMeta(){
 if(!igVec2dMetaField_meta || !(reinterpret_cast<unsigned int *>(igVec2dMetaField_meta)[0x24/4]&4)) igVec2dMetaField_registerNow();
 return igVec2dMetaField_meta;
}
void *igVec2dMetaField_vtableRead(){
 UnknownGenObject8011F2E0 object;
 object.unknown00=igVec2dMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVec2dMetaField_registerNow(){
 meta_registerNow((int)igVec2dMetaField_register);
}
void igVec2dMetaField_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igVec2dMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igVec2dMetaField_getMetaCall,(int)igVec2dMetaField_className,52,(int)igVec2dMetaField_vtableRead,0,0,(int)lbl_8055F358);
}
void *igVec2dMetaField_getMetaCall(){return igVec2dMetaField_getMeta();}
void fn_8011F420(){
 if(!lbl_80563950){
  void *object=(lbl_80563950=meta_createInstance(igVec2dMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563950));
   reinterpret_cast<short *>(lbl_80563950)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563950);
  }
 }
}
void *fn_8011F4B8(){
 if(!lbl_80563950){
  igVec2dMetaField_registerNow();
 }
 return lbl_80563950;
}
void *igSphere_create(void *object){
 igSphere_registerNow();
 return meta_createInstance(igSphere_meta,object);
}
void *fn_8011F520(){
 if(!igSphere_meta) igSphere_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSphere_meta;
}
void *igSphere_getMeta(){
 if(!igSphere_meta || !(reinterpret_cast<unsigned int *>(igSphere_meta)[0x24/4]&4)) igSphere_registerNow();
 return igSphere_meta;
}
void *igSphere_vtableRead(){
 UnknownGenObject8011F598_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8049B9DC;
 object.unknown00=igSphere_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSphere_registerNow(){
 meta_registerNow((int)igSphere_register);
}
void igSphere_register(){
 fn_8011D8BC();
 meta_registerClass(0,(int)&igSphere_meta,(int)igVolume_register,(int)fn_8011F6A4,(int)igSphere_getMetaCall,(int)igSphere_className,24,(int)igSphere_vtableRead,(int)igSphere_fieldInit,(int)fn_8011F74C,0);
}
void *igSphere_getMetaCall(){return igSphere_getMeta();}
void *fn_8011F6A4(){return igVolume_meta;}
}
#pragma pop
