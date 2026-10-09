#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_80046E58(void *,void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDCC8();
void igPixelShaderAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_80478CBC[];
extern char lbl_80478CD0[];
extern char lbl_80478CE8[];
extern char lbl_80478D10[];
extern char lbl_80478D24[];
extern char lbl_8047B85C[];
extern char lbl_8047B8E0[];
extern char lbl_8047B964[];
extern char lbl_8047B9E4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E274[4];
extern char lbl_8055E278[4];
extern char lbl_8055E27C[4];
extern char lbl_8055E280[4];
extern char lbl_8055E284[4];
extern char lbl_8055E288[4];
extern char lbl_8055E294[4];
extern char lbl_8055E298[4];
extern char lbl_8055E29C[4];
extern char lbl_8055E2A0[8];
extern char lbl_8055E2A8[4];
extern char lbl_8055E2AC[4];
extern char lbl_8055E2B0[4];
extern char lbl_8055E2B4[4];
extern void *lbl_805621F4;
extern void *lbl_805626A8;
extern void *lbl_805626B0;
extern void *lbl_805626B8;
extern void *lbl_805626C0;
extern char lbl_80566818[4];
void *igPolygonModeAttr_getMeta();
void *igPolygonModeAttr_vtableRead();
void fn_800B2154();
void igPolygonModeAttr_register();
void *igPolygonModeAttr_getMetaCall();
void igPolygonModeAttr_fieldInit();
void *igPointSpriteSizeAttr_getMeta();
void *igPointSpriteSizeAttr_vtableRead();
void fn_800B232C();
void igPointSpriteSizeAttr_register();
void *igPointSpriteSizeAttr_getMetaCall();
void igPointSpriteSizeAttr_fieldInit();
void *igPixelShaderBindAttr_getMeta();
void *igPixelShaderBindAttr_vtableRead();
void fn_800B253C();
void igPixelShaderBindAttr_register();
void *igPixelShaderBindAttr_getMetaCall();
void igPixelShaderBindAttr_fieldInit();
void *fn_800B2678();
void *igPixelShaderAttr_getMeta();
void *igPixelShaderAttr_vtableRead();
void fn_800B28B0();
void igPixelShaderAttr_register();
void *igPixelShaderAttr_getMetaCall();
}
struct UnknownGenObject800B20FC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B22D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B249C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B249C(){fn_8006665C(this);}
};
struct UnknownGenObject800B249C : UnknownGenRoot800B249C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B249C(){unknown00=lbl_8047B964;}
};
struct UnknownGenRoot800B26F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B26F0(){fn_8006665C(this);}
};
struct UnknownGenObject800B26F0 : UnknownGenRoot800B26F0 {
 char unknown04[24];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B26F0(){unknown00=lbl_8047B9E4;}
};
extern "C" {
void *fn_800B2084(){
 if(!lbl_805626A8) lbl_805626A8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805626A8;
}
void *igPolygonModeAttr_getMeta(){
 if(!lbl_805626A8 || !(reinterpret_cast<unsigned int *>(lbl_805626A8)[0x24/4]&4)) fn_800B2154();
 return lbl_805626A8;
}
void *igPolygonModeAttr_vtableRead(){
 UnknownGenObject800B20FC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B85C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B2154(){
 fn_80066188((int)igPolygonModeAttr_register);
}
void igPolygonModeAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626A8,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igPolygonModeAttr_getMetaCall,(int)lbl_80478CBC,16,(int)igPolygonModeAttr_vtableRead,(int)igPolygonModeAttr_fieldInit,0,0);
}
void *igPolygonModeAttr_getMetaCall(){return igPolygonModeAttr_getMeta();}
void igPolygonModeAttr_fieldInit(){
 void *value0=lbl_805626A8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E274,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E284);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDCC8;
 fn_800659C0(value0,lbl_8055E278,lbl_8055E27C,lbl_8055E280,value1);
}
void *igPointSpriteSizeAttr_getMeta(){
 if(!lbl_805626B0 || !(reinterpret_cast<unsigned int *>(lbl_805626B0)[0x24/4]&4)) fn_800B232C();
 return lbl_805626B0;
}
void *igPointSpriteSizeAttr_vtableRead(){
 UnknownGenObject800B22D4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B8E0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B232C(){
 fn_80066188((int)igPointSpriteSizeAttr_register);
}
void igPointSpriteSizeAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626B0,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igPointSpriteSizeAttr_getMetaCall,(int)lbl_80478CD0,16,(int)igPointSpriteSizeAttr_vtableRead,(int)igPointSpriteSizeAttr_fieldInit,0,0);
}
void *igPointSpriteSizeAttr_getMetaCall(){return igPointSpriteSizeAttr_getMeta();}
void igPointSpriteSizeAttr_fieldInit(){
 void *value0=lbl_805626B0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E288,1);
 void *value2=fn_800658E4(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_80566818+0)));
 fn_800659C0(value0,lbl_8055E294,lbl_8055E298,lbl_8055E29C,value1);
}
void *igPixelShaderBindAttr_getMeta(){
 if(!lbl_805626B8 || !(reinterpret_cast<unsigned int *>(lbl_805626B8)[0x24/4]&4)) fn_800B253C();
 return lbl_805626B8;
}
void *igPixelShaderBindAttr_vtableRead(){
 UnknownGenObject800B249C object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B964;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B253C(){
 fn_80066188((int)igPixelShaderBindAttr_register);
}
void igPixelShaderBindAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626B8,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igPixelShaderBindAttr_getMetaCall,(int)lbl_80478CE8,16,(int)igPixelShaderBindAttr_vtableRead,(int)igPixelShaderBindAttr_fieldInit,0,(int)lbl_8055E2A0);
}
void *igPixelShaderBindAttr_getMetaCall(){return igPixelShaderBindAttr_getMeta();}
void igPixelShaderBindAttr_fieldInit(){
 void *value0=lbl_805626B8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E2A8,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800B2678();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055E2AC,lbl_8055E2B0,lbl_8055E2B4,value1);
}
void *fn_800B2678(){
 if(!lbl_805626C0) lbl_805626C0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805626C0;
}
void *igPixelShaderAttr_getMeta(){
 if(!lbl_805626C0 || !(reinterpret_cast<unsigned int *>(lbl_805626C0)[0x24/4]&4)) fn_800B28B0();
 return lbl_805626C0;
}
void *igPixelShaderAttr_vtableRead(){
 UnknownGenObject800B26F0 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B9E4;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B28B0(){
 fn_80066188((int)igPixelShaderAttr_register);
}
void igPixelShaderAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626C0,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igPixelShaderAttr_getMetaCall,(int)lbl_80478D24,52,(int)igPixelShaderAttr_vtableRead,(int)igPixelShaderAttr_fieldInit,0,(int)lbl_80478D10);
}
void *igPixelShaderAttr_getMetaCall(){return igPixelShaderAttr_getMeta();}
}
#pragma pop
