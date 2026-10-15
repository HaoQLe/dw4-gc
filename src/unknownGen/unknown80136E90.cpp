#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void igObject_register();
void igOptBase_register();
void igQuantizeImage_fieldInit();
extern char igVertexBlending_className[];
extern char igRebindActors_className[];
extern char lbl_8049CCFC[];
extern char igQuantizeImage_className[];
extern char igRebindActors_vtable[];
extern char igQuantizeImage_vtable[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F69C[4];
extern char lbl_8055F6A0[4];
extern char lbl_8055F6A4[4];
extern char lbl_8055F6A8[4];
extern void *igRebindActors_meta;
extern void *lbl_80563D18;
extern void *igQuantizeImage_meta;
void *igRebindActors_getMeta();
void *igRebindActors_vtableRead();
void igRebindActors_registerNow();
void igRebindActors_register();
void *igRebindActors_getMetaCall();
void igRebindActors_fieldInit();
void *igQuantizeImage_getMeta();
void *igQuantizeImage_vtableRead();
void igQuantizeImage_registerNow();
void igQuantizeImage_register();
void *igQuantizeImage_getMetaCall();
}
struct UnknownGenRoot80136ECC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80136ECC(){fn_8006665C(this);}
};
struct UnknownGenObject80136ECC_0 : UnknownGenRoot80136ECC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80136ECC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80136ECC : UnknownGenObject80136ECC_0 {
 char unknown28[8];
 inline ~UnknownGenObject80136ECC(){unknown00=igRebindActors_vtable;}
};
struct UnknownGenRoot8013719C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013719C(){fn_8006665C(this);}
};
struct UnknownGenObject8013719C : UnknownGenRoot8013719C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject8013719C(){unknown00=igQuantizeImage_vtable;}
};
extern "C" {
void *igRebindActors_getMeta(){
 if(!igRebindActors_meta || !(reinterpret_cast<unsigned int *>(igRebindActors_meta)[0x24/4]&4)) igRebindActors_registerNow();
 return igRebindActors_meta;
}
void *igRebindActors_vtableRead(){
 UnknownGenObject80136ECC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igRebindActors_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRebindActors_registerNow(){
 meta_registerNow((int)igRebindActors_register);
}
void igRebindActors_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igRebindActors_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igRebindActors_getMetaCall,(int)igRebindActors_className,44,(int)igRebindActors_vtableRead,(int)igRebindActors_fieldInit,0,0);
}
void *igRebindActors_getMetaCall(){return igRebindActors_getMeta();}
void igRebindActors_fieldInit(){
 void *value0=igRebindActors_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F69C,1);
 fn_800659C0(value0,lbl_8055F6A0,lbl_8055F6A4,lbl_8055F6A8,value1);
}
void *fn_801370DC(){
 char *data=igVertexBlending_className;
 if(!lbl_80563D18) lbl_80563D18=fn_800635C8(data+0x1060,data+0x1038,data+0x104C,0x5);
 return lbl_80563D18;
}
void *igQuantizeImage_create(void *object){
 igQuantizeImage_registerNow();
 return meta_createInstance(igQuantizeImage_meta,object);
}
void *igQuantizeImage_getMeta(){
 if(!igQuantizeImage_meta || !(reinterpret_cast<unsigned int *>(igQuantizeImage_meta)[0x24/4]&4)) igQuantizeImage_registerNow();
 return igQuantizeImage_meta;
}
void *igQuantizeImage_vtableRead(){
 UnknownGenObject8013719C object;
 object.unknown00=igQuantizeImage_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igQuantizeImage_registerNow(){
 meta_registerNow((int)igQuantizeImage_register);
}
void igQuantizeImage_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igQuantizeImage_meta,(int)igObject_register,(int)fn_800237D0,(int)igQuantizeImage_getMetaCall,(int)igQuantizeImage_className,24,(int)igQuantizeImage_vtableRead,(int)igQuantizeImage_fieldInit,0,(int)lbl_8049CCFC);
}
void *igQuantizeImage_getMetaCall(){return igQuantizeImage_getMeta();}
}
#pragma pop
