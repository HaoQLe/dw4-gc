#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
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
void fn_800AC6A0(void *,short);
void fn_800AC8A8();
void igVisualAttribute_register();
extern char lbl_80477DDC[];
extern char lbl_8047A704[];
extern char lbl_8047A784[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055DEA0[8];
extern char lbl_8055DEA8[4];
extern char lbl_8055DEAC[4];
extern char lbl_8055DEB0[4];
extern char lbl_8055DEB4[4];
extern void *lbl_805621F4;
extern void *lbl_80562430;
extern void *lbl_80562438;
void *igVertexShaderBindAttr_getMeta();
void *igVertexShaderBindAttr_vtableRead();
void fn_800AC458();
void igVertexShaderBindAttr_register();
void *igVertexShaderBindAttr_getMetaCall();
void igVertexShaderBindAttr_fieldInit();
void *fn_800AC594();
}
struct UnknownGenRoot800AC3B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AC3B8(){fn_8006665C(this);}
};
struct UnknownGenObject800AC3B8 : UnknownGenRoot800AC3B8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800AC3B8(){unknown00=lbl_8047A704;}
};
struct UnknownGenObject800AC60C {
 void *unknown00;
 char unknown04[8];
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 char unknown20[8];
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 char unknown38[8];
};
extern "C" {
void *igVertexShaderBindAttr_getMeta(){
 if(!lbl_80562430 || !(reinterpret_cast<unsigned int *>(lbl_80562430)[0x24/4]&4)) fn_800AC458();
 return lbl_80562430;
}
void *igVertexShaderBindAttr_vtableRead(){
 UnknownGenObject800AC3B8 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A704;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AC458(){
 fn_80066188((int)igVertexShaderBindAttr_register);
}
void igVertexShaderBindAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562430,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igVertexShaderBindAttr_getMetaCall,(int)lbl_80477DDC,16,(int)igVertexShaderBindAttr_vtableRead,(int)igVertexShaderBindAttr_fieldInit,0,(int)lbl_8055DEA0);
}
void *igVertexShaderBindAttr_getMetaCall(){return igVertexShaderBindAttr_getMeta();}
void igVertexShaderBindAttr_fieldInit(){
 void *value0=lbl_80562430;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055DEA8,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800AC594();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055DEAC,lbl_8055DEB0,lbl_8055DEB4,value1);
}
void *fn_800AC594(){
 if(!lbl_80562438) lbl_80562438=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562438;
}
void *igVertexShaderAttr_getMeta(){
 if(!lbl_80562438 || !(reinterpret_cast<unsigned int *>(lbl_80562438)[0x24/4]&4)) fn_800AC8A8();
 return lbl_80562438;
}
void *igVertexShaderAttr_vtableRead(){
 UnknownGenObject800AC60C object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A784;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown34=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_800AC6A0(&object,-1);
 return result;
}
}
#pragma pop
