#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80023CF4();
void *fn_80024180();
void *fn_80028F84();
void *fn_80029A5C();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igNamedObject_register();
void igObjectList_register();
void igObject_register();
extern char igVirtualCFuncMetaField_className[];
extern char igPluginRepositoryList_className[];
extern char igPluginRepository_className[];
extern char lbl_804640A4[];
extern char igObjectStringMap_className[];
extern char igDataList_vtable[];
extern char igObjectStringMap_vtable[];
extern char igPluginRepository_vtable[];
extern char igNamedObject_vtable[];
extern char igPluginRepositoryList_vtable[];
extern char lbl_804765CC[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_8055D1C4[8];
extern char lbl_8055D1CC[8];
extern char lbl_8055D1D4[8];
extern char lbl_8055D1DC[8];
extern char lbl_8055D1E4[8];
extern char lbl_8055D1EC[8];
extern char lbl_8055D1FC[8];
extern char lbl_8055D204[8];
extern char lbl_8055D20C[8];
extern void *igPluginRepositoryList_meta;
extern void *lbl_805616C8;
extern void *igPluginRepository_meta;
extern void *igObjectStringMap_meta;
extern void *igInfo_meta;
extern void *lbl_805621F4;
void *igPluginRepositoryList_getMeta();
void *igPluginRepositoryList_vtableRead();
void igPluginRepositoryList_registerNow();
void igPluginRepositoryList_register();
void *igPluginRepositoryList_getMetaCall();
void *fn_80028214();
void *igPluginRepository_getMeta();
void *igPluginRepository_vtableRead();
void igPluginRepository_registerNow();
void igPluginRepository_register();
void *igPluginRepository_getMetaCall();
void igPluginRepository_fieldInit();
void *igObjectStringMap_getMeta();
void *igObjectStringMap_vtableRead();
void igObjectStringMap_registerNow();
void igObjectStringMap_register();
void *igObjectStringMap_getMetaCall();
void igObjectStringMap_fieldInit();
}
struct UnknownGenObject800280F0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800282D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800282D4(){fn_8006665C(this);}
};
struct UnknownGenObject800282D4_0 : UnknownGenRoot800282D4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800282D4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800282D4 : UnknownGenObject800282D4_0 {
 UnknownGenString unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800282D4(){unknown00=igPluginRepository_vtable;}
};
struct UnknownGenRoot8002856C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002856C(){fn_8006665C(this);}
};
struct UnknownGenObject8002856C : UnknownGenRoot8002856C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8002856C(){unknown00=igObjectStringMap_vtable;}
};
extern "C" {
void *fn_80028078(){
 if(!igPluginRepositoryList_meta) igPluginRepositoryList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPluginRepositoryList_meta;
}
void *igPluginRepositoryList_getMeta(){
 if(!igPluginRepositoryList_meta || !(reinterpret_cast<unsigned int *>(igPluginRepositoryList_meta)[0x24/4]&4)) igPluginRepositoryList_registerNow();
 return igPluginRepositoryList_meta;
}
void *igPluginRepositoryList_vtableRead(){
 UnknownGenObject800280F0_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804765CC;
 object.unknown00=igPluginRepositoryList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPluginRepositoryList_registerNow(){
 meta_registerNow((int)igPluginRepositoryList_register);
}
void igPluginRepositoryList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igPluginRepositoryList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igPluginRepositoryList_getMetaCall,(int)igPluginRepositoryList_className,20,(int)igPluginRepositoryList_vtableRead,0,0,(int)lbl_8055D1C4);
}
void *igPluginRepositoryList_getMetaCall(){return igPluginRepositoryList_getMeta();}
void *fn_80028214(){
 char *data=igVirtualCFuncMetaField_className;
 if(!lbl_805616C8) lbl_805616C8=fn_800635C8(data+0xF38,data+0xF20,data+0xF2C,0x3);
 return lbl_805616C8;
}
void *igPluginRepository_create(void *object){
 igPluginRepository_registerNow();
 return meta_createInstance(igPluginRepository_meta,object);
}
void *igPluginRepository_getMeta(){
 if(!igPluginRepository_meta || !(reinterpret_cast<unsigned int *>(igPluginRepository_meta)[0x24/4]&4)) igPluginRepository_registerNow();
 return igPluginRepository_meta;
}
void *igPluginRepository_vtableRead(){
 UnknownGenObject800282D4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igPluginRepository_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPluginRepository_registerNow(){
 meta_registerNow((int)igPluginRepository_register);
}
void igPluginRepository_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igPluginRepository_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igPluginRepository_getMetaCall,(int)igPluginRepository_className,20,(int)igPluginRepository_vtableRead,(int)igPluginRepository_fieldInit,0,0);
}
void *igPluginRepository_getMetaCall(){return igPluginRepository_getMeta();}
void igPluginRepository_fieldInit(){
 void *value0=igPluginRepository_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D1CC,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_80028214;
 fn_800659C0(value0,lbl_8055D1D4,lbl_8055D1DC,lbl_8055D1E4,value1);
}
void *fn_800284EC(){return igInfo_meta;}
void *fn_800284F4(){
 if(!igObjectStringMap_meta) igObjectStringMap_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igObjectStringMap_meta;
}
void *igObjectStringMap_getMeta(){
 if(!igObjectStringMap_meta || !(reinterpret_cast<unsigned int *>(igObjectStringMap_meta)[0x24/4]&4)) igObjectStringMap_registerNow();
 return igObjectStringMap_meta;
}
void *igObjectStringMap_vtableRead(){
 UnknownGenObject8002856C object;
 object.unknown00=igObjectStringMap_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectStringMap_registerNow(){
 meta_registerNow((int)igObjectStringMap_register);
}
void igObjectStringMap_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igObjectStringMap_meta,(int)igObject_register,(int)fn_800237D0,(int)igObjectStringMap_getMetaCall,(int)igObjectStringMap_className,16,(int)igObjectStringMap_vtableRead,(int)igObjectStringMap_fieldInit,0,(int)lbl_804640A4);
}
void *igObjectStringMap_getMetaCall(){return igObjectStringMap_getMeta();}
void igObjectStringMap_fieldInit(){
 void *value0=igObjectStringMap_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D1EC,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_8055D1FC,lbl_8055D204,lbl_8055D20C,value1);
}
}
#pragma pop
