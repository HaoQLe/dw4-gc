#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *fn_800635C8(void *,void *,void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_801308D0();
void *fn_801BFF38();
void igOptBase_register();
void igOptVisitObject_register();
void igResizeImage_fieldInit();
void igTypeLock_register();
extern char lbl_8049BC80[];
extern char lbl_8049C540[];
extern char lbl_8049C550[];
extern char lbl_8049C564[];
extern char lbl_8049C588[];
extern char lbl_8049C61C[];
extern char lbl_804A2C58[];
extern char lbl_804A3358[];
extern char lbl_804A33CC[];
extern char lbl_804A3464[];
extern char lbl_804A34EC[];
extern char lbl_804A3584[];
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
extern void *lbl_80563AA4;
extern void *lbl_80563BF0;
extern void *lbl_80563BF4;
extern void *lbl_80563BF8;
extern void *lbl_80563C04;
extern void *lbl_80563C08;
extern void *lbl_80563C0C;
extern char lbl_80566AEC[4];
void *igSegmentLock_getMeta();
void *igSegmentLock_vtableRead();
void fn_801338EC();
void igSegmentLock_register();
void *igSegmentLock_getMetaCall();
void *igSegmentLock_parentMeta();
void *igScalePs2Texture_getMeta();
void *igScalePs2Texture_vtableRead();
void fn_80133B20();
void igScalePs2Texture_register();
void *igScalePs2Texture_getMetaCall();
void *igScaleActors_getMeta();
void *igScaleActors_vtableRead();
void fn_80133D3C();
void igScaleActors_register();
void *igScaleActors_getMetaCall();
void igScaleActors_fieldInit();
void *igResortTransparency_getMeta();
void *igResortTransparency_vtableRead();
void fn_80134018();
void igResortTransparency_register();
void *igResortTransparency_getMetaCall();
void *igResizeImage_getMeta();
void *igResizeImage_vtableRead();
void fn_80134290();
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
 inline UnknownGenRoot801339E0(){fn_8006665C(this);}
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
 inline ~UnknownGenObject801339E0(){unknown00=lbl_804A33CC;}
};
struct UnknownGenRoot80133C0C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80133C0C(){fn_8006665C(this);}
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
 inline ~UnknownGenObject80133C0C(){unknown00=lbl_804A3464;}
};
struct UnknownGenRoot80133ED8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80133ED8(){fn_8006665C(this);}
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
 inline ~UnknownGenObject80133ED8(){unknown00=lbl_804A34EC;}
};
struct UnknownGenRoot80134150 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80134150(){fn_8006665C(this);}
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
 inline ~UnknownGenObject80134150(){unknown00=lbl_804A3584;}
};
extern "C" {
void *igSegmentLock_getMeta(){
 if(!lbl_80563BF0 || !(reinterpret_cast<unsigned int *>(lbl_80563BF0)[0x24/4]&4)) fn_801338EC();
 return lbl_80563BF0;
}
void *igSegmentLock_vtableRead(){
 UnknownGenObject80133888_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA8E4;
 object.unknown00=lbl_804A2C58;
 object.unknown00=lbl_804A3358;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801338EC(){
 fn_80066188((int)igSegmentLock_register);
}
void igSegmentLock_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563BF0,(int)igTypeLock_register,(int)igSegmentLock_parentMeta,(int)igSegmentLock_getMetaCall,(int)lbl_8049C540,32,(int)igSegmentLock_vtableRead,0,0,0);
}
void *igSegmentLock_getMetaCall(){return igSegmentLock_getMeta();}
void *igSegmentLock_parentMeta(){return lbl_80563AA4;}
void *igScalePs2Texture_getMeta(){
 if(!lbl_80563BF4 || !(reinterpret_cast<unsigned int *>(lbl_80563BF4)[0x24/4]&4)) fn_80133B20();
 return lbl_80563BF4;
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
 object.unknown00=lbl_804A33CC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80133B20(){
 fn_80066188((int)igScalePs2Texture_register);
}
void igScalePs2Texture_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563BF4,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igScalePs2Texture_getMetaCall,(int)lbl_8049C550,44,(int)igScalePs2Texture_vtableRead,0,0,0);
}
void *igScalePs2Texture_getMetaCall(){return igScalePs2Texture_getMeta();}
void *igScaleActors_getMeta(){
 if(!lbl_80563BF8 || !(reinterpret_cast<unsigned int *>(lbl_80563BF8)[0x24/4]&4)) fn_80133D3C();
 return lbl_80563BF8;
}
void *igScaleActors_vtableRead(){
 UnknownGenObject80133C0C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A3464;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80133D3C(){
 fn_80066188((int)igScaleActors_register);
}
void igScaleActors_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563BF8,(int)igOptBase_register,(int)fn_801308D0,(int)igScaleActors_getMetaCall,(int)lbl_8049C564,48,(int)igScaleActors_vtableRead,(int)igScaleActors_fieldInit,0,(int)lbl_8055F584);
}
void *igScaleActors_getMetaCall(){return igScaleActors_getMeta();}
void igScaleActors_fieldInit(){
 void *value0=lbl_80563BF8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F58C,2);
 void *value2=fn_800658E4(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_80566AEC+0)));
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_801BFF38();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 fn_800659C0(value0,lbl_8055F594,lbl_8055F59C,lbl_8055F5A4,value1);
}
void *igResortTransparency_getMeta(){
 if(!lbl_80563C04 || !(reinterpret_cast<unsigned int *>(lbl_80563C04)[0x24/4]&4)) fn_80134018();
 return lbl_80563C04;
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
 object.unknown00=lbl_804A34EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80134018(){
 fn_80066188((int)igResortTransparency_register);
}
void igResortTransparency_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C04,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igResortTransparency_getMetaCall,(int)lbl_8049C588,44,(int)igResortTransparency_vtableRead,0,0,0);
}
void *igResortTransparency_getMetaCall(){return igResortTransparency_getMeta();}
void *fn_801340C8(){
 char *data=lbl_8049BC80;
 if(!lbl_80563C08) lbl_80563C08=fn_800635C8(data+0x990,data+0x950,data+0x970,0x8);
 return lbl_80563C08;
}
void *igResizeImage_getMeta(){
 if(!lbl_80563C0C || !(reinterpret_cast<unsigned int *>(lbl_80563C0C)[0x24/4]&4)) fn_80134290();
 return lbl_80563C0C;
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
 object.unknown00=lbl_804A3584;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80134290(){
 fn_80066188((int)igResizeImage_register);
}
void igResizeImage_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C0C,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igResizeImage_getMetaCall,(int)lbl_8049C61C,76,(int)igResizeImage_vtableRead,(int)igResizeImage_fieldInit,0,0);
}
void *igResizeImage_getMetaCall(){return igResizeImage_getMeta();}
}
#pragma pop
