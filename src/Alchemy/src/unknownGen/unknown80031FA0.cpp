#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_80032B94();
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
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igDirectory_fieldInit();
void igMetaField_register();
void igObjectList_register();
extern char igDoubleMetaField_className[];
extern char igDoubleArrayMetaField_className[];
extern char igDirectoryList_className[];
extern char lbl_8046701C[];
extern char igDirectory_className[];
extern char lbl_80471914[];
extern char igDoubleMetaField_vtable[];
extern char igDoubleArrayMetaField_vtable[];
extern char igDirectory_vtable[];
extern char igDataList_vtable[];
extern char igDirectoryList_vtable[];
extern char lbl_80475824[];
extern char lbl_80475A34[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_8055D580[8];
extern char lbl_8055D588[8];
extern char lbl_8055D590[4];
extern char lbl_8055D594[4];
extern char lbl_8055D598[4];
extern char lbl_8055D59C[4];
extern char lbl_8055D5A0[8];
extern void *igDoubleMetaField_meta;
extern void *lbl_80561C98;
extern void *igDoubleArrayMetaField_meta;
extern void *lbl_80561CA0;
extern void *igDirectoryList_meta;
extern void *igDirectory_meta;
extern void *lbl_805621F4;
void *igDoubleMetaField_getMeta();
void *igDoubleMetaField_vtableRead();
void igDoubleMetaField_registerNow();
void igDoubleMetaField_register();
void *igDoubleMetaField_getMetaCall();
void *igDoubleArrayMetaField_getMeta();
void *igDoubleArrayMetaField_vtableRead();
void igDoubleArrayMetaField_registerNow();
void igDoubleArrayMetaField_register();
void *igDoubleArrayMetaField_getMetaCall();
void *igDoubleArrayMetaField_parentMeta();
void igDoubleArrayMetaField_fieldInit();
void *igDirectoryList_getMeta();
void *igDirectoryList_vtableRead();
void igDirectoryList_registerNow();
void igDirectoryList_register();
void *igDirectoryList_getMetaCall();
void *igDirectory_getMeta();
void *igDirectory_vtableRead();
void igDirectory_registerNow();
void igDirectory_register();
void *igDirectory_getMetaCall();
}
struct UnknownGenRoot80032014 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032014(){fn_800638E0(this);}
};
struct UnknownGenObject80032014_0 : UnknownGenRoot80032014 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80032014_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80032014 : UnknownGenObject80032014_0 {
 char unknown10[48];
 inline ~UnknownGenObject80032014(){unknown00=igDoubleMetaField_vtable;}
};
struct UnknownGenRoot80032258 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032258(){fn_800638E0(this);}
};
struct UnknownGenObject80032258_0 : UnknownGenRoot80032258 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80032258_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80032258_1 : UnknownGenObject80032258_0 {
 inline ~UnknownGenObject80032258_1(){unknown00=igDoubleMetaField_vtable;}
};
struct UnknownGenObject80032258 : UnknownGenObject80032258_1 {
 char unknown10[48];
 inline ~UnknownGenObject80032258(){unknown00=igDoubleArrayMetaField_vtable;}
};
struct UnknownGenObject80032544_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80032718 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032718(){igObject_construct(this);}
};
struct UnknownGenObject80032718 : UnknownGenRoot80032718 {
 char unknown04[16];
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[12];
 UnknownGenRefMember unknown3C;
 char unknown40[4];
 UnknownGenRefMember unknown44;
 inline ~UnknownGenObject80032718(){unknown00=igDirectory_vtable;}
};
extern "C" {
void *igDoubleMetaField_create(void *object){
 igDoubleMetaField_registerNow();
 return meta_createInstance(igDoubleMetaField_meta,object);
}
void *igDoubleMetaField_getMeta(){
 if(!igDoubleMetaField_meta || !(reinterpret_cast<unsigned int *>(igDoubleMetaField_meta)[0x24/4]&4)) igDoubleMetaField_registerNow();
 return igDoubleMetaField_meta;
}
void *igDoubleMetaField_vtableRead(){
 UnknownGenObject80032014 object;
 object.unknown00=igDoubleMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDoubleMetaField_registerNow(){
 meta_registerNow((int)igDoubleMetaField_register);
}
void igDoubleMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igDoubleMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igDoubleMetaField_getMetaCall,(int)igDoubleMetaField_className,52,(int)igDoubleMetaField_vtableRead,0,0,(int)lbl_8055D580);
}
void *igDoubleMetaField_getMetaCall(){return igDoubleMetaField_getMeta();}
void fn_80032154(){
 if(!lbl_80561C98){
  void *object=(lbl_80561C98=meta_createInstance(igDoubleMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561C98));
   reinterpret_cast<short *>(lbl_80561C98)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561C98);
  }
 }
}
void *fn_800321EC(){
 if(!lbl_80561C98){
  igDoubleMetaField_registerNow();
 }
 return lbl_80561C98;
}
void *igDoubleArrayMetaField_getMeta(){
 if(!igDoubleArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igDoubleArrayMetaField_meta)[0x24/4]&4)) igDoubleArrayMetaField_registerNow();
 return igDoubleArrayMetaField_meta;
}
void *igDoubleArrayMetaField_vtableRead(){
 UnknownGenObject80032258 object;
 object.unknown00=igDoubleMetaField_vtable;
 object.unknown00=igDoubleArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDoubleArrayMetaField_registerNow(){
 meta_registerNow((int)igDoubleArrayMetaField_register);
}
void igDoubleArrayMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igDoubleArrayMetaField_meta,(int)igDoubleMetaField_register,(int)igDoubleArrayMetaField_parentMeta,(int)igDoubleArrayMetaField_getMetaCall,(int)igDoubleArrayMetaField_className,56,(int)igDoubleArrayMetaField_vtableRead,(int)igDoubleArrayMetaField_fieldInit,0,(int)lbl_8055D588);
}
void *igDoubleArrayMetaField_getMetaCall(){return igDoubleArrayMetaField_getMeta();}
void *igDoubleArrayMetaField_parentMeta(){return igDoubleMetaField_meta;}
void igDoubleArrayMetaField_fieldInit(){
 void *meta=igDoubleArrayMetaField_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_8055D590,1);
 fn_80053650(meta_field(meta,field),1);
 meta_setupFields(meta,lbl_8055D594,lbl_8055D598,lbl_8055D59C,field);
}
void fn_80032434(){
 if(!lbl_80561CA0){
  void *object=(lbl_80561CA0=meta_createInstance(igDoubleArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561CA0));
   reinterpret_cast<short *>(lbl_80561CA0)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561CA0);
  }
 }
}
void *fn_800324CC(){
 if(!igDirectoryList_meta) igDirectoryList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDirectoryList_meta;
}
void *igDirectoryList_getMeta(){
 if(!igDirectoryList_meta || !(reinterpret_cast<unsigned int *>(igDirectoryList_meta)[0x24/4]&4)) igDirectoryList_registerNow();
 return igDirectoryList_meta;
}
void *igDirectoryList_vtableRead(){
 UnknownGenObject80032544_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80475824;
 object.unknown00=igDirectoryList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDirectoryList_registerNow(){
 meta_registerNow((int)igDirectoryList_register);
}
void igDirectoryList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igDirectoryList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igDirectoryList_getMetaCall,(int)igDirectoryList_className,20,(int)igDirectoryList_vtableRead,0,0,(int)lbl_8055D5A0);
}
void *igDirectoryList_getMetaCall(){return igDirectoryList_getMeta();}
void *igDirectory_create(void *object){
 igDirectory_registerNow();
 return meta_createInstance(igDirectory_meta,object);
}
void *fn_800326A0(){
 if(!igDirectory_meta) igDirectory_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDirectory_meta;
}
void *igDirectory_getMeta(){
 if(!igDirectory_meta || !(reinterpret_cast<unsigned int *>(igDirectory_meta)[0x24/4]&4)) igDirectory_registerNow();
 return igDirectory_meta;
}
void *igDirectory_vtableRead(){
 UnknownGenObject80032718 object;
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80475A34;
 object.unknown00=igDirectory_vtable;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown3C.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDirectory_registerNow(){
 meta_registerNow((int)igDirectory_register);
}
void igDirectory_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igDirectory_meta,(int)igObjectList_register,(int)fn_80024180,(int)igDirectory_getMetaCall,(int)igDirectory_className,72,(int)igDirectory_vtableRead,(int)igDirectory_fieldInit,(int)fn_80032B94,(int)lbl_8046701C);
}
void *igDirectory_getMetaCall(){return igDirectory_getMeta();}
}
#pragma pop
