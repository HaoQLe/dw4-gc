#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *fn_800635C8(void *,void *,void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_801308D0();
void *fn_801BFF38();
void igOptBase_register();
void igOptVisitObject_register();
void igResizeImage_fieldInit();
void igTypeLock_register();
extern char igVertexBlending_className[];
extern char igSegmentLock_className[];
extern char igScalePs2Texture_className[];
extern char igScaleActors_className[];
extern char igResortTransparency_className[];
extern char igResizeImage_className[];
extern char lbl_804A2C58[];
extern char igSegmentLock_vtable[];
extern char igScalePs2Texture_vtable[];
extern char igScaleActors_vtable[];
extern char igResortTransparency_vtable[];
extern char igResizeImage_vtable[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AA8E4[];
extern char lbl_804AAF48[];
extern char lbl_8055F584[8];
extern char lbl_8055F58C[8];
extern char lbl_8055F594[8];
extern char lbl_8055F59C[8];
extern char lbl_8055F5A4[8];
extern void *igTypeLock_meta;
extern void *igSegmentLock_meta;
extern void *igScalePs2Texture_meta;
extern void *igScaleActors_meta;
extern void *igResortTransparency_meta;
extern void *lbl_80563C08;
extern void *igResizeImage_meta;
extern char lbl_80566AEC[4];
void *igSegmentLock_getMeta();
void *igSegmentLock_vtableRead();
void igSegmentLock_registerNow();
void igSegmentLock_register();
void *igSegmentLock_getMetaCall();
void *igSegmentLock_parentMeta();
void *igScalePs2Texture_getMeta();
void *igScalePs2Texture_vtableRead();
void igScalePs2Texture_registerNow();
void igScalePs2Texture_register();
void *igScalePs2Texture_getMetaCall();
void *igScaleActors_getMeta();
void *igScaleActors_vtableRead();
void igScaleActors_registerNow();
void igScaleActors_register();
void *igScaleActors_getMetaCall();
void igScaleActors_fieldInit();
void *igResortTransparency_getMeta();
void *igResortTransparency_vtableRead();
void igResortTransparency_registerNow();
void igResortTransparency_register();
void *igResortTransparency_getMetaCall();
void *igResizeImage_getMeta();
void *igResizeImage_vtableRead();
void igResizeImage_registerNow();
void igResizeImage_register();
void *igResizeImage_getMetaCall();
}
struct UnknownGenObject80133888_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot801339E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801339E0(){igObject_construct(this);}
};
struct UnknownGenObject801339E0_0 : UnknownGenRoot801339E0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801339E0_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801339E0_1 : UnknownGenObject801339E0_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801339E0_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801339E0 : UnknownGenObject801339E0_1 {
 char unknown2C[12];
 inline ~UnknownGenObject801339E0(){unknown00=igScalePs2Texture_vtable;}
};
struct UnknownGenRoot80133C0C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80133C0C(){igObject_construct(this);}
};
struct UnknownGenObject80133C0C_0 : UnknownGenRoot80133C0C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80133C0C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80133C0C : UnknownGenObject80133C0C_0 {
 char unknown28[4];
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80133C0C(){unknown00=igScaleActors_vtable;}
};
struct UnknownGenRoot80133ED8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80133ED8(){igObject_construct(this);}
};
struct UnknownGenObject80133ED8_0 : UnknownGenRoot80133ED8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80133ED8_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80133ED8_1 : UnknownGenObject80133ED8_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80133ED8_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80133ED8 : UnknownGenObject80133ED8_1 {
 char unknown2C[12];
 inline ~UnknownGenObject80133ED8(){unknown00=igResortTransparency_vtable;}
};
struct UnknownGenRoot80134150 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80134150(){igObject_construct(this);}
};
struct UnknownGenObject80134150_0 : UnknownGenRoot80134150 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80134150_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80134150_1 : UnknownGenObject80134150_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80134150_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80134150 : UnknownGenObject80134150_1 {
 char unknown2C[44];
 inline ~UnknownGenObject80134150(){unknown00=igResizeImage_vtable;}
};
extern "C" {
void *igSegmentLock_getMeta(){
 if(!igSegmentLock_meta || !(reinterpret_cast<unsigned int *>(igSegmentLock_meta)[0x24/4]&4)) igSegmentLock_registerNow();
 return igSegmentLock_meta;
}
void *igSegmentLock_vtableRead(){
 UnknownGenObject80133888_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA8E4;
 object.unknown00=lbl_804A2C58;
 object.unknown00=igSegmentLock_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSegmentLock_registerNow(){
 meta_registerNow((int)igSegmentLock_register);
}
void igSegmentLock_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igSegmentLock_meta,(int)igTypeLock_register,(int)igSegmentLock_parentMeta,(int)igSegmentLock_getMetaCall,(int)igSegmentLock_className,32,(int)igSegmentLock_vtableRead,0,0,0);
}
void *igSegmentLock_getMetaCall(){return igSegmentLock_getMeta();}
void *igSegmentLock_parentMeta(){return igTypeLock_meta;}
void *igScalePs2Texture_getMeta(){
 if(!igScalePs2Texture_meta || !(reinterpret_cast<unsigned int *>(igScalePs2Texture_meta)[0x24/4]&4)) igScalePs2Texture_registerNow();
 return igScalePs2Texture_meta;
}
void *igScalePs2Texture_vtableRead(){
 UnknownGenObject801339E0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igScalePs2Texture_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igScalePs2Texture_registerNow(){
 meta_registerNow((int)igScalePs2Texture_register);
}
void igScalePs2Texture_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igScalePs2Texture_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igScalePs2Texture_getMetaCall,(int)igScalePs2Texture_className,44,(int)igScalePs2Texture_vtableRead,0,0,0);
}
void *igScalePs2Texture_getMetaCall(){return igScalePs2Texture_getMeta();}
void *igScaleActors_getMeta(){
 if(!igScaleActors_meta || !(reinterpret_cast<unsigned int *>(igScaleActors_meta)[0x24/4]&4)) igScaleActors_registerNow();
 return igScaleActors_meta;
}
void *igScaleActors_vtableRead(){
 UnknownGenObject80133C0C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igScaleActors_vtable;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igScaleActors_registerNow(){
 meta_registerNow((int)igScaleActors_register);
}
void igScaleActors_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igScaleActors_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igScaleActors_getMetaCall,(int)igScaleActors_className,48,(int)igScaleActors_vtableRead,(int)igScaleActors_fieldInit,0,(int)lbl_8055F584);
}
void *igScaleActors_getMetaCall(){return igScaleActors_getMeta();}
void igScaleActors_fieldInit(){
 void *value0=igScaleActors_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055F58C,2);
 void *value2=meta_field(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_80566AEC+0)));
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_801BFF38();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 meta_setupFields(value0,lbl_8055F594,lbl_8055F59C,lbl_8055F5A4,value1);
}
void *igResortTransparency_getMeta(){
 if(!igResortTransparency_meta || !(reinterpret_cast<unsigned int *>(igResortTransparency_meta)[0x24/4]&4)) igResortTransparency_registerNow();
 return igResortTransparency_meta;
}
void *igResortTransparency_vtableRead(){
 UnknownGenObject80133ED8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igResortTransparency_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igResortTransparency_registerNow(){
 meta_registerNow((int)igResortTransparency_register);
}
void igResortTransparency_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igResortTransparency_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igResortTransparency_getMetaCall,(int)igResortTransparency_className,44,(int)igResortTransparency_vtableRead,0,0,0);
}
void *igResortTransparency_getMetaCall(){return igResortTransparency_getMeta();}
void *fn_801340C8(){
 char *data=igVertexBlending_className;
 if(!lbl_80563C08) lbl_80563C08=fn_800635C8(data+0x990,data+0x950,data+0x970,0x8);
 return lbl_80563C08;
}
void *igResizeImage_getMeta(){
 if(!igResizeImage_meta || !(reinterpret_cast<unsigned int *>(igResizeImage_meta)[0x24/4]&4)) igResizeImage_registerNow();
 return igResizeImage_meta;
}
void *igResizeImage_vtableRead(){
 UnknownGenObject80134150 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igResizeImage_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igResizeImage_registerNow(){
 meta_registerNow((int)igResizeImage_register);
}
void igResizeImage_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igResizeImage_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igResizeImage_getMetaCall,(int)igResizeImage_className,76,(int)igResizeImage_vtableRead,(int)igResizeImage_fieldInit,0,0);
}
void *igResizeImage_getMetaCall(){return igResizeImage_getMeta();}
}
#pragma pop
